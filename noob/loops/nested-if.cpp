# include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age ->" << endl;
    cin >> age;
    if (age > 0){
        cout << "You are born." << endl;
        if(age > 12 && age < 20){
            cout << "You are tennager." << endl;
            if(age == 18){
                cout << "You are special." << endl;
            }
        }
    } 
}
