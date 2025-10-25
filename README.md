# Student Management System (C/C++)

A simple **Student Management System** implemented in C/C++ demonstrating **menu-driven interaction** for adding, displaying, searching, deleting, and updating student records.

---

## Table of Contents

* [Overview](#overview)
* [Features](#features)
* [Usage](#usage)
* [Code Structure](#code-structure)
* [Example Output](#example-output)
* [License](#license)

---

## Overview

This project implements a **menu-driven student management system** using a structure array. The system allows the user to:

* Add a student record
* Display all student records
* Search a student by ID
* Delete a student by ID
* Update student details

It is designed to handle multiple student records efficiently and demonstrates the use of **modular programming** by separating function definitions into `student.h` and `student.c` files.

---

## Features

* Menu-driven console application
* Add, display, search, delete, and update student records
* Validates user input and handles invalid choices
* Modular design using separate implementation files
* Compatible with Windows systems (uses `<windows.h>` for Sleep)

---

## Usage

1. Clone the repository:

```bash
git clone <repository-url>
```

2. Compile the code:

```bash
gcc main.c student.c -o StudentApp
```

3. Run the application:

```bash
./StudentApp
```

Follow the on-screen menu to manage student records.

---

## Code Structure

```
.
├── student.h         
├── student.c         
├── main.c            
└── README.md         
```

---

## Example Output

```
===== STUDENT MANAGEMENT SYSTEM =====
1. Add Student
2. Display All Students
3. Search Student by ID
4. Delete Student by ID
5. Update Student by ID
6. Exit
Enter your choice: 1
Student added successfully!

===== STUDENT MANAGEMENT SYSTEM =====
Enter your choice: 2
ID: 101, Name: Alice, Age: 20, Grade: A

===== STUDENT MANAGEMENT SYSTEM =====
Enter your choice: 3
Enter ID to search: 101
ID: 101, Name: Alice, Age: 20, Grade: A
```

---