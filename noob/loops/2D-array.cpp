# include<iostream>
using namespace std;

int main(){
    int a[2][6] {
                {2, 34, 23, 44, 54, 76},
                {3, 43, 54, 32, 49, 20}
                };

    a[1][2] = 22;

    cout << a[1][2] << endl << a[1][4];

    return 0;
}
