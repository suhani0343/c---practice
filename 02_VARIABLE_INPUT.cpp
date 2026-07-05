/*Goal: Practice C++ variables, data types, and taking user inputs.
Concepts: int, float, char, cin, cout, \n, endl

QUESTION / PROBLEM STATEMENT:
Write a C++ program that prompts a user to enter three specific pieces of information:
1. Their age (an integer)
2. Their target or current SGPA (a floating-point/decimal number)
3. Their favorite grade letter (a single character)*/

#include<iostream>
using namespace std;
int main(){ 
    // Declare variables
    int age;
    float sgpa;
    char favourite_grade;
    //Taking user inputs
    cout<<"Students enter your following details"<<endl;
    cout<<"Enter your age:\n ";
    cin>>age;
    cout<<"Enter your sgpa:\n ";
    cin>>sgpa;
    cout<<"Enter your favourite grade:\n ";
    cin>>favourite_grade;
    // Displaying the entered details
    cout<<"Student details are as follows:"<<endl;
    cout<<"your age is:"<<age<<endl;
    cout<<"your sgpa is: "<<sgpa<<endl;
    cout<<"your favourite grade is: "<<favourite_grade<<endl;
    return 0;
}