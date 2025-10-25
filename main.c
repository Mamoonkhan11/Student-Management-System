// Main driver (menu, user interaction) Manager of blueprint //

#include <stdio.h>
#include "student.h"         // Include implementation file with function definitions
#include <windows.h>
int main() 
{
    Student students[MAX_STUDENTS]; 
    int count = 0;                  
    int choice, id;                

    // Infinite loop for menu //
    while (1) {
        // Display main menu //
        Sleep(5000);
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Delete Student by ID\n");
        printf("5. Update Student by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Menu control using switch //
        switch (choice) {
            case 1:
                // Add new student //
                addStudent(students, &count);
                break;

            case 2:
                // Display all students //
                displayStudents(students, count);
                break;


            case 3:
                // Search student by ID //
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchStudent(students, count, id);
                break;

            case 4:
                // Delete student by ID //
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                deleteStudent(students, &count, id);
                break;

            case 5:
                // Update student details //
                printf("Enter ID to update: ");
                scanf("%d", &id);
                updateStudent(students, count, id);
                break;

            case 6:
                // Exit the program //
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                // Invalid option handling //
                printf("Invalid choice! Please try again.\n");
    }

    }
}
