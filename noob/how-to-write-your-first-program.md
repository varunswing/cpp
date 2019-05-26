# How to write your first program

## Steps
1. Start by including necessary header files 
```
#include<iostream>
```

1. Then write `using namespace std` in to use _std_ namespace.

1. Create a _main_ function necessary for all C++ programs.
```cpp
int main(){
    // Wirte all your code here
}
```

1. Print _Hello, World!_ by writing `cout<<"Hello, World!"<<endl;` in the code section

1. Your final code should look like
```cpp
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello, World!"<<endl;
}
```

1. now save your file as **hello-world.cpp** then compile an run your code
```npm
g++ hello-world.cpp
./a.out
```
