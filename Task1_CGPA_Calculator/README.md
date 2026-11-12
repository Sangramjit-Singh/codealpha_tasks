# CGPA Calculator – CodeAlpha C++ Internship

A console-based **CGPA Calculator** developed using C++ as part of the CodeAlpha C++ Programming Internship.

This application allows students to calculate their Semester GPA and Overall CGPA based on course grades and credit hours. It provides an organized academic report displaying individual course details, total credits, grade points, and calculated GPA.

## Features

- **Course Management:** Enter the number of courses and their respective details.
- **Grade Input:** Accept grade points on a 10-point grading scale.
- **Credit Hour Calculation:** Input credit hours for each course.
- **Semester GPA Calculation:** Calculate GPA using weighted grade points and credit hours.
- **Overall CGPA Calculation:** Combine previous academic performance with current semester results.
- **Input Validation:** Check for invalid grades, credit hours, and academic records.
- **Academic Report:** Display course-wise details, total credits, grade points, Semester GPA, and Overall CGPA.

## Technologies Used

- **Programming Language:** C++
- **Concepts:** Structures, Functions, Vectors, Loops, Conditional Statements
- **Libraries:** iostream, vector, iomanip, string

## Calculation Formula

### Semester GPA

\[
GPA = \frac{\sum(Grade\ Point \times Credit\ Hours)}{\sum Credit\ Hours}
\]

### Overall CGPA

\[
CGPA = \frac{Previous\ Grade\ Points + Current\ Grade\ Points}{Previous\ Credits + Current\ Credits}
\]

Where:

- Previous Grade Points = Previous CGPA × Previous Credits
- Current Grade Points = Sum of current semester grade points × credit hours

## Project Structure

```text
CGPA-Calculator/
│
├── cgpa_calculator.cpp
└── README.md
```

## Installation and Execution

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/CodeAlpha_CGPA_Calculator.git
```

### 2. Navigate to the Project Directory

```bash
cd CodeAlpha_CGPA_Calculator
```

### 3. Compile the Program

Using GCC/G++:

```bash
g++ cgpa_calculator.cpp -o cgpa.exe
```

### 4. Run the Program

On Windows:

```bash
.\cgpa.exe
```

## Sample Input

```text
Enter number of courses: 3

Course Name: Mathematics
Grade Point (0-10): 9
Credit Hours: 4

Course Name: Physics
Grade Point (0-10): 8
Credit Hours: 3

Course Name: Programming
Grade Point (0-10): 10
Credit Hours: 4

Enter previous CGPA (enter 0 if none): 8
Enter previously completed credit hours: 30
```

## Sample Output

```text
====================================
          ACADEMIC REPORT
====================================

Course: Mathematics
Grade Point: 9.00
Credit Hours: 4.00
Grade Points Earned: 36.00

Course: Physics
Grade Point: 8.00
Credit Hours: 3.00
Grade Points Earned: 24.00

Course: Programming
Grade Point: 10.00
Credit Hours: 4.00
Grade Points Earned: 40.00

------------------------------------
Total Credit Hours: 11.00
Total Grade Points: 100.00
Semester GPA: 9.09
Overall CGPA: 8.29
====================================
```

## Learning Outcomes

Through this project, I gained practical experience in:

- Applying object-oriented programming fundamentals and structured programming concepts in C++.
- Implementing mathematical calculations using functions.
- Working with structures and vectors to manage course information.
- Handling user input and validating data.
- Generating formatted console-based reports.

## Internship

**Program:** C++ Programming Internship  
**Organization:** CodeAlpha  
**Task:** Task 1 – CGPA Calculator

---

*Developed as part of the CodeAlpha C++ Programming Internship.*