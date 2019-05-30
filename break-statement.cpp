 #include <iostream>

using namespace std;

int main(){

   int i;

   for(i=0; i<5; i++){
       int j;
       for(j=0; j<3; j++){
            cout << j << endl;
            if(j==1){
                break;
            }
       }
   }

    return 0;
}
