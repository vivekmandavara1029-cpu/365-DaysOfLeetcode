class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n,i,idx;
            n=nums.size();
            vector<int>aux(n+1,0);
            vector<int>print;
        for(i=0;i<n;i++){
            idx=nums[i];
            aux[idx]=1;}
        for(i=1;i<=n;i++){
            if(aux[i]!=1)
            print.push_back(i);
             }
return(print);}
};
