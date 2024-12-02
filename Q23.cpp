#include <iostream>
#include <exception>
using namespace std;

int largest_proper_divisor(int n) {
    if (n <= 1) {
        throw std::invalid_argument("No proper divisors for this number");
    }
    for (int i = n / 2; i > 0; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    throw std::invalid_argument("No proper divisors found");
}

void process_input(int n) {
    try {
        int d = largest_proper_divisor(n);
        cout << "result=" << d << endl;
    } catch (const std::exception& e) {
        cout << e.what() << endl;
    } catch (...) {
        cout << "An unknown error occurred" << endl;
    }

    cout << "returning control flow to the caller" << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    process_input(n);

    return 0;
}
