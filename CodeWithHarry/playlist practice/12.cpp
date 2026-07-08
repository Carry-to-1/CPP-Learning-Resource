// Pointers in C++


/*

We will visualize pointers in the C++ language in this lecture.


================
Pointers in C++
================

A pointer is a data type which holds the address of other data type. The “&” operator is called “address off" operator, and the "*” operator is called “value at” dereference operator. An example program for pointers is shown in below example :

-------------------
Example :

int a = 3;
int *b = &a;
cout<<b;
-------------------

As shown above example, at 1st line an integer variable “a” is initialized with the value “3". At the 2nd line, the address of integer variable "a” is assigned to the integer pointer variable “b". At the 3rd line, the address of the integer pointer variable "b” is printed. 

---------------
Output :

0x61ff08        // something like this in your device
--------------

As shown above output, the address of the integer pointer variable "b” is printed. The main thing to note here is that the address printed by the variable “b" is the address of integer variable "a” because we had assigned the address of variable “a” to the integer pointer variable “b". To clarify, we will print both variable "a" and variable "b" addresses, which are shown below :

--------------------
Code :
 
int a = 3;
int *b = &a;

cout<<"The address of a is"<<&a<<endl;
cout<<"The address of b is"<<b<<endl;
---------------------

--------------------
Output :

The address of a is 0x61ff08
The address of b is 0x61ff08
--------------------

As shown in above output , both variables "a” and “b” have the same addresses, but in actual, this is the address of the variable "a”, the variable “b" is just pointing to the address of the variable "a”.

To see the value of variable “a" using a pointer variable, we can use the "*" dereference operator. An example of the dereference operator program is shown below:

----------------------
cout<<"The value at address of b is"<<*b<<endl;                 //Dereferencing 
----------------------

As shown above, the value at address “b” is printed. The main thing to note here is that the value printed by the pointer variable “b” will be the value of variable “a” because the pointer variable “b" is pointing to the address of the variable "a”. The output for the following program is shown in figure 6.

------------------------
The value of address of b is 0x6ff12 
-----------------------






===================
Pointer to Pointer
===================
Pointer to Pointer is a simple concept, in which we store the address of one Pointer to another pointer. An example program for Pointer to Pointer is shown below :



-----------------
Pointer to Pointer Example :


int** c = &b;
cout<<"The address of b is"<<&b<<endl;
cout<<"The address of b is"<<c<<endl;
cout<<"The value at address c is"<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) is"<<**c<<endl;
--------------------

As shown in above example, at the 1st line, the address of the pointer variable "b” is assigned to the pointer variable “c”. At 2nd line, the address of the pointer variable "b” is printed. At the 3rd line, the address of the pointer variable "c” is printed. At line 4th, the value at the pointer variable "c” is printed. At line 5th, the pointer variable "c” will be dereferenced two times, and it will print the value at pointer variable "b”. The output of the following program is shown below :

----------------------------
Output :

The address of b is 0x61ff04
The address of b is 0x61ff04
The value at address c is 0x61ff08
The value at address value_at(value_at(c)) is 3
----------------------------



*/


#include<iostream>
using namespace std;

int main(){
    // What is a pointer? ----> Data type which holds the address of other data types
    int a=3;
    int* b;
    b = &a;

    // & ---> (Address of) Operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 

    return 0;
}
