#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i+1;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
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