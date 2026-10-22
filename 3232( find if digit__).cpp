class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int i,sum=0,sum1=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]<10)
                 sum=sum+nums[i];
             else
                sum1=sum1+nums[i];}
            if(sum1>sum)
                return(true);
             if(sum>sum1)
                return(true);
       return(false);
    }
};
