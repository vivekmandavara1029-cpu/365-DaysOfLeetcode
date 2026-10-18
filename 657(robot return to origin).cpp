class Solution {
public:
    bool judgeCircle(string moves) {
        int k,i=0,j=0;
        for(k=0;moves[k]!='\0';k++){
            if(moves[k]=='U')
                j++;
           else if(moves[k]=='D')
                j--;
           else if(moves[k]=='R')
                i++;
           if(moves[k]=='L')
                 i--; }
if((i==0)&&(j==0))
return(true);
else
return(false);

    }
};
