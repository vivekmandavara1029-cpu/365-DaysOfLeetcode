class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int tp,fp,n;
        n=nums.size();
        tp=fp=0;
    while(tp<n){
        if(nums[fp]==val && nums[fp]!=nums[tp]){
        swap(nums[fp],nums[tp]);
        fp++;}
        else if(nums[fp]!=val)
        fp++;
        tp++;
    }
    return(fp);}
};
