#include <iostream>

using namespace std;

struct student {
    int rollno;
    char sex;
};

int main(){
    int age;
    cout << " int --> "<< sizeof(age) << endl;
    cout << " float --> "<< sizeof(float) << endl;
    cout << " double --> "<< sizeof(double) << endl;
    cout << " long --> "<< sizeof(long) << endl;
    cout << " char --> "<< sizeof(char) << endl;
    cout << " string --> "<< sizeof(string) << endl;
    cout << " short int --> "<< sizeof(short int) << endl;
    cout << " long long int --> "<< sizeof(long long int) << endl;
    cout << " struct student --> "<< sizeof(student) << endl;

    return 0;
}

