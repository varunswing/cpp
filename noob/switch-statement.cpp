#include <iostream>

using namespace std;

int main(){
    char input = 'A';

    switch (input)
    {
    case 'A':
    case 'a':
        cout << "Excellent!";
        break;

    case 'B':
        cout << "Very Good";
        break;

    case 'C':
        cout << "Good";
        break;

    case 'D':
        cout << "Bad";
        break;
    
    default:
        cout << "What's your grade?";
    }

    cout << endl << "Grading done.";

}