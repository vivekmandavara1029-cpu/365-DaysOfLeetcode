class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int i=0;
    vector<int>arrs(256,0);
    vector<int>arrt(256,0);
    while(s[i]!='\0'){
         if(arrs[s[i]]!=arrt[t[i]])
            return(false);
            arrs[s[i]]=i+1;
            arrt[t[i]]=i+1;
            i++;
        }
 return(true);}
};
