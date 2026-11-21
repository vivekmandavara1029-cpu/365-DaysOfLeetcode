class Solution {
public:
    int countSegments(string s) {
        int i,count=0,n;
        n=s.size();
        for(i=0;i<n;i++){
            if(((s[i]!=' ')&&(s[i+1]==' '))||((s[i]!=' ')&&(s[i+1]=='\0')))
            count++;}
            return(count);}
};
