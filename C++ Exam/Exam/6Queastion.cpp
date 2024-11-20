#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept> // For exception handling
using namespace std;

// Class to manage file operations
class FileManager {
public:
    // Method to read data from a file
    void readFromFile(const string& filename) {
        ifstream file(filename); // Try to open the file

        // Check if the file opened successfully
        if (!file) {
            throw runtime_error("Error: Could not open the file.");
        }

        string line;
        // Read and display each line from the file
        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close(); // Close the file after reading
    }
};

// Main function
int main() {
    FileManager fileManager;

    string filename;
    cout << "Enter the filename to read from: ";
    cin >> filename;

    try {
        // Attempt to read from the file
        fileManager.readFromFile(filename);
    }
    catch (const runtime_error& e) {
        // Catch and handle file opening errors
        cout << e.what() << endl;
    }

    return 0;
}
