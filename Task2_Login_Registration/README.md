# Login and Registration System – CodeAlpha C++ Internship

A console-based **Login and Registration System** developed using C++ as part of the CodeAlpha C++ Programming Internship.

This application provides a basic user authentication system that allows new users to register with a username and password and existing users to log in using their registered credentials. The system uses file handling to store and retrieve user information.

## Features

- **User Registration:** Create a new account using a unique username and password.
- **User Login:** Authenticate users using their registered credentials.
- **Duplicate Username Detection:** Prevent multiple accounts from being created with the same username.
- **Input Validation:** Ensure usernames contain at least 4 characters and passwords contain at least 8 characters.
- **File Handling:** Store registered user credentials in a text file.
- **Credential Verification:** Compare entered login details with stored records.
- **Interactive Menu:** Provide options for registration, login, and exiting the application.
- **Error Handling:** Display appropriate messages for invalid inputs, incorrect credentials, and duplicate usernames.

## Technologies Used

- **Programming Language:** C++
- **Concepts:** Functions, Loops, Conditional Statements, File Handling, String Manipulation
- **Libraries:** iostream, fstream, string

## Project Structure

```text
Login-Registration-System/
│
├── login_system.cpp
├── users.txt
└── README.md
```

**Note:** The `users.txt` file is automatically created when the first user successfully registers.

## Installation and Execution

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/CodeAlpha_Login_System.git
```

### 2. Navigate to the Project Directory

```bash
cd CodeAlpha_Login_System
```

### 3. Compile the Program

Using GCC/G++:

```bash
g++ login_system.cpp -o login_system.exe
```

### 4. Run the Program

On Windows:

```bash
.\login_system.exe
```

## Application Workflow

1. The application displays a menu with three options: Register, Login, and Exit.
2. New users select the registration option.
3. The system collects a username and password.
4. It validates the entered details and checks whether the username already exists.
5. If registration is successful, the credentials are stored in `users.txt`.
6. Registered users can select the login option.
7. The system verifies the entered credentials against the stored records.
8. A success or error message is displayed based on the authentication result.

## Sample Output

### Registration

```text
====================================
     LOGIN AND REGISTRATION SYSTEM
====================================
1. Register
2. Login
3. Exit

Enter your choice: 1

========== REGISTRATION ==========
Enter username: surabhi
Enter password: ********

Registration successful!
Your account has been created.
```

### Login

```text
Enter your choice: 2

============= LOGIN =============
Enter username: surabhi
Enter password: ********

Login successful!
Welcome, surabhi!
```

### Invalid Credentials

```text
Enter your choice: 2

============= LOGIN =============
Enter username: surabhi
Enter password: wrongpassword

Invalid username or password!
```

## Learning Outcomes

Through this project, I gained practical experience in:

- Implementing basic authentication logic using C++.
- Understanding file handling for persistent data storage.
- Working with functions to organize program functionality.
- Applying conditional statements and loops to build an interactive application.
- Implementing input validation and duplicate record checking.
- Understanding the fundamentals of user registration and login systems.

## Internship Details

**Organization:** CodeAlpha  
**Program:** C++ Programming Internship  
**Task:** Task 2 – Login and Registration System

---

*Developed as part of the CodeAlpha C++ Programming Internship.*