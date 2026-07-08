// C++ Basic Input/Output & More


/*

===============================
Basic Input and Output in C++
===============================

C++ language comes with different libraries, which helps us in performing input/output opreations. In C++ sequence of bytes corresponding to input and output are commonly known as streams. There are two types of streams.

----------------
Input Stream
----------------
In the input stream, the direction of the flow of bytes occures from the input device (for example ~ Keyboard) to the main memory.

--------------
Output Stream
--------------
In the output stream, the direction of the flow of bytes occures from main memory to the output device( for example ~ display)


*/

// Practical Explanation of Input/Output 

#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout<<"Enter a first number :\n";
    cin>>num1;

    cout<<"Enter a second number :\n";
    cin>>num2;

    cout<<"Sum of the two number is "<<num1+num2 ;

    return 0;
}





/*

===================
IMPORTANT POINTS
===================
1. The sign "<<" is called insertion operator 
2. The sign ">>" is called extraction operator 
3. "cout" keyword is used to print 
4. "cin" keyword is used to take input at run time

*/





/*

==========================
Reserved Keywords in C++
==========================
Reserved Keywords are those keywords that are used by the language itself, which is why these keywords are not available for redefinition or overloading. In short, you cannot create variables with these names. 

*/