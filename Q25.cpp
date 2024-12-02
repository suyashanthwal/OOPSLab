#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    char ch;
    cout << "Reading and writing character by character: " << endl;
    fin.open("C://Users//suyas//FULL C//2ND YEAR//abc.txt");
    fout.open("C://Users//suyas//FULL C//2ND YEAR//output.txt");
    if (!fin) {
        cout << "Error opening input file." << endl;
        return 1;
    }
    if (!fout) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    fin >> ch;
    while (!fin.eof()) {
        cout << ch;
        fout << ch;
        fin >> ch;
    }
    fin.close();
    fout.close();
    cout << endl;

    // Reading and writing word by word
    cout << "\n Reading and writing word by word: " << endl;
    fin.open("C://Users//suyas//FULL C//2ND YEAR//abc.txt");
    fout.open("C://Users//suyas//FULL C//2ND YEAR//output.txt");
    if (!fin) {
        cout << "Error opening input file." << endl;
        return 1;
    }
    if (!fout) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    string word;
    while (fin >> word) {
        cout << word << " "; 
        fout << word << " ";
    }
    fin.close();
    fout.close();
    cout << endl;

    // Reading and writing line by line
    cout << "\n Reading and writing line by line:" << endl;
    fin.open("C://Users//suyas//FULL C//2ND YEAR//abc.txt");
    fout.open("C://Users//suyas//FULL C//2ND YEAR//output.txt");
    if (!fin) {
        cout << "Error opening input file." << endl;
        return 1;
    }
    if (!fout) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        cout << line << endl;
        fout << line << endl;
    }
    fin.close();
    fout.close();

    return 0;
}
