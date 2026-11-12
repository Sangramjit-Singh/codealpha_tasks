#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string FILE_NAME = "users.txt";

// Check whether username already exists
bool usernameExists(string username) {
    ifstream file(FILE_NAME);

    string storedUsername, storedPassword;

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

// User registration
void registerUser() {
    string username, password;

    cout << "\n========== REGISTRATION ==========\n";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    // Validate username
    if (username.length() < 4) {
        cout << "\nUsername must contain at least 4 characters!\n";
        return;
    }

    // Validate password
    if (password.length() < 8) {
        cout << "\nPassword must contain at least 8 characters!\n";
        return;
    }

    // Check duplicate username
    if (usernameExists(username)) {
        cout << "\nUsername already exists! Try another username.\n";
        return;
    }

    // Store credentials in file
    ofstream file(FILE_NAME, ios::app);

    if (!file) {
        cout << "\nError opening user database!\n";
        return;
    }

    file << username << " " << password << endl;

    file.close();

    cout << "\nRegistration successful!\n";
    cout << "Your account has been created.\n";
}

// User login
void loginUser() {
    string username, password;

    cout << "\n============= LOGIN =============\n";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file(FILE_NAME);

    if (!file) {
        cout << "\nNo registered users found!\n";
        return;
    }

    string storedUsername, storedPassword;

    bool loginSuccess = false;

    // Verify credentials
    while (file >> storedUsername >> storedPassword) {

        if (storedUsername == username &&
            storedPassword == password) {

            loginSuccess = true;
            break;
        }
    }

    file.close();

    if (loginSuccess) {
        cout << "\nLogin successful!\n";
        cout << "Welcome, " << username << "!\n";
    }
    else {
        cout << "\nInvalid username or password!\n";
    }
}

// Main menu
int main() {
    int choice;

    do {
        cout << "\n====================================\n";
        cout << "     LOGIN AND REGISTRATION SYSTEM\n";
        cout << "====================================\n";

        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";

        cout << "\nEnter your choice: ";

        if (!(cin >> choice)) {
            cout << "\nInvalid input! Enter a number.\n";

            cin.clear();
            cin.ignore(10000, '\n');

            continue;
        }

        switch (choice) {

            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "\nThank you for using the system!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}