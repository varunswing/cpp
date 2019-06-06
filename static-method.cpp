#include <iostream>

using namespace std;

class Human{
public:
    static int human_count;

    Human(){
        human_count++;
    }

    static void totalHuman(){
        cout << "There are " << human_count << " peoples in this program." << endl; // Only static variables and members can be used in static method.
    }
};

int Human::human_count = 0;

int main(){
    cout << Human::human_count << endl;

    Human anil;
    Human anjali;
    Human vikash;
    Human varun;
    Human :: totalHuman();
    
    cout << Human::human_count << endl;
    
    return 0;
}
