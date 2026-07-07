// C++ Control Structures, If Else and Switch-Case Statement


/*

The topics which we are going to cover today are given below:

Control Structures in C++
IF Else in C++
Switch Statement in C++

*/


/*

==========================
Control Structures in C++
==========================
The work of control structures is to give flow and logic to a program. There are three types of basic control structures in C++.

1. Sequence Control Structure   ~   Sequence structure refers to the sequence in which program execute instructions one after another.

2. Selection Control Structure   ~  Selection structure refers to the execution of instruction according to the selected condition, which can be either true or false. There are two ways to implement selection structures, by “if-else statements” or by “switch case statements”. 

3. Iteration Control Structure(Loop)   ~  Loop structure refers to the execution of an instruction in a loop until the condition gets false.


*/


/*

===========================
If Else Statement in C++
===========================
The if statement is used to test a condition. If the condition is true, then the block of code inside the if statement will be executed. If the condition is false, then the block of code inside the else statement will be executed. The else statement is optional.

===========================
Switch Case Statement in C++
===========================
The switch statement is used to test a variable against a list of values. If the variable matches a value, then the block of code inside the case statement will be executed. If the variable does not match any value, then the block of code inside the default statement will be executed. The default statement is optional.

*/


#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

// Selection Control structure : If else-if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if((age>18) && (age<21)){
    //     cout<<"You can come to the party but you cannot drink"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party and you can drink also"<<endl;
    // }

// Selection Control structure : Switch case statement
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    default:        
        cout<<"No special cases"<<endl;
        break;
    }   
}