#include <iostream>

using namespace std;

const int BUFFER_SIZE = 5;
int buffer[BUFFER_SIZE];
int in = 0, out = 0;
int itemCount = 0;

// Define a Semaphore class to represent a semaphore.
class Semaphore {
public:
    Semaphore(int value = 0) : count{value} {}

    // The notify method increments the count of the semaphore and notifies a waiting thread using a condition variable.
    void notify() {
        std::unique_lock<std::mutex> lock{mutex};
        ++count;
        cv.notify_one();
    }

    // The wait method waits on the semaphore until the count is greater than zero.
    void wait() {
        std::unique_lock<std::mutex> lock{mutex};
        while (count == 0) {
            cv.wait(lock);
        }
        --count;
    }

private:
    std::mutex mutex;
    std::condition_variable cv;
    int count;
};

Semaphore empty(BUFFER_SIZE); // Initialize the empty semaphore with BUFFER_SIZE as the initial value.
Semaphore full(0); // Initialize the full semaphore with zero as the initial value.
std::mutex mutex; // Initialize the mutex.

// The producer function adds items to the buffer.
void producer() {
    for (int i = 1; i <= 10; ++i) {
        empty.wait(); // Wait for an empty slot in the buffer.
        mutex.lock(); // Acquire the lock.
        buffer[in] = i; // Add the item to the buffer.
        cout << "Produced: " << i << endl; // Print the item that was produced.
        in = (in + 1) % BUFFER_SIZE; // Update the in pointer.
        ++itemCount; // Increment the item count.
        mutex.unlock(); // Release the lock.
        full.notify(); // Notify the consumer that a new item is available.
    }
}

// The consumer function removes items from the buffer.
void consumer() {
    for (int i = 1; i <= 10; ++i) {
        full.wait(); // Wait for a full slot in the buffer.
        mutex.lock(); // Acquire the lock.
        int item = buffer[out]; // Remove the item from the buffer.
        cout << "Consumed: " << item << endl; // Print the item that was consumed.
        out = (out + 1) % BUFFER_SIZE; // Update the out pointer.
        --itemCount; // Decrement the item count.
        mutex.unlock(); // Release the lock.
        empty.notify(); // Notify the producer that a slot has become available.
    }
}

// The main function creates the threads and waits for them to complete.
int main() {
    std::thread t1(producer); // Create the producer thread.
    std::thread t2(consumer); // Create the consumer thread.
    t1.join(); // Wait for the producer thread to complete.
    t2.join(); // Wait for the consumer thread to complete.
    return 0; // Exit the program.
}
