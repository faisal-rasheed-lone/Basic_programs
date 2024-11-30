# Function to display all tasks with indices
def display_tasks(tasks):
    """
    Display all tasks with their indices.
    If the task list is empty, notify the user.
    """
    if tasks:
        print("\nHere are your tasks:")
        for i, task in enumerate(tasks, 1):  # Enumerate to display index starting from 1
            print(f"{i} : {task}")
    else:
        print("\nTask list is empty.")  # Notify if the list is empty


# Initialize the task list
myTasks = []

# Start the main program loop
while True:
    # Display the main menu
    print("\nWelcome to Task Manager")
    print("1 : Add a New Task")
    print("2 : Remove a Task")
    print("3 : View All Tasks")
    print("4 : Modify a Task")
    print("5 : Exit")
    
    try:
        # Get the user's choice
        ch = int(input("Enter your choice: "))
        
        if ch == 1:
            # Option 1: Add a new task
            newTask = input("Enter the new task: ")
            myTasks.append(newTask)  # Append the new task to the list
            print("Task added successfully!")

        elif ch == 2:
            # Option 2: Remove a task
            if myTasks:
                # Display current tasks for selection
                display_tasks(myTasks)
                taskNo = int(input("Enter the task number to remove: "))
                if 1 <= taskNo <= len(myTasks):
                    removedTask = myTasks.pop(taskNo - 1)  # Remove the task at the selected index
                    print(f"Task '{removedTask}' removed successfully!")
                else:
                    print("Invalid task number. Please try again.")
            else:
                print("Task list is empty. Nothing to remove.")

        elif ch == 3:
            # Option 3: View all tasks
            display_tasks(myTasks)

        elif ch == 4:
            # Option 4: Modify a task
            if myTasks:
                # Display current tasks for selection
                display_tasks(myTasks)
                taskNo = int(input("Enter the task number to modify: "))
                if 1 <= taskNo <= len(myTasks):
                    newValue = input("Enter the new value for the selected task: ")
                    myTasks[taskNo - 1] = newValue  # Update the task with the new value
                    print("Task updated successfully!")
                else:
                    print("Invalid task number. Please try again.")
            else:
                print("Task list is empty. Nothing to modify.")

        elif ch == 5:
            # Option 5: Exit the program
            print("Thank you for using Task Manager. Goodbye!")
            break  # Exit the loop

        else:
            # Handle invalid menu choices
            print("Invalid choice! Please select a valid option.")

    except ValueError:
        # Handle invalid inputs that cannot be converted to integers
        print("Invalid input! Please enter a number corresponding to the menu options.")
