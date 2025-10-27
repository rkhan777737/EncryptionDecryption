#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

class Encryption {
    char ch;
    string filename;
    public:
    void setfilename();
    void encrypt();
    void decrypt();
    void display();
};
void Encryption::setfilename() {
    cout << "Enter the filename(with extension): ";
    cin >> filename;
}
void Encryption::encrypt() {
    fstream fin,fout;
    fin.open(filename,fstream::in);
    if(!fin) {
        cout << "File not found!" << endl;
        return;
    }
    fout.open("encrypted_.txt",fstream::out);
    while(fin >> noskipws >> ch) {
        ch = ch + 2;
        fout << ch;
    }
    fin.close();
    fout.close();
    fin.open("encrypted_.txt",fstream::in);
    fout.open(filename,fstream::out);
    while(fin>>noskipws>>ch)
       fout<<ch;
    fin.close();
    fout.close();
    remove("encrypted_.txt");
    cout << "File encrypted successfully!" << endl;
}
void Encryption::decrypt() {
    fstream fin,fout;
    fin.open(filename,fstream::in);
    if(!fin) {
        cout << "File not found!" << endl;
        return;
    }
    fout.open("decrypted_.txt",fstream::out);
    while(fin>>noskipws>>ch) {
        ch = ch - 2;
        fout << ch;
    }
    fin.close();
    fout.close();
    fin.open("decrypted_.txt",fstream::in);
    fout.open(filename,fstream::out);
    while(fin>>noskipws>>ch)
       fout<<ch;
    fin.close();
    fout.close();
    remove("decrypted_.txt");
    cout << "File decrypted successfully!" << endl;
}  
void Encryption::display() {
    fstream fin;
    fin.open(filename,fstream::in);
    if(!fin) {
        cout << "File not found!" << endl;
        return;
    }
    cout << "Contents of the file:" << endl;
    while(fin>>noskipws>>ch) {
        cout << ch;
    }
    cout << endl;
    fin.close();
}

int main() {
    Encryption file;
    int choice;

    cout << "\n=== FILE ENCRYPTION PROJECT ===\n\n";
    file.setfilename();  // ask user for file name

    do {
        cout << "1. Encrypt File\n";
        cout << "2. Decrypt File\n";
        cout << "3. Show File\n";
        cout << "4. Change File\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: file.encrypt(); break;
            case 2: file.decrypt(); break;
            case 3: file.display(); break;
            case 4: file.setfilename(); break;
            case 5: cout << "\nExiting...\n"; break;
            default: cout << "\nInvalid choice. Try again.\n\n";
        }
    } while (choice != 5);

    return 0;
}
