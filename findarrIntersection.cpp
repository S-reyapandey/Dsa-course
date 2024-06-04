#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.

    int i = 0, j = 0;
    vector<int>ans;
	while(i<n && j<m)
	{
		if(arr1[i] == arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else{
			j++;
		}
	}
   // cout<<ans<<endl;
	return ans;
}

int main()
{
    vector<int>arr1;
    int n;
    for(int i = 0; i<n; i++)
    {
        arr1.push_back(i);
    }
    vector<int>arr2;
    int m;
    for(int j = 0; j<m ; j++)
    {
        arr2.push_back(j);
    }

    findArrayIntersection(arr1,n,arr2,m);
    return 0;
}
