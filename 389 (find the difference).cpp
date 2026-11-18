class Solution {
public:
    char findTheDifference(string s, string t) {
               int i,n1,n2;
        char idx,idx1;
        n1=s.size();
        n2=t.size();
    
        vector<int>alfa1(26,0);
        vector<int>alfa2(26,0);

        for(i=0;i<n1;i++){
            idx=s[i];
        alfa1[idx-97]++; }

         for(i=0;i<n2;i++){
            idx1=t[i];
        alfa2[idx1-97]++;}

        for(i=0;i<26;i++){
          if(alfa1[i]!=alfa2[i])
            return(97+i); }
        return(0);
    }
};
