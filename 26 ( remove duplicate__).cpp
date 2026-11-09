class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int tp,fp,n;
       n=nums.size();
    tp=fp=0;
            while(tp<n){
                if(nums[tp]!=nums[fp]){
                fp++;
                nums[fp]=nums[tp];}
                tp++;
            }
            return(fp+1);}
            };
