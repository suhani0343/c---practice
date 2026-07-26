#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(3,1)  ;
    cout<<"size="<<v.size()<<endl;
    cout<<"capacity="<<v.capacity()<<endl;
    v.push_back(3);
    v.push_back(7);
    cout<<"capacity="<<v.capacity()<<endl;
    cout<< "vector is"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<"size is: "<<v.size()<<endl;
    v.pop_back();
    v.push_back(45);
    for(int value:v){
        cout<<value<<endl;
    }
    cout<<"front value is :"<<v.front()<<endl;
    cout<<"back value is :"<<v.back()<<endl;
    return 0;
}
