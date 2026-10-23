//cout<< "there are various types of method to solve this problem"
//cout<<: " we are use negative index method to solve this problem"
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,idx,n;
        n=nums.size();

    for(i=0;i<n;i++){
      if(nums[i]==0){
      nums[i]=n+1;
      nums[0]=(-1)*nums[0];}}

       for(i=0;i<n;i++){
        idx=abs(nums[i]);
        if(idx<n)
        nums[idx]=(-1)*nums[idx];
}
for(i=0;i<n;i++){
   if(nums[i]>0)
   return(i);
}              
return (n);}
};
