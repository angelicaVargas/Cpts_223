#include <iostream>
#include <string>

using namespace std;

void printArray(int array[20]) {
    cout << "Array: ";
    for(int i = 0; i < 20; i++) {
	    cout << array[i] << ", ";
    }
    cout << endl;
};

int searchValue(int array[20], int input) {
    for (int i = 0; i < 20; i++) {        //loop through the array
	    if(array[i] == input) {       //if the input is in the array
//                cout << "The element is at index: " << i + 1 << endl;
	        return i;
	    }
        } 
	cout << "The element is not in the array... ";
	return -1;
	//create loop that continues to ask user for input regardless
	//the element being in the array or not
};

void moveToFront(int array[20], int input, int index) {
    for(int i = index; i > 0; --i) {
	    array[i] = array[i - 1];
	    }
        array[0] = input;
	printArray(array);
};

void transpose(int array[20], int index) {
    int temp;
    temp = array[index - 1];            //hold integer chosen in temp
    array[index - 1] = array[index];    //integer in front is stored into integer
    array[index] = temp;                //stored temp into integer in front

    printArray(array);
};

int main () {
    int array[20] = {1, 12, 45, 14, 46, 4, 17, 49, 34, 50, 36, 40, 44, 21, 28, 25, 42, 33, 23, 27};
    int array2[20] = {27, 4, 17, 10, 28, 8, 5, 38, 22, 3, 13, 36, 6, 18, 44, 29, 45, 42, 16, 7};
    int num = 0, input = 0, i = 0;
    int loop1, loop2, loop3;

    cout << "Beginning array: ";
    printArray(array);

    cout << "How many times do you want to use 'Move to Front': " << endl;
    cin >> loop1;

    //create the loop
    for(i = 0; i < loop1; i++) {
        cout << "Enter the search term (integer): ";
        cin >> input;
  
        if(searchValue(array, input) != -1) {
            int index = searchValue(array, input);
        // cout << index;     //checking if the right index is being printed
	    moveToFront(array, input, index);
	} else {
		cout << "Please enter another number." << endl;
	}
    }   
    cout << "Beginning array: ";
    printArray(array2);

    cout << "How many times do you want to use 'Transpose': " << endl;
    cin >> loop2;

    for(i = 0; i < loop2; i++) {
	 cout << "Enter the search term (integer): ";
	 cin >> input;

	if(searchValue(array2, input) != -1) {
	    int index = searchValue(array2, input);
	    transpose(array2, index);
	} else {
	    cout << "Please enter another number. " << endl;
	}
    }
    //create class - include number and integer of how many times
    //it's been called
 
    return 0;
}
