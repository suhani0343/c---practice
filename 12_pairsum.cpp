/*Goal: Find a pair of elements in a sorted array that sum up to a specific target value efficiently using the two-pointer technique.
Concepts: vectors, two pointers, searching, sorting prerequisite, time complexity optimization

QUESTION / PROBLEM STATEMENT:
Write a C++ program that takes a sorted vector of integers and a target value, then finds and returns the indices of the two elements
whose sum equals the target using an optimal linear-time approach.*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>num,int target){
    vector<int>ans;
    int n=num.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int pairsum=num[i]+num[j];
        if(pairsum>target){
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int>num={2,7,11,15};
    int target=13;
    vector<int> ans = pairsum(num, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}