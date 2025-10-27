# File Encryption Project

A simple C++ console application that allows users to encrypt, decrypt, and view text files.
This project demonstrates basic file handling, class implementation, and a Caesar Cipher–style encryption.

# Features

🔸 Encrypt a File — Shifts all characters to make the text unreadable.

🔸 Decrypt a File — Restores the original readable text.

🔸 Display File Contents — Prints the current content of the file.

🔸 Change File — Lets you switch to another file anytime.

# How It Works

The program uses a simple ASCII shift encryption:

Operation	Formula	Example
Encryption	ch = ch + 2	A → C, b → d
Decryption	ch = ch - 2	C → A, d → b

This basic logic scrambles the content of the file and restores it back later.

# Class Overview
class Encryption
Method	Description
setFileName()	Prompts the user for a file name.
encrypt()	Encrypts file content by shifting ASCII values by +2.
decrypt()	Decrypts file content by reversing the shift (−2).
display()	Displays the contents of the file.


# Menu Options

When you run the program, you’ll see this menu:

=== FILE ENCRYPTION PROJECT ===

Enter the filename (with extension): sample.txt

1. Encrypt File
2. Decrypt File
3. Show File
4. Change File
5. Exit
Enter your choice: 


# Before Encryption (original content):
Hello World!
This is a test file.


# After Encryption:
Jgnnq"Yqtnf#
Vjku"ku"c"vguv"hknf0


# After Decryption:
Hello World!
This is a test file.


# Concepts Used

File Handling with fstream

Class and Object Implementation

ASCII-based Caesar Cipher Logic

Temporary File Creation and Replacement

Menu-driven Program using Loops and Switch Statements

# Author

Developed by: Rehan
Language: C++
Purpose:  Encryption Demonstration
Platform: Works on Windows, Linux, and macOS
