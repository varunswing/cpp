# How to write your first program

## Steps
* Start by including necessary header files 
```
#include<iostream>
```

* Then write `using namespace std` in to use _std_ namespace.

* Create a _main_ function necessary for all C++ programs.
```cpp
int main(){
    // Wirte all your code here
}
```

* Print _Hello, World!_ by writing `cout<<"Hello, World!"<<endl;` in the code section

* Your final code should look like
```cpp
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello, World!"<<endl;
}
```

* now save your file as **hello-world.cpp** then compile an run your code
```npm
g++ hello-world.cpp
./a.out
```

## FAQs

* What if do not write `using namespace std` explicitly?
    * Then to print something you will have to write it as `std::cout<<"Hello, World!"<<endl;`
    
    
* Why do I have to write `endl`?
    * `endl` stands for endline, it adds a new line in console. But it is not necessary, `cout<<"Hello, World";` will also work fine, except it not add a new line in the console. Check for yourself and you'll know.
