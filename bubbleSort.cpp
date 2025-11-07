#include <iostream>
using namespace std;

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool isSwap =false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
         if (!isSwap) {
            break;
        }
    }
   cout<<"Sorting array(ascending order):";
    printArr(arr, n);
}

void inputArray(int arr[], int n) {
    cout << "Enter your array data: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< endl;
}

int main() {
    int n;
    cout << "Enter your array size: ";
    cin >> n;

    int arr[n]; 
    inputArray(arr, n);
    bubbleSort(arr, n);
    return 0;
}
