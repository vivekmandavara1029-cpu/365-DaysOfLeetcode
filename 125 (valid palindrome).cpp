class Solution {
public:
    bool isPalindrome(string s) {
      int n,i,left,right,flag=1,n1;
      n=s.size();
      string ans;
      for(i=0;i<n;i++){
        if(('A'<=s[i])&&(s[i]<='Z'))
            ans.push_back(s[i]+32);
        else if((('a'<=s[i])&&(s[i]<='z'))||(('0'<=s[i])&&(s[i]<='9')))
            ans.push_back(s[i]); }

        n1=ans.size();
        left=0;
        right=n1-1;
        flag=1;
        while((left<=right)&&(flag==1)){
             if(ans[left]==ans[right]){
                 left++;
                 right--;}
            else
                flag=0;}
        if(flag==1)
             return true;
        else
            return false; }
};
