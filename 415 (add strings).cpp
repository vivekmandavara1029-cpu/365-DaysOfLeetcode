class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1,n2,sum,carry=0,nm1,nm2;
        
     n1=num1.size()-1;
     n2=num2.size()-1;   
     string ans;
     while((n2>=0)||(n1>=0)){
        if(n1<0)
            nm1=0;
        else
             nm1=num1[n1]-'0';
        if(n2<0)
            nm2=0;
        else
            nm2=num2[n2]-'0';
        sum=carry+nm1+nm2;
        ans.push_back((sum%10)+'0');
        carry=sum/10;
         n1--;
         n2--;
     }
     if (carry) ans.push_back(carry+'0');

     reverse(ans.begin(),ans.end());
     return(ans);
     }   
};
