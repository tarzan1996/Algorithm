#include <bits/stdc++.h>

using namespace std;

void findMaxNum(int arr[], int n) {

    int hash[10] = { 0 };

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < hash[i]; j++)
            cout << i;
    }
}

int main() {
    int arr[] = { 10, 68, 75, 7, 21, 12 };

    int n = sizeof(arr) / sizeof(arr[0]);

    findMaxNum(arr, n);

    return 0;
}