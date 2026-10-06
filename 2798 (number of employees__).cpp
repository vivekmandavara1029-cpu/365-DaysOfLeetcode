class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int i,count=0;
        for(i=0;i<hours.size();i++){
if(hours[i]>=target)
count++;}
    return(count);}
};
