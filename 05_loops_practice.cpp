/*GOAL: Master fixed and dynamic iteration patterns in C++ by combining a structured 
 multiplication table generator and a mathematical digit reversal script in a 
 single execution file.

 CONCEPTS:
 - for Loop Control: Used when execution bounds (1 to 10) are statically defined.
 - while Loop Control: Used when processing values dynamically until a numeric 
  boundary (n > 0) is hit.
 - Modular Digit Extraction: Isolating individual digits using the remainder 
  operator (% 10) and reducing the number length via integer truncation (/ 10).

 QUESTION: Take a user-inputted number 'n' to output its multi-line multiplication 
  table from 1 to 10, and immediately follow it by dissecting and printing 
  the original digits sequentially in reverse order.
*/

  // Multiplication Table using for loop 

 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<< n <<"X"<<i<<"="<<(n*i)<<endl;
    }
    
    // Now reversing the nymber using while loop
    cout<<"Reversed number is:";
    while(n>0){
        cout<<(n % 10);
        n=n/10;
    }
    return 0; // We can also use do-while
}    