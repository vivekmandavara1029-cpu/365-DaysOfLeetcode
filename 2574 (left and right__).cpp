class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int i,sum=0,sum1=0,n;
        n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        left[0]=0;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
            if(i<n-1)
                left[i+1]=sum;}

        right[n-1]=0;
            for(i=n-1;i>0;i--){
                sum1=sum1+nums[i];
                if(i>0)
                    right[i-1]=sum1;}

                for(i=0;i<n;i++){
                    nums[i]=abs(left[i]-right[i]);
                }
     return(nums);}
};
