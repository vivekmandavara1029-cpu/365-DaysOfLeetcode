class Solution {
public:
    bool checkRecord(string s) {
        int i,late=0,absent=0,n;
        n=s.size();
        for(i=0;i<n;i++){
            if((s[i]=='L')&&(s[i+1]=='L')&&(s[i+2]=='L'))
                late++;
            else if(s[i]=='A')
                absent++; }

            if(late>=1)
                return(false);
            else if(absent>=2)
                return(false);
            else
            return(true); }
};
