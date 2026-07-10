/* Goal: ​The objective is to master how to design and use custom functions that return values (like bool or int) and successfully handle multi-conditional logic (&& and ||) to 
evaluate complex, real-world rules without falling into operator precedence traps

 CONCEPTS:
Function Return Types (bool/int): Specifies the exact data type a function sends back to main(), preventing the program from pulling random garbage values from memory.
Operator Precedence (&& over ||): The built-in hierarchy where C++ automatically processes "AND" conditions before "OR" conditions, which can alter your intended logic.
Logical Grouping (Parentheses): Using () to explicitly isolate conditions and force the computer to evaluate them in your exact custom order.

 Question: Write a modular C++ program that prompts the user to enter a year. Pass this year into a standalone function named isLeapYear(int year) that uses precise parenthetical logic to check if it
 matches the standard calendar criteria, returning a true/false state back to main() for a clean string output.
 */
#include<iostream>
using namespace std;
bool isLeapYear(int year){
    if((year % 4 == 0) && (year % 100 != 0 || year % 400 ==0)){
        return true; //It will return 1
    }else{
        return false;  //It will return 0
    }
}
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    cout<<"Leap year ?: "<< isLeapYear(year)<<endl;
    return 0;
}