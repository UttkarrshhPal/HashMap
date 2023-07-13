#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>input(n);

    for(int i = 0;i<n;i++)
    {
        cin>>input[i];
    }

    map<int,int>mp;
    for(int i = 0;i<n;i++)
    {
       mp[input[i]]++; 
    }
    int sum = 0;
    for(auto pair:mp)
    {
        if(pair.second>1)
        sum+=pair.first;
    }
    cout<<"ANS-->"<<sum<<endl;
}