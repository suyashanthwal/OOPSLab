#include <iostream>
using namespace std;
class students
{
private:
    int marks[5];

public:
    void checkif(int sum[], int n)
    {
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum[0] < sum[i + 1])
            {
                k++;
            }
        }
        cout << "the output is " << k - 1 << endl;
    }

int calculate_marks(int arr[], int n)
    {
        int count = 0, sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

void input()
    {
        int n;
        cout << "enter the number of students" << endl;
        cin >> n;
        int t[n];
        for (int i = 0; i < n; i++)
        {
            cout << "enter the marks of other students " << endl;
            for (int i = 0; i < 5; i++)
            {
                cin >> marks[i];
            }
            t[i] = calculate_marks(marks, n);
        }
        checkif(t, n);
    }
};


int main()
{
    students s1;
    s1.input();
    return 0;
}
