class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int rab,tor;
      rab=0;
      tor=0;
      do{
        tor=nums[tor];
        rab=nums[nums[rab]];
 }while(rab!=tor);
 tor=0;
 while(rab!=tor){
    tor=nums[tor];
    rab=nums[rab];
 }
            return (tor);}
};
