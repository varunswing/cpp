# include<iostream>
using namespace std;

int main(){
    int date;
    cout << "Enter your date ->" << endl;
    cin >> date;
    if (date >= 1 && date <= 31){
        cout << "Date is valid." << endl;
        if(date == 16 || date == 4){
            cout << "Today is special" << endl;
        }
    }else{
        cout << "Date is invalid";
    }
}
