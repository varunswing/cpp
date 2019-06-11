#include <iostream>

using namespace std;

class overspeed : public exception{
    int speed;
    public:
    const char* what(){
        return "Check your car speed. /n Its car not aeroplane. /n";
    }
    void setSpeed(int speed){
        this->speed = speed;
    }
    void getSpeed(){
        cout << "Car speed is " << speed << endl;
    }
};

class car{
    int speed;
    public:
    car(){
        speed = 0;
        cout << "speed is " << speed << endl;
    }

    void accelarate(){
        for(;;){
            speed += 10;
            cout << "speed is " << speed << endl;
            if(speed >= 250){
                overspeed s;
                s.setSpeed(speed);
                throw s;
            }
        }
    }
};

int main(){
    car lamborgini;
    try{
        lamborgini.accelarate();
    }catch(overspeed s){
        cout << s.what() << endl;
        s.getSpeed();
    }

    return 0;
}
