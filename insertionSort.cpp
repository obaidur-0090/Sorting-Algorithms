#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printArray(arr,n);
}

void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
}

int main(){
    int n;
    cout<<"Enter your size:";
    cin>>n;
    int arr[n];
    cout << "Enter your "<< n <<" size of  Array :" ;
    inputArray(arr,n);
    return 0;
}