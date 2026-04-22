#include <iostream>

using namespace std;

int main() {
    // Declarations
    int numbers[5];
    int i = 0, input, arrSize;
    float sum = 0.0, average;

    cout << "Enter 5 numbers" << endl << endl;

    while (i < 5) {
        cout << "Entry " << i+1 << " is:" << endl;
        cin >> input;
        numbers[i] = input;
        i++;
    }

    arrSize = sizeof(numbers)/sizeof(numbers[0]);

    for (i = 0; i < arrSize; i++) {
        sum += numbers[i];
    }

    average = sum / arrSize;

    cout << "\nAvg of array elements:" << average << 
    endl;

    return 0;
}