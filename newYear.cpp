#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n=0,count = 0,val=0;
    cout<<"enter value of n"<<endl;
    cin>>n;
    vector<int> arr;// = new vector<int>(n);
    cout<<"enter values";
        for(int i = 0;i<n; i++)
        {
	    cin>>val;
            arr.emplace_back(val);
        }
    for(int i = 0; i < arr.size() -1 ;i++)
    {
         if(arr[i]>arr[i+1])
         {
	     cout<<arr[i]<<" "<<arr[i+1]<<endl;
             count+=arr[i]-arr[i+1];
         }
    }
    cout<<count<<endl;
    return 0;
}

