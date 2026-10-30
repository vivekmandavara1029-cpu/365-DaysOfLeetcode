class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i,n,flag=1;
        n=nums.size();
        sort(nums.begin(),nums.end());

        for(i=0;((i<n-1)&&(flag==1));i++){
            if(nums[i]==nums[i+1]){
            flag=0;
            return(true);}
        }
        return(false);
    }
};
