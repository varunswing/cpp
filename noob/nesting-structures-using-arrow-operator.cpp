#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
};

struct child{
    string name;
    long long int mobileno;
    student *s;
};

int main(){
    child rahul;
    child *rahulptr;

    rahulptr = &rahul;

    rahulptr->name = "Rahul";
    rahulptr->mobileno = 7667341806;
    
    student stu = {34, 'm'};
    rahulptr->s = &stu;

    cout << rahulptr->name << endl;
    cout << rahulptr->mobileno<< endl;

    cout << rahulptr->s->rollno << endl;
    cout << rahulptr->s->sex << endl;

    return 0;
}