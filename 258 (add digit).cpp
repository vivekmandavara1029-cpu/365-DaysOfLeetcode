
//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it;
class Solution {
public:
    int addDigits(int num) {
        int sum,ld,result;
        while(num>9){
        sum=0;
        while(num>0){
            ld=num%10;
            sum=sum+ld;
            num=num/10;}
            num=sum;}
            if(num<9)
            result=num;
        return(result);}
};
