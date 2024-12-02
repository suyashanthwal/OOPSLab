#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm> // For sort, remove, reverse, etc.
using namespace std;

void demonstrateList() {
    cout << "Demonstrating list operations:" << endl;
    list<int> myList;

    // Adding elements
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);
    myList.push_back(15);
    myList.push_front(1);

    // Displaying the list using iterator
    cout << "List elements after adding: ";
    list<int>::iterator p = myList.begin();
    while (p != myList.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Sorting the list
    myList.sort();
    cout << "List after sorting: ";
    p = myList.begin();
    while (p != myList.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Reversing the list
    myList.reverse();
    cout << "List after reversing: ";
    p = myList.begin();
    while (p != myList.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Removing an element (e.g., remove 15)
    myList.remove(15);
    cout << "List after removing 15: ";
    p = myList.begin();
    while (p != myList.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Removing the first element
    myList.pop_front();
    cout << "List after popping the first element: ";
    p = myList.begin();
    while (p != myList.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Removing the last element
    myList.pop_back();
    cout << "List after popping the last element: ";
    p = myList.begin();
    while (p != myList.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Finding an element using std::find
    if (find(myList.begin(), myList.end(), 20) != myList.end()) {
        cout << "20 is found in the list." << endl;
    } else {
        cout << "20 is not found in the list." << endl;
    }
}



void demonstrateVector() {
    cout << "\nDemonstrating vector operations:" << endl;
    vector<int> myVector;

    // Adding elements
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(5);
    myVector.push_back(15);
    myVector.push_back(1);

    // Displaying the vector using iterator
    cout << "Vector elements after adding: ";
    vector<int>::iterator p = myVector.begin();
    while (p != myVector.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Sorting the vector
    sort(myVector.begin(), myVector.end());
    cout << "Vector after sorting: ";
    p = myVector.begin();
    while (p != myVector.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Reversing the vector
    reverse(myVector.begin(), myVector.end());
    cout << "Vector after reversing: ";
    p = myVector.begin();
    while (p != myVector.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Removing an element (e.g., remove 15)
    myVector.erase(remove(myVector.begin(), myVector.end(), 15), myVector.end());
    cout << "Vector after removing 15: ";
    p = myVector.begin();
    while (p != myVector.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Removing the first element
    myVector.erase(myVector.begin());
    cout << "Vector after removing the first element: ";
    p = myVector.begin();
    while (p != myVector.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Removing the last element
    myVector.pop_back();
    cout << "Vector after removing the last element: ";
    p = myVector.begin();
    while (p != myVector.end()) {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    // Finding an element using std::find
    if (find(myVector.begin(), myVector.end(), 20) != myVector.end()) {
        cout << "20 is found in the vector." << endl;
    } else {
        cout << "20 is not found in the vector." << endl;
    }
}

void demonstrateMap() {
    cout << "\nDemonstrating map operations:" << endl;
    map<int, string> myMap;

    // Adding key-value pairs
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";
    myMap[4] = "Four";

    // Displaying the map using iterator
    cout << "Map elements after adding: ";
    map<int, string>::iterator p = myMap.begin();
    while (p != myMap.end()) {
        cout << p->first << ": " << p->second << " ";
        ++p;
    }
    cout << endl;

    // Finding a key in the map
    if (myMap.find(2) != myMap.end()) {
        cout << "Key 2 found in the map with value: " << myMap[2] << endl;
    } else {
        cout << "Key 2 not found in the map." << endl;
    }

    // Removing a key-value pair (e.g., remove key 3)
    myMap.erase(3);
    cout << "Map after removing key 3: ";
    p = myMap.begin();
    while (p != myMap.end()) {
        cout << p->first << ": " << p->second << " ";
        ++p;
    }
    cout << endl;

    // Displaying all elements in the map
    cout << "Final map elements: ";
    p = myMap.begin();
    while (p != myMap.end()) {
        cout << p->first << ": " << p->second << " ";
        ++p;
    }
    cout << endl;
}

int main() {
    demonstrateList();
    demonstrateVector();
    demonstrateMap();
    return 0;
}
