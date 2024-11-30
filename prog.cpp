#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main() {
    pid_t pid = fork(); // create a child process
    if (pid < 0) { // error handling
        cerr << "Error: fork failed\n";
        return 1;
    } else if (pid == 0) { // child process
        execl("/bin/ls", "ls", "-l", NULL); // execute "ls -l" shell command
        cerr << "Error: execl failed\n"; // if execl returns, there was an error
        return 1;
    } else { // parent process
        waitpid(pid, NULL, 0); // wait for child process to complete
        cout << "Child process completed\n";
        return 0;
    }
}
