class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n,i,count=0;
         n=nums.size();
       for(i=0;i<n;i++){
         if(nums[i]!=0){
            nums[count]=nums[i];
            count++;}
         } 
       for(i=count;i<n;i++){
             nums[i]=0; }
    return;}  
};
