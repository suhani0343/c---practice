/* Goal:​To observe how the unsigned data type modifier alters the compiler's interpretation of 
  negative binary representations by removing the 
  sign bit.

   Concepts:
  Sign Bit (MSB): In standard signed integers, the Most Significant Bit indicates if a number is negative (1) or positive (0).
  Magnitude Shift: The unsigned modifier forces the compiler to treat the entire bit array—including the MSB—as a positive magnitude, expanding the threshold up to 2^{32}-1.
  Implicit Conversion: Passing a negative number to an unsigned int keeps its underlying binary 2's complement representation intact, but parses it entirely as a large positive value.
  
  Question: Write a C++ program that assigns a negative integer (such as -10) to an unsigned int variable. Display both the original signed value and the resulting unsigned value, and explain how the underlying binary
  system interprets the bits when the sign indicator is removed.
  */
#include <iostream>
using namespace std;

int main() {
    int negativeVal = -10;
    unsigned int unsignedVal = negativeVal;

    cout << "Original Signed Integer: " << negativeVal << endl;
    cout << "Interpreted Unsigned Integer: " << unsignedVal << endl;
    
    return 0;
}
