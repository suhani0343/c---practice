
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