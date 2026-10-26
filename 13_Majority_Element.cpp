/*Goal: Find the majority element in an unsorted vector using a brute-force approach.
Concepts: Vectors, nested loops, frequency counting, time complexity optimization.

QUESTION / PROBLEM STATEMENT:
Write a C++ program that takes a vector of integers and finds the majority element
(an element that appears more than n/2 times) using a brute-force nested loop technique.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num={1,1,2,2,1,2,2};
    int n=num.size();
    for(int val:num){
        int freq=0;
        for(int el:num){
            if(el==val){
                freq++;
            }
        }
        if(freq>n/2){
             cout<<"Majority element is"<<" "<<val<<" ";
            break;
        }
    }
    return 0;
}