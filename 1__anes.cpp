26. Create a Simple Text File with Append and Read Functionality
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void appendToFile() {
    ofstream outFile;
    string content;

    outFile.open("example.txt", ios::app); // Open file in append mode

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "Enter content to append to file (type 'exit' to stop):\n";
    while (true) {
        getline(cin, content);
        if (content == "exit") break;
        outFile << content << endl;
    }

    outFile.close();
    cout << "Content appended successfully!" << endl;
}

void readFile() {
    ifstream inFile;
    string line;

    inFile.open("example.txt");

    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    cout << "File Content:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

int main() {
    int choice;
    do {
        cout << "\nText File Operations Menu\n";
        cout << "1. Append to file\n";
        cout << "2. Read file content\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To clear the input buffer before getline

        switch (choice) {
            case 1:
                appendToFile();
                break;
            case 2:
                readFile();
                break;
            case 3:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
