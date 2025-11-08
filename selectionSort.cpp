#include <iostream>
using namespace std;
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int mindex=i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[mindex]){
            mindex=j;
        }
       }
    swap(arr[i],arr[mindex]);
    }
    cout<<"Sorting array(ascending order):";
    printArray(arr,n);

}
int main(){
    int n;
    cout<<"Enter your size:";
    cin>>n;
    int arr[n];
    cout<<"Enter your Array:";
    cout << "Enter your Array size of " << n << " :" ;
    inputArray(arr,n);
    selectionSort(arr,n);
    
    return 0;
}