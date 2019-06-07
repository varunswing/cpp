#include <iostream>

using namespace std;

class Father{
public:
    int height;
    void askFather(){
        cout << "I am your father ask me what you want." << endl;
    }
};

class Mother{
public:
    string skincolor;
    void askMother(){
        cout << "I am your mother ask me what you want." << endl;
    }
};

class Child : public Father, public Mother{
public:
    void askParents(){
        cout << "I am asking my parents." << endl;
    }
    void setColorandHeight(string icolor, int iheight){
        skincolor = icolor;
        height = iheight;
    }
    void display(){
        cout << "Height is " << height << " and color is " << skincolor << "." << endl;
    }
};

int main(){
    Child varun;
    varun.setColorandHeight("white", 45);
    varun.display();
    varun.askFather();
    varun.askMother();
    
    return 0;
}
