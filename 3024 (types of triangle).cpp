class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a,b,c;
        string result;
        a=nums[0];
        b=nums[1];
        c=nums[2];
        if((a+b>c)&&(b+c>a)&&(c+a>b)){
        if((a==b)&&(b==c))
        result="equilateral";
        else if(a==b||a==c||b==c)
        result="isosceles";
        else 
        result="scalene";}
        else
        result="none";
        return (result); } 
