class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int i,sum=0,sum1=0,result,copy,ld;
        for(i=0;i<nums.size();i++){
            sum=sum+nums[i];}

            for(i=0;i<nums.size();i++){
                copy=nums[i];
                while(copy!=0){
                ld=copy%10;
                sum1=sum1+ld;
                copy=copy/10; }}
                result=abs(sum-sum1);
                return(result);}
};
