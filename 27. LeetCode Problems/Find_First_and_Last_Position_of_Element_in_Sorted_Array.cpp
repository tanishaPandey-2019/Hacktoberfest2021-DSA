class Solution {
public:
    
    int firstOcc(vector<int> &nums, int target, int n,int i)
    {
         if(i == n)
             return -1;
        
        if(nums[i] == target)
        {
            return i;
        }
        
        return firstOcc(nums, target, n, i + 1);
             
    }
    
    int lastOcc(vector<int> &nums, int target, int n,int i)
    {
        if(i == -1)
            return -1;
        
        if(nums[i] == target)
        {
            return i;
        }
        
        return lastOcc(nums,target,n, i - 1);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> occ;
        int n = nums.size();
        int firstO = firstOcc(nums,target,n,0);
        int lastO = lastOcc(nums,target,n,n - 1);
        
        occ.push_back(firstO);
        occ.push_back(lastO);
        
        return occ;
        
        
    }
};
