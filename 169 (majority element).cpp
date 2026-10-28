class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n;
        n=nums.size();
     sort(nums.begin(),nums.end());
  return(nums[n/2]);
}        
};
