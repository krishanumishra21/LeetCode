class Solution {   
public:
    int maxArea(vector<int>& height) {
    int lp=0,rp=height.size()-1;
    int MaxWater=0;
    while(lp<rp){
        int w=rp-lp;
        int ht =min(height[lp],height[rp]);
        int ans=w*ht;
        MaxWater=max(ans,MaxWater);
        height[lp]<height[rp]?lp++ : rp--;
    }
    
    return MaxWater;
    }
   
    };
