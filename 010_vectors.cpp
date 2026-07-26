/* Goal: To find the second largest distinct element in a dynamically populated C++ std::vector in a single traversal, properly handling edge 
   cases like duplicate values or small vector sizes.

   Concepts:
   std::vector Traversal: Iterating through dynamic array elements using .size() and indexing.
   <climits> Library (INT_MIN): Initializing variables to the absolute smallest possible integer to handle negative numbers safely  
   Single-Pass Logic: Updating primary (largest) and secondary (secondlargest) tracking variables simultaneously inside a single loop.
   Edge-Case Validation: Checking for invalid input sizes (N < 2) and returning early using return 0;.
    
   Question: Write a C++ program to find the second largest distinct element in a vector of integers.
    If no such element exists (e.g., all elements are identical or vector size is less than 2), output an appropriate message.

*/
#include<iostream>
#include<vector> //for using vector
#include<climits> //for using INT_MIN
using namespace std;
int findsecondlargestno(vector<int>& v){
    int largest=INT_MIN;
    int secondlargest= INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>largest){
            secondlargest=largest;
            largest=v[i];
        }else if(v[i]>secondlargest && v[i]!=largest){
            secondlargest=v[i];
        }
    }
    if(secondlargest==INT_MIN){
        return -1;
    }
    return secondlargest;     
}
int main(){
    cout<<"enter the no of elements"<<endl;
    int n;
    cin>>n;
    if(n<2){
        cout<<"there is no second largest digit"<<endl ;
        return 0;
    }
    cout<<"enter the"<<n<<"elements"<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=findsecondlargestno(v);
    if(ans==-1){
        cout<<"there is no second largest digit"<<endl;
    }else{
        cout<<"second largest no is:"<<ans<<endl;
    }
}