// Variables & Comments in C++


/*

=================
Variables in C++
=================


~ Variables are containers to store our data . To make it easy to understand , I will give a scenario :
To store a water , we use bottles and to store sugar , we use box.
In this scenario , bottles and box are containers which are used to store water and sugar; the same is the case with variables ; they are the conainers for data types. 

As there are many data types , for example, "int" is used for integers , "float" is used for decimal numbers , "char" is used for characters and so on.

*/



/*

=================
Comments in C++
=================


~ Comments are used to explain the code and make it more readable. They are ignored by the compiler.

There are two ways to write comments in C++ :
1. Single line comments : They are used to write comments in a single line. They are written using // before the comment. For example :
// This is a single line comment
2. Multi line comments : They are used to write comments in multiple lines. They are written using /* before the comment and */ 

// after the comment. For example :


/*
This is a multi line comment
It can be used to write comments in multiple lines  

*/



#include<iostream>
using namespace std;

int main(){
    int a = 10; // This is a single line comment
    cout<<"The value of a is : "<<a<<endl;
    /*
    This is a multi line comment
    It can be used to write comments in multiple lines  
    */
    return 0;
}

/*
int is a data type which is used to store integers. In this case, we are storing the value 10 in the variable a.
*/