class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int i=0,j=0;
        while((word1[i]!='\0')&&(word2[j]!='\0')){
            merged.push_back(word1[i]);
            i++;
            merged.push_back(word2[j]);
            j++;}
        while(word1[i]!='\0'){
            merged.push_back(word1[i]);
            i++;}
            while(word2[j]!='\0'){
            merged.push_back(word2[j]);
            j++;}
                return(merged);}
}; 
