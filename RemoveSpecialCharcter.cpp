#include <iostream>
#include <string>

using namespace std;

string removeChar(const string& str, char c) {
    string result;
    for (char ch : str) {
        if (ch != c) {
            result += ch;
        }
    }
    return result;
}

int main() {
    string str;
    char c;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to remove: ";
    cin >> c;

    string updatedStr = removeChar(str, c);

    cout << "Updated string: " << updatedStr << endl;

    return 0;
}