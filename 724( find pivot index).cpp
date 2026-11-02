class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int i=0,k=0,sum1=0,sumtotal=0,n;
    n=nums.size();

    while(k<n){
        sumtotal=sumtotal+nums[k];
        k++;}
    while(i<n){
        sum1=sum1+nums[i];
        if(sum1==sumtotal)
        return(i);
        sumtotal=sumtotal-nums[i];
        i++;}
    return(-1);   
    }
};
