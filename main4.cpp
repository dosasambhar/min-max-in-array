#include <iostream>
#include <climits> // Include the <climits> header for INT_MIN
using namespace std;

int main() {
    int arr[9] = {2, 5, 3, 72, 4, 9, 1, 32, 45};
    int n = 9;
    int maxnum = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxnum) {
            maxnum = arr[i];
        }
    }

    cout << maxnum << endl;
}
