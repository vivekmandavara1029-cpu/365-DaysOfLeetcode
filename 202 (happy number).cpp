class Solution {
public:
    bool isHappy(int n) {
        int sum,ld,result;
        while((n!=1)&&(n!=4)){
sum=0;
while(n>0){
        ld=n%10;
        sum=sum+ld*ld;
        n=n/10;}
        n=sum;}
        if(sum==1)
        result=true;
        else
        result=false;
        return(result);}
        };
