/* Goal:Master the implementation of multi-path decision trees and conditional optimizations in C++. 
 The objective is to apply logical operators within sequential evaluation structures and successfully
 replace simple multi-line branching statements with single-line inline expressions.
 
 Concept:* **if - else if - else Selection Ladder:** A sequential execution block used to evaluate a series of mutually exclusive conditions from top to bottom. 
 The program terminates evaluation as soon as the first true condition is met.
 **Ternary Operator Shorthand (`? :`):** A compact conditional expression consisting of three operands: a condition, an expression to execute if true, and an expression to execute if false.
 It provides a highly optimized syntax for inline variable initialization based on checks.

 Question 1: Character Case Classifier (The Ladder)**
 **Problem:** Prompt the user for a single keyboard character input and check its formatting boundaries.
 **Logic:** Use relational operators (`>=`, `<=`) linked via logical AND (`&&`) within an `else if` ladder to separate uppercase characters, lowercase characters, and symbols based on standard ASCII layout blocks.

 Question 2: Automated Bill Discounter (Inline Ternary Math)**
 **Problem:** Take a numerical total bill amount as input. If the purchase crosses a premium customer threshold of 1000 rupees, apply an immediate discount of 100 rupees. Otherwise, do not alter the subtotal.
 **Logic:** Use a clean, assignment-level ternary conditional block to calculate and instantiate the final total in a single statement without multi-line `if` wrappers.
*/
// if-else and if- else if- else statements

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    // We can use ASCII values also to check the character type
    if(ch>='A'&&ch<='Z'){ 
        cout<<"Character is uppercase"<<endl;
    } else if(ch>='a'&&ch<='z'){
        cout<<"character is lowercase"<<endl;
    } else{
        cout<<"Character is not an alphabet"<<endl;
    }
 // For ternary operator

    int bill_amount;
    cout<<"Enter the bill amount: ";
    cin>>bill_amount;
    // usimg ternary operator 
    int final_amount = (bill_amount>1000)?(bill_amount-100):bill_amount;
    cout<<"Final amount to be paid: "<<final_amount<<endl;
 return 0;
}