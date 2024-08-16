#include <iostream>
using namespace std;

int binarySearch(int array[], int a, int b, int c) {
    if (b >= a) {
        int middle = a + (b - a) / 2;
 
        // If the element is present at the middle
        if (array[middle] == c)
            return middle;
 
        // If element is smaller than mid, then in left subarray
        if (array[middle] > c)
            return binarySearch(array, a, middle - 1, c);
 
        // Else the element is present in right subarray
        return binarySearch(array, middle + 1, b, c);
    }
    return -1;
}

int main(void) {

    int array[] = { 4, 8, 16, 10, 60 };
    int x = 10;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array \n"
        : cout << "Element is present at index \n" << result;
    return 0;
}
