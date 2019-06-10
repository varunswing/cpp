#include <iostream>

using namespace std;

class Marks{
int extmark;
int intmark;
public:
    Marks(){
        intmark = 0;
        extmark = 0;
    }
    Marks(int im, int em){
        intmark = im;
        extmark = em;
    }
    void display(){
        cout << intmark << endl << extmark << endl;
    }

    Marks operator+(Marks m){
        Marks temp;
        temp.intmark = intmark + m.intmark;
        temp.extmark = extmark + m.extmark;
        return temp;
    }

    Marks operator-(Marks m);
};

Marks Marks :: operator-(Marks m){
    Marks temp;
    temp.intmark = intmark - m.intmark;
    temp.extmark = extmark - m.extmark;
    return temp;
}

int main(){
    Marks m1(20, 30), m2(10, 30);

    Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;
    m3.display();
    m4.display();
    
    return 0;
}
