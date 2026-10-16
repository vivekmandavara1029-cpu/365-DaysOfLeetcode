class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>result;
     int i ,j ,flag;
     for(i=0;i<words.size();i++){
        flag=1;
        for(j=0;(words[i][j]!='\0'&&flag==1);j++){
            if(x==words[i][j]){
            result.push_back(i);
            flag=0;}
        } }  
        return(result);
    }
};
