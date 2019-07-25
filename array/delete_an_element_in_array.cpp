#include<iostream>
using namespace std;

int main(){
    int arr[100], n, i, pos;
    cout << "Enter the no. of element in array: "<< endl;
    cin >> n; 
    cout << "Enter the values of element in array: "<< endl;
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Inputed array is: " << endl;
    for(i=0; i<n; i++){
        cout << arr[i]  << " " << endl;
    } 
    cout << "Enter the position of element to be deleted: "<< endl;
    cin >> pos;
    for(i=pos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    } 
    cout << "Array after deleting is: " << endl;
    for(i=0; i<n-1; i++){
        cout << arr[i]  << " " << endl;
    } 

return 0;
}