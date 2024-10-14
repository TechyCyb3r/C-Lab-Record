#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_LINES = 1000; // Adjust this limit as needed
    string lines[MAX_LINES];
    string line;
    int m, n, totalLines;

    cout << "Enter the number of lines you want to input: ";
    cin >> totalLines;
    cin.ignore(); // To ignore the newline character after the integer input
    if (totalLines > MAX_LINES) {
        cerr << "Exceeded maximum number of lines (" << MAX_LINES << ").\n";
        return 1;
    }
    cout << "Enter the text (each line followed by Enter, end input with an empty line):\n";
    for (int i = 0; i < totalLines; ++i) {
        getline(cin, lines[i]);
    }
    cout << "Enter the starting line number (m): ";
    cin >> m;
    cout << "Enter the number of lines to display (n): ";
    cin >> n;
    if (m < 1 || m > totalLines || n < 1 || m + n - 1 > totalLines) {
        cerr << "Invalid input range.\n";
        return 1;
    }
    cout << "Displaying " << n << " lines starting from line " << m << ":\n";
    for (int i = m - 1; i < m - 1 + n; ++i) {
        cout << lines[i] << "\n";
    }

    return 0;
}