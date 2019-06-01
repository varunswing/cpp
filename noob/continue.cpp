# include<iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 10){
        if(i == 5){
            i++;
            continue;
        }
        cout<< i << endl; //print from 1-10
        i++;
    }
}
