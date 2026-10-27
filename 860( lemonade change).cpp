class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i,n,five=0,ten=0,flag=1;
        n=bills.size();
    for(i=0;((i<n)&&(flag==1));i++){
    if(bills[i]==5)
             five++;
    else if((bills[i]==10)&&(five>0)){
         ten++;
        five--;}
    else if((bills[i]==20)&&(five>0)&&(ten>0)){
         ten--;
        five--;}
    else if((bills[i]==20)&&(five>2)&&(ten==0))
        five=five-3;
    else
        flag=0;}
        
    if(flag==1)
        return(true);
    else
        return(false);
    }
