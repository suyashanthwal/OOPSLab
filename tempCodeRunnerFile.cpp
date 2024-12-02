#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> vec(N);
    cout << "Enter " << N << " elements for the vector: ";
    for (int i = 0; i < N; ++i) {
        cin >> vec[i];
    }

    // First query:
    int position;
    cout << "Enter the position to be erased (0-based index): ";
    cin >> position;

    if (position >= 0 && position < vec.size()) {
        vec.erase(vec.begin() + position);
        cout << "Vector after removing element at position " << position << ": ";
        for (int i = 0; i < vec.size(); ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Second query:
    int start, end;
    cout << "Enter the start and end positions for the range to be erased (0-based indices): ";
    cin >> start >> end;

    if (start >= 0 && end >= start && end < vec.size()) {
        vec.erase(vec.begin() + start, vec.begin() + end + 1);
        cout << "Vector after removing elements from position " << start << " to " << end << ": ";
        for (int i = 0; i < vec.size(); ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Invalid range!" << endl;
        return 0;
    }

    return 0;
}
