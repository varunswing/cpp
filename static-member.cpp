#include <iostream>

using namespace std;

class Human{
public:
    static int human_count;

    Human(){
        human_count++;
    }

    void totalHuman(){
        cout << "There are " << human_count << " peoples in this program." << endl;
    }
};

int Human::human_count = 0;

int main(){
    cout << Human::human_count << endl;

    Human anil;
    Human anjali;
    Human vikash;
    Human varun;
    varun.totalHuman();
    
    cout << Human::human_count << endl;
    
    return 0;
}
