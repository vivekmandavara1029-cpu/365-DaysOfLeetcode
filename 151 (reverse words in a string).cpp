class Solution {
public:
    string reverseWords(string s) {
        int flag=1,i,bot,fill,n,count=0,word=0;
        n=s.size()-1;
        string ans;
        bot=n;
        if(n==0)
        return(s);
        fill=bot;
        for(i=0;i<=n;i++){
         if(((s[i]!=' ')&&(s[i+1]==' '))||((s[i]!=' ')&&(s[i+1]=='\0')))
            word++;}
        word--;

        while(bot>0){
            flag=0;
        if((s[bot]!=' ')&&(s[bot-1]==' ')){
        fill=bot;
        flag=1;
        while((s[fill]!=' ')&&(s[fill]!='\0')){
        ans.push_back(s[fill]);
        fill++;}}

        if((word>0)&&(flag==1)){
        ans.push_back(' ');
        word--;}
        bot--;}

        while((s[count]!=' ')&&(s[count]!='\0')){
        ans.push_back(s[count]);
        count++;}
    
             return(ans);}
};
