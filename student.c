// Definitions (implementation of functions) and Builders for Student Management System

#include <stdio.h>
#include <string.h>
#include <windows.h>  // For Sleep(ms) //
#include "student.h"

// Add a New Student //
void addStudent(Student students[], int *count) {
    if (*count >= MAX_STUDENTS) {
        printf("Maximum student limit reached.\n");
        printf("Returning to menu in 5 seconds...\n");
        Sleep(5000);
        return;
    }

    Student s;
    printf("Enter ID: ");
    scanf("%d", &s.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter Age: ");
    scanf("%d", &s.age);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    students[*count] = s;
    (*count)++;
    printf("Student added successfully!\n");
    printf("Returning to menu in 5 seconds...\n");
    Sleep(5000);
}

// Display All Students //
void displayStudents(Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
        printf("Returning to menu in 3 seconds...\n");
        Sleep(3000);
        return;
    }

    printf("\n%-5s %-25s %-10s %-10s\n", "ID", "Name", "Age", "Marks");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-5d %-25s %-10d %-10.2f\n",
               students[i].id, students[i].name, students[i].age, students[i].marks);
    }

    printf("\nDisplay complete. Returning to menu in 3 seconds...\n");
    Sleep(3000);
}

// Search a Student by ID //
void searchStudent(Student students[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Student found:\n");
            printf("ID: %d\nName: %s\nAge: %d\nMarks: %.2f\n",
                   students[i].id, students[i].name, students[i].age, students[i].marks);
            printf("Returning to menu in 3 seconds...\n");
            Sleep(3000);
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
    printf("Returning to menu in 3 seconds...\n");
    Sleep(3000);
}

// Delete a Student by ID //
void deleteStudent(Student students[], int *count, int id) {
    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Student with ID %d deleted successfully.\n", id);
            printf("Returning to menu in 3 seconds...\n");
            Sleep(3000);
            return;
        }
    }

    printf("Student with ID %d not found.\n", id);
    printf("Returning to menu in 3 seconds...\n");
    Sleep(3000);
}

// Update a Student by ID //
void updateStudent(Student students[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new Name: ");
            scanf(" %[^\n]", students[i].name);
            printf("Enter new Age: ");
            scanf("%d", &students[i].age);
            printf("Enter new Marks: ");
            scanf("%f", &students[i].marks);
            printf("Student updated successfully.\n");
            printf("Returning to menu in 3 seconds...\n");
            Sleep(3000);
            return;
        }
    }

    printf("Student with ID %d not found.\n", id);
    printf("Returning to menu in 3 seconds...\n");
    Sleep(3000);
}
