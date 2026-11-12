class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,n,n1,flag,j,np;
        n=haystack.size();
        n1=needle.size();
        while(i<=(n-n1)){
            flag=1;
            np=0;
         for(j=i;((j<n)&&(flag==1)&&(np<n1));j++){
             if(haystack[j]==needle[np])
                np++;
             else
                flag=0; }

             if(np==n1)
                return(i);
            i++;}
        return(-1);}
};
