#include<iostream>

using namespace std;
int main(){
    cout << "Enter the size of array: \n";
    int n;
    cin >> n;
    int arr[n];
    int i;
    cout << "Enter the values of array: \n";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the position of element to be inserted: \n";
    int pos;
    cin >> pos;
    cout << "Enter the element to be inserted: \n";
    int ele;
    cin >> ele;
    if(pos > n){
        cout << "Invalid input" << endl;
    }else{
        for(i=n; i>=pos; i--){
            arr[i] = arr[i-1];
        }
    }
    arr[pos-1] = ele;

    cout << "Array after inserting is: \n";

    for(i=0; i<=n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}