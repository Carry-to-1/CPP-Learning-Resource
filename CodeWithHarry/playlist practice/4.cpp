// Variable Scope & Data Types in C++

/*

============
Data Types
============

Variables can be defined as a container to hold data. Variables are of different types, for example :

Int : It is used to store integers (whole numbers) , for example, 1, 2, 3, 4, 5 etc.
Float : It is used to store decimal numbers , for example, 1.1, 2.2, 3.3, 4.4, 5.5 etc.
Char : It is used to store characters , for example, 'a', 'b', 'c', 'd', 'e' etc.
String : It is used to store a sequence of characters , for example, "Hello", "World", "C++" etc.
Bool : It is used to store boolean values , for example, true, false etc.
Double : It is used to store double precision floating point numbers , for example, 10.11145.


Example : int sum = 34;
means that sum is an integer variable which is storing the value 34 in memory.

Syntax : data_type variable_name = value;

*/


/*

====================
Variable Scope in C++
====================    

The scope of a variable is the region of the program where the  existence of that variable is valid. 

Example : If one person travels to another country illegally , we will not consider that country as its scope because he doesnot have the necessary documents to stay in that country.

In C++, there are two types of variable scope :

--------------------
1. Local Variable 
--------------------

Local variables are declared inside the braces of any function and can be accessed only from there.


--------------------
2. Global Variable
--------------------
Global variables are declared outside the braces of any function and can be accessed from anywhere in the program

*/

#include <iostream>
using namespace std;

int a = 5;    // global variable

void func()
{
    cout << a << endl;
}

int main()
{
    int a = 10;     // local variable
    cout << a << endl;
    func();
    return 0;
}





/*

=============
Data Types
=============

Data types define the type of data that a variable can hold. 

Data types in C++ are categorized into three groups :

*Built-in
*User-defined
*Derived

------------------
Bult-in Data Types
------------------

- int : for integers
- float : for single precision floating-point numbers
- double : for double precision floating-point numbers
- char : for single characters
- bool : for boolean values


------------------
User-defined Data Types
------------------

-Struct : for creating user-defined data types
-Enum : for creating enumerated data types
-Union : for creating union data types

--------------------------
Derived Data Types
--------------------------

-Array : for creating arrays
-Pointer : for creating pointers
-Function : for creating functions


*/


// NOTE : "/n" is used to print a new line
