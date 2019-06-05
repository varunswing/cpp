# include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age ->" << endl;
    cin >> age;
    if (age < 12){
        cout << "You are babby";
    }else if (age > 12 && age < 20){
        cout << "You are teenager.";
    }
    else{
        cout << "You are adult.";
    }   
}
