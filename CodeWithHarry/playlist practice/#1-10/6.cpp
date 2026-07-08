// C++ Header files & Operators 


/*

===================
Header Files in C++
===================

"#include" is used in C++ to import header files in our program. The reason to introduce the "<iostream>" header file into our program is that functions like "cout" and "cin" are defined in that header file. There are two types of header files:

--------------------
System Header file
--------------------
System header file ships with the compiler. For examples "#include<iostream>". 


---------------------------
User-Defined Header files
---------------------------
The programmer writes User-defined header files himself. To include your header file in the program, you first need to make a header file in the current directory, and then you can add it.


*/



/*

===================
Operators in C++
===================
Operators are used for producing various types of calculations on two or more inputs.

--------------------
Arithmetic Operators
--------------------
Arithmetic Operators are useful for performing mathematical operations like (+,-,*,/,%,++,--), The arithmetic operators are

*/

#include<iostream>
using namespace std;

int main(){
    int a=6, b=3;

    cout<<"Operators in C++\n";
    cout<<"Following are the types of operators in C++";

    // Arithmetic Operators

    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<endl;

/*

---------------------
Assignment Operators
---------------------
Assignment Operators are used to assign values to variables. For example int a = 3;

---------------------
Comparison Operators
---------------------
Comparison Operators are used for comparing two values. Examples of comparison operarors are 

*/

cout<<"Following are the comparison operators in the c++\n";
cout<<"The value of a == b is"<<(a==b)<<endl;
cout<<"The value of a != b is" <<(a != b)<<endl;
cout<<"The value of a <= b is" <<(a <= b)<<endl;
cout<<"The value of a >= b is" <<(a >= b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<"The value of a < b is" <<(a < b)<<endl;




/*

----------------
Logical Operators
----------------
Logical operators are used for comparing two expersions. For example ((a==b) && (a>b)). More exmaples of logical operators are :

*/

cout<<"The value of logical and operator ((a==b)&&(a<b)) is" <<((a==b)&&(a<b))<<endl;
cout<<"The value of logical or operator ((a==b)||(a<b)) is" <<((a==b)||(a<b))<<endl;
cout<<"The value of logical not operator (!(a==b)) is" <<(!(a==b))<<endl;

}