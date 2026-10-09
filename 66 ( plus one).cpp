class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int i;
     i=((digits.size())-1);
     while(i>=0){
     if(digits[i]!=9){
     digits[i]=digits[i]+1;
     return (digits);}
     else{
     digits[i]=0;
     i--;}}
digits.push_back(0);
digits[0]=1;
return (digits);}
};
