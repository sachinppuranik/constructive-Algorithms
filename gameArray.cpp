#include<iostream>
#include<vector>
using namespace std;

int findMaxIdx(vector<int>arr)
{
	int max = arr[0],val = 0;
	for(int i =1;i<arr.size();i++)
	{
		if(max < arr[i])
		{
			max=arr[i];
			val++;
		}
	}
	return val;
}

int main()
{
bool andy = false;
vector<int> arr = {2,3,5,4,1};
	int val = findMaxIdx(arr);
	cout<<val<<endl;
	if(val%2 == 0)
	{
	cout<<"BOB"<<endl;	
		
	}
	else
	{
	cout<<"ANDY"<<endl;
	}


}

