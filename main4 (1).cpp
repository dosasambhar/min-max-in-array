#include <iostream>
#include <climits> // Include the <climits> header for INT_MIN
using namespace std;

int main() {
    int arr[9] = {2, 5, 3, 72, 0, 9, 1, 32, 45};
    int n = 9;
    int minnum = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minnum) {
            minnum = arr[i];
        }
    }

    cout << minnum << endl;
}
