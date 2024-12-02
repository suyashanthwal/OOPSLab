#include <iostream>
using namespace std;

// Template class for a generic list
template <class T>
class List {
private:
    T* array;
    int size;
    int capacity;

public:
    // Constructor to initialize the list
    List(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        array = new T[capacity];
    }

    // Destructor to free allocated memory
    ~List() {
        delete[] array;
    }

    // Method to insert an element into the list
    void insert(T value) {
        if (size >= capacity) {
            cout << "List is full. Cannot insert new element." << endl;
            return;
        }
        array[size++] = value;
        cout << "Inserted " << value << " into the list." << endl;
    }

    // Method to delete an element from the list
    void remove(T value) {
        int index = -1;
        for (int i = 0; i < size; ++i) {
            if (array[i] == value) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Element " << value << " not found in the list." << endl;
            return;
        }

        for (int i = index; i < size - 1; ++i) {
            array[i] = array[i + 1];
        }
        --size;
        cout << "Removed " << value << " from the list." << endl;
    }

    // Method to display the list
    void display() {
        if (size == 0) {
            cout << "The list is empty." << endl;
            return;
        }
        cout << "List elements: ";
        for (int i = 0; i < size; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int choice;
    cout << "Enter the type of list you want to create (1: int, 2: float, 3: char): ";
    cin >> choice;

    if (choice == 1) {
        List<int> intList(5);
        intList.insert(10);
        intList.insert(20);
        intList.insert(30);
        intList.display();
        intList.remove(20);
        intList.display();
    } else if (choice == 2) {
        List<float> floatList(5);
        floatList.insert(10.5);
        floatList.insert(20.5);
        floatList.insert(30.5);
        floatList.display();
        floatList.remove(20.5);
        floatList.display();
    } else if (choice == 3) {
        List<char> charList(5);
        charList.insert('A');
        charList.insert('B');
        charList.insert('C');
        charList.display();
        charList.remove('B');
        charList.display();
    } else {
        cout << "Invalid choice. Exiting." << endl;
    }

    return 0;
}
