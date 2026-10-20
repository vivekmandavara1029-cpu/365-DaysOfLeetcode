class Solution {
public:
    int countKeyChanges(string s) {
        int i,count=0;
        char idx ,idx1;
        for(i=0;s[i]!='\0';i++){
            idx=s[i];
            idx1=s[i+1];
            if((s[i]!=s[i+1])&&(abs(char(idx)-char(idx1))!=32))
       count++; }
    return(count-1);
    }
};
