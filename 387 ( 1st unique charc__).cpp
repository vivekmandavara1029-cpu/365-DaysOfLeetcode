class Solution {
public:
    int firstUniqChar(string s) {
vector<int>check(27,0);
int i;
for(i=0;s[i]!='\0';i++){
    check[s[i]-97]++;
}
for(i=0;s[i]!='\0';i++){
    if(check[s[i]-97]==1)
    return(i);}
    return(-1);}
};
