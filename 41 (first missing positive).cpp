class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int i=0,n,idx;
      n=nums.size();
     while(i<n){
        idx=nums[i];
             if((idx>0)&&(idx<n)){
            if((nums[i]!=i+1)&&(nums[i]!=nums[idx-1]))
                swap(nums[i],nums[idx-1]);
            else
             i++;}
            else
             i++;}
    for(i=0;(i<n);i++){
        if(nums[i]!=i+1)
            return(i+1);}
             return(n+1);
        }
};
