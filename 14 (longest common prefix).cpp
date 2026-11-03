class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,k=0,n,count=0,flag;
        char idx;
        string prefix;
        n=strs.size();
        while(strs[0][k]!='\0'){
            flag=1;
            idx=strs[0][k];
        for(i=0;((i<n)&&(flag==1));i++){
            if(strs[i][count]!=idx)
                flag=0;}
            if(flag==1){
                prefix.push_back(idx);
                count++;}
            k++;  }
    return(prefix);}
};
