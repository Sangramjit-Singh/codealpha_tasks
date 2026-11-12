# CodeAlpha C++ Programming Internship

Welcome to my **CodeAlpha C++ Programming Internship Projects** repository.

This repository contains the C++ programming tasks completed as part of my internship at CodeAlpha. The projects demonstrate my understanding of C++ fundamentals, problem-solving, functions, conditional statements, loops, data handling, and file handling.

## Projects

### Task 1 – CGPA Calculator

A console-based application that calculates a student's Semester GPA and Overall CGPA based on course grades and credit hours.

**Features:**
- Accepts multiple courses and their details.
- Takes grade points and credit hours as input.
- Calculates Semester GPA using weighted averages.
- Calculates Overall CGPA using previous academic records.
- Validates grades, credit hours, and academic inputs.
- Generates a formatted academic performance report.

**Technologies:** C++, Structures, Functions, Vectors, Mathematical Operations.

**Source Code:** `Task1_CGPA_Calculator/cgpa_calculator.cpp`

### Task 2 – Login and Registration System

A menu-driven authentication application that allows users to register accounts and log in using their registered credentials.

**Features:**
- New user registration.
- Username and password validation.
- Duplicate username detection.
- User authentication and credential verification.
- File handling for storing registered user information.
- Interactive menu with registration, login, and exit options.

**Technologies:** C++, Functions, Loops, Conditional Statements, File Handling, String Manipulation.

**Source Code:** `Task2_Login_System/login_system.cpp`

## Repository Structure

```text
codealpha_tasks/
│
├── Task1_CGPA_Calculator/
│   ├── cgpa_calculator.cpp
│   └── README.md
│
├── Task2_Login_System/
│   ├── login_system.cpp
│   └── README.md
│
├── .gitignore
└── README.md
```

## Requirements

To compile and run these projects, you need:

- Windows, Linux, or macOS.
- A C++ compiler (GCC/G++).
- Visual Studio Code (recommended).
- C++ extension for VS Code.

## How to Run the Projects

Make sure GCC/G++ is installed and configured in your system PATH.

### Task 1 – CGPA Calculator

Navigate to the Task 1 directory:

```bash
cd Task1_CGPA_Calculator
```

Compile:

```bash
g++ cgpa_calculator.cpp -o cgpa.exe
```

Run on Windows:

```bash
.\cgpa.exe
```

### Task 2 – Login and Registration System

Navigate to the Task 2 directory:

```bash
cd Task2_Login_System
```

Compile:

```bash
g++ login
