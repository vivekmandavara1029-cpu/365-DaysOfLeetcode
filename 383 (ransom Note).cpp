class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
            int i=0,j=0,n,n1;
        n=ransomNote.size();
        n1=magazine.size();
          sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
    while((i<n)&&(j<n1)){
        if(ransomNote[i]!=magazine[j])
            j++;
        else{
            i++;
            j++;}}

        if(i==n)
            return(true);
        else
            return(false);
    }
};
