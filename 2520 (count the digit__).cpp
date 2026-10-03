 //Given an integer num, return the number of digits in num that divide num;
 class Solution {
public:
    int countDigits(int num) {
        int ld,copy,count=0;
        copy=num;
        while(num>0){
            ld=num%10;
            if(copy%ld==0)
            count++;
            num=num/10;}
            return(count);
        
    }
};
