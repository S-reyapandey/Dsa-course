 vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
       // sort(nums.begin(), nums.end());
        int target = 0;
        vector<int> v;
        vector<vector<int>>ans;
        for(int i = 0; i<n ; i++)
        {
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target)
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    ans.push_back(v);
                    j++;
                    k--;
                }
                else if(sum < target)
                {
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }