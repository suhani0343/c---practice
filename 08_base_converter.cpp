/* Goal: To implement a bidirectional number system converter that translates a base-10 integer into its base-2 positional representation, and 
   then mathematically decodes it back to verify the integrity of both algorithms.
 
   Concept:
   Bidirectional Base Algorithms: Reversing positional scaling rules between base-2 and base-10 systems by systematically swapping factor multiplication/division steps.
   Variable Chaining: Passing the calculated outcome of one logical cycle directly as the initialization state for a follow-up algorithm without requiring separate standard input calls.
   Reusable Storage States: Optimizing memory overhead by reusing local tracking variables (rem) across separate sequential loop blocks.

   Question:Write a single C++ program inside int main() that reads an integer base-10 value, applies continuous
   modulo-2 division to compute its binary sequence, and then takes that binary sequence to mathematically reconstruct 
   the original decimal value through base-10 parsing and base-2 positional shifts.
*/
//decimal to binary 
#include<iostream>
using namespace std;
int main(){
      int decimal_no;
      cout<<"Enter the decimal no"<<endl;
      cin>>decimal_no;
      int p=1;
      int binary_no=0;
      int rem;
      while(decimal_no > 0){
             rem= decimal_no%2;
             decimal_no /=2;
             binary_no+= rem*p;
             p= p*10;
      }
      cout<<"Binary no is:"<<binary_no<<endl;
      
// binary to decimal
      int bin_input = binary_no; 
      int decimal_output = 0;
      int p2 = 1;
  
      while(bin_input > 0){
             rem = bin_input % 10;
             decimal_output += rem * p2; 
             bin_input /= 10; 
             p2 = p2 * 2;
      }
      cout << "Converted back to Decimal: " << decimal_output << endl;
  
      return 0;
}

      
            
