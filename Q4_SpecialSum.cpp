#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "ENTER THE SIZE OF THE ARRAY " ;
    cin >> n; 
    int arr[n];

    cout << "ENTER THE ARRAY ELEMENT : " ;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSpecialSum = 0 ;

    for (int i = 0; i < n; i++) {
        long long currentSum = 0;
        int k = 1; 
        int j = i; 
        while (j < n) {
            for (int l = 0; l < k && j < n; l++, j++) {
                currentSum += arr[j];
            }
            k++;
        }

        if (currentSum > maxSpecialSum) {
            maxSpecialSum = currentSum;
        }
    }

    cout << "THE MAXIMIM SPECIAL SUM IS : " << maxSpecialSum << endl;
    return 0;
}
