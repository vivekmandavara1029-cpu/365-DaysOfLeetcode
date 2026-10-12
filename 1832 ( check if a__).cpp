class Solution {
public:
    bool checkIfPangram(string sentence) {
        int i=97,j=0;
     sort(sentence.begin(),sentence.end());
while(sentence[j]!='\0'){
if(sentence[j]==(char)i)
i++;
j++;}
if(i==123)
return(true);
else
return (false);}
      
};
