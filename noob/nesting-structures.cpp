#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
};

struct child{
    string name;
    long long int mobileno;
    student s;
};

int main(){
    child rahul;
    rahul.s.sex = 'm';
    rahul.s.rollno = 24;

    rahul.name = "rahul";
    rahul.mobileno = 7667341806;
    
    cout << rahul.s.rollno << endl;
    cout << rahul.s.sex << endl;
    cout << rahul.name << endl;
    cout << rahul.mobileno << endl;

    return 0;
}