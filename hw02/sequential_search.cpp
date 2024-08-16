#include <iostream>
using namespace std;

int search(int arr[], int n, int value) {

    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == value)
            return i;
    return -1;
}

int main(void) {

    int arr[] = { 4, 8, 5, 10, 50 };
    int value = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    //function call
    int result = search(arr, n, value);
    (result == -1)
        ? cout << "Element is not present in array \n"
        : cout << "Element is present at index \n" << result;

    return 0;
}
