#include<iostream>
using namespace std;

int main(){
    int n, i;
    cout << "Enter the no. of elements in an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: "<< endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Array is: "<< endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    int ele;
    cout << "\nEnter the element to be searched: "<< endl;
    cin >> ele;
    for(i=0; i<n; i++){
        if(arr[i] == ele){
            cout << "Element found!"<< endl;
        }
    }
}