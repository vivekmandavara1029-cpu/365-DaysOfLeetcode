class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int words,max=0,i,j;
      for(i=0;i<sentences.size();i++){
        words=1;
        for(j=0;sentences[i][j]!='\0';j++){
            if(sentences[i][j]==' ')
            words++;}
            if(words>max)
max=words;

        }
     return(max);  
    }
};
