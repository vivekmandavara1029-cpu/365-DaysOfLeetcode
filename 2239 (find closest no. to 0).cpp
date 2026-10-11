class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int i,close;
   close=nums[0];
   for(i=0;i<nums.size();i++){
    if(abs(nums[i])<abs(close))
    close=nums[i];
    else if((nums[i]>0)&&(abs(nums[i])==abs(close)))
    close=nums[i];
   }
   return (close);
    }
};
