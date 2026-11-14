class Solution {
public:
    int lengthOfLastWord(string s) {
        int i,j,count=0,n;
        n=s.size()-1;
        while(s[n]==' '){
             n--;}
        for(i=n;i>=0&&s[i]!=' ';i--){
            if(s[i]!=' ')
                count++;}
        return(count); }
};
