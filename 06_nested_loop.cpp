/*GOAL: Master nested loop tracking by manipulating inner loop boundaries relative to the outer loop
 counter to build inverted star shapes and dynamic numeric grids.

 CONCEPTS:
 - Outer Loop (Rows): Handles the vertical layout and controls how many lines 
  are generated.
 - Inner Loop (Columns): Handles horizontal printing on a single line before 
  resetzen on the next row iteration.
 - Dependent Boundaries: Dynamically changing the inner loop initialization 
  (j = i) or termination condition (j <= i) based on the outer loop's value.
 
  Question:
 - Pattern 1: Inverted Star Triangle (Counting down from n down to 1 using 
  your custom tracking logic).
 - Pattern 2: Sequential Number Grid Triangle (Printing column indices 
  horizontally to match changing rows).
  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    for(int i=n ; i>0 ; i--){ //outer loop
        for(int j=i ; j>0 ; j--){ //inner loop
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1 ; i<=n ; i++){ //outer loop
        for(int j=1; j<=i ; j++){ //inner loop
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

}