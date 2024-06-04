#include <bits/stdc++.h> 
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>>ans;
	for(int i = 0; i<arr.size(); i++)
	{
		for(int j = i+1;j<arr.size();j++)
		{
			for(int k = j+1; k<arr.size(); k++)
			{
				vector<int>temp;
				temp.push_back(arr[i]);
				temp.push_back(arr[j]);
				temp.push_back(arr[k]);
				sort(temp.begin(), temp.end());
				ans.push_back(temp);
			}
		}
	}
	sort(ans.begin(), ans.end());
	return ans;
}

int main()
{

    return 0;
}
