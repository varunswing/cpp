#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
};

void display(student s);
void show(student *s);

int main(){
    student varun = {24, 'm'};
    show (&varun);
    display(varun);
    return 0;
}

void display(student s){
    cout << s.rollno << endl;
    cout << s.sex << endl;   
    s.rollno = 22; 
}

void show(student *s){
    cout << s->rollno << endl;
    cout << s->sex << endl;
    s->rollno = 22;
}