class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return -1;
        }
        int maxm=INT_MIN;
        int minm=INT_MAX;
        for(int i=0;i<n;i++){
           maxm=max(maxm,nums[i]);
           minm=min(minm,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=maxm && nums[i]!=minm){
                return nums[i];
            }
        }
        return -1;
    }
};