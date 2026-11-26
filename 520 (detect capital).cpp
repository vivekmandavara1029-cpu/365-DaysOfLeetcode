class Solution {
public:
    bool detectCapitalUse(string word) {
     int i,upper=0,lower=0,both=0,n;
    n=word.size();
     for(i=0;i<n;i++){
        if((word[i]>64)&&(word[i]<91))
             upper++;
        if((word[i]>96)&&(word[i]<123))
            lower++;
        if((word[0]>64)&&(word[0]<91)&&(word[i+1]>96)&&(word[i+1]<123))
            both++; }   
            if(n==upper)
                return(true);
           else if(n==lower)
                 return(true);
           else if(n==both+1)
                return(true);
           else
                return(false);
    }
};
