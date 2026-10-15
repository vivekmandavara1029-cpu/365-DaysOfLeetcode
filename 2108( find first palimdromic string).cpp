class Solution {
public:
    string firstPalindrome(vector<string>& words) {
     int i,k,left,right,flag;
     for(i=0;i<words.size();i++){
        flag=1;
        left=0;
        for(k=0;words[i][k]!='\0';k++);
        right=k-1;
        while((right>=left)&&(flag==1)){
        if(words[i][left]==words[i][right]){
        left++;
        right--;}
        else
        flag=0; }
if(flag==1)
return (words[i]);
}
    return("");}
};
