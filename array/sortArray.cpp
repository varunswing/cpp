#include<iostream>
using namespace std;

int main(){
    int i, ele, n;
    cout << "Enter the no. of elements in array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array is: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nSorted array is:";
    for(int j=0; j<n; j++){
        for(i=0; i<n; i++){
            if(arr[i] > arr[i+1]){
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a;
            }
        }
    }
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nSorted array is:";
    for(int j=0; j<n; j++){
        for(i=0; i<n-1; i++){
            if(arr[i] < arr[i+1]){
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a;
            }
        }
    }
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}