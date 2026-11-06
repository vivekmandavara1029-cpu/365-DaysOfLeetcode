class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n,i,idx;
        n=nums.size();
        vector<int>aux(1001,0);
        for(i=0;i<n;i++){
            idx=nums[i];
            aux[idx]=1;}

        while(original<1001){
            if(aux[original]==1)
            original=original*2;
            else
            return(original);
        }
return(original);
    }
};
