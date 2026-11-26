class Solution {
public:
    bool isAnagram(string s, string t) {
        int i,n1,n2;
        
        n1=s.size();
        n2=t.size();
        if(n1!=n2)
        return(false);
        vector<int>alfa1(26,0);
        for(i=0;i<n1;i++){
            alfa1[t[i]-97]--;
            alfa1[s[i]-97]++; }
        for(i=0;i<26;i++){
          if(alfa1[i]!=0)
                return(false); }
            return(true);}
};
