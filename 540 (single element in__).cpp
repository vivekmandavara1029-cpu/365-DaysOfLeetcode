class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
              int i,n,med,low,high;
        n=nums.size();
        low=0;
        high=n-1;
        if(n==1)
        return(nums[0]);
        while(low<=high){
            med=(low+high)/2;
            if((med>0)&&(nums[med]!=nums[med-1])&&(nums[med]!=nums[med+1]))
            return(nums[med]);
         if(((med+1)%2==0)&&(nums[med]==nums[med-1]))
                low=med+1;
               else if(((med+1)%2!=0)&&(nums[med]==nums[med+1]))
                low=med;
                else
                high=med-1;}

                return(nums[med]);}
};
