# include<iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age ->" << endl;
    cin >> age;
    if (age > 17){
        cout << "You can vote.";
    }
    else{
        cout << "You can't vote, so go home.";
    }   
}
