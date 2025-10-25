#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[50];
    int age;
    float marks;
} Student;

void addStudent(Student students[], int *count);
void displayStudents(Student students[], int count);
void searchStudent(Student students[], int count, int id);
void deleteStudent(Student students[], int *count, int id);
void updateStudent(Student students[], int count, int id);

#endif