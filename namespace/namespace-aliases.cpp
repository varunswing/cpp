#include <iostream>

using namespace std;

namespace veryLargeNamespaceName{
    int x;
    namespace nestedNamespace{
        void display(){
            cout << x << endl;
        }
    }
}

namespace one = veryLargeNamespaceName;
namespace nested = one :: nestedNamespace;

int main(){
    one :: x = 30;
    nested :: display();

    return 0;
}
