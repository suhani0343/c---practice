/*Goal:Master how to manipulate data using different types of C++ operators (Arithmetic, Unary, Relational, and Logical) and understand
 how expressions evaluate to control program data flow.
 
 Concepts:
* **Arithmetic Operators:** Used for mathematical calculations (`+`, `-`, `*`, `/`, `%`). The modulo operator (`%`) returns the remainder of integer division.
* **Unary Operators:** Operators that act on a single operand (like pre-increment `++num` or post-increment `num++`).
* **Relational Operators:** Used to compare two values (`==`, `!=`, `<`, `>`, `<=`, `>=`). They automatically evaluate to a boolean value: `1` (true) or `0` (false).
* **Logical Operators:** Used to combine multiple conditions (`&&` for AND, `||` for OR, `!` for NOT).

Question:Write a program that takes two integers from the user (`num1` and `num2`) and prints out a 4-line profile of how they interact based on operators:
1. **Arithmetic:** Print the result of `(num1 * num2) + 5`.
2. **Unary:** Pre-increment `num1` (`++num1`) and print its new value.
3. **Relational:** Check if the updated `num1` is greater than or equal to `num2` (Outputs `1` or `0`).
4. **Logical:** Check if both numbers are even using `&&` and `%`.
*/
#include<iostream>
using namespace std;
int main(){
    //Taking input from user
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int result1=(num1*num2)+5;
    cout<<result1<<endl;
    //Now using unary operator
    ++num1;
    cout<<"incremented value of num1 is: "<<num1<<endl;
    // Now using Relational  opertaor
    cout<<(num1>=num2)<<endl; //if it is true it will return 1 else 0
    //Using logical operator
    cout<<(num1%2==0 && num2%2==0)<<endl; //using logical AND operator. Both are true so it will return 1
    return 0;
    

}