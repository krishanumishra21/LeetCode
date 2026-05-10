class Solution {
public:
      
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int es=0;
        int ds=0;
        for(int i=0;i<n;i++){
            es+=nums[i];

            while(nums[i]!=0){
                ds+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }
        int a=abs(es-ds);
        return a;
    }
};