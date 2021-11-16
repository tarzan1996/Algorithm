using namespace std;

int findElement(int a[], int n) {
    // Base case
    if (n == 1 || n == 2) {
        return -1;
    }

    int element = a[0], maxx = a[0], bit = -1, check = 0;
    int idx = -1;

    for (int i = 1; i < (n - 1);) {

        if (a[i] < maxx && i < (n - 1)) {
            i++;
            bit = 0;
        }

        else {
            if (a[i] >= maxx) {
                element = a[i];
                idx = i;
                check = 1;
                maxx = a[i];
            }
            if (check == 1) {
                i++;
            }
            bit = 1;
            while (a[i] >= element && i < (n - 1)) {
                if (a[i] > maxx) {
                    maxx = a[i];
                }
                i++;
            }
            check = 0;
        }
    }

    if (element <= a[n - 1] && bit == 1) {
        return idx;
    } else {
        return -1;
    }
}

int main() {
    int arr[] = { 5, 1, 4, 3, 6, 8, 10, 7, 9 };
    int n = sizeof arr / sizeof arr[0];

    // Function Call
    cout << "Index of the element is " <<
        findElement(arr, n);
    return 0;
}