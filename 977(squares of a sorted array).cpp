class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
          int top,bot,right;
        vector<int>aux(nums.size());
            top=0;
            bot=nums.size()-1;
            right=nums.size()-1;
        while(bot>=top){
            if(nums[top]*nums[top]<=nums[bot]*nums[bot]){
                aux[right]=nums[bot]*nums[bot];
                bot--;}
            else{
                aux[right]=nums[top]*nums[top];
                top++;}
                right--;}
               return(aux);    }
};
