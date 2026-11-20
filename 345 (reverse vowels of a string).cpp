class Solution {
public:
    string reverseVowels(string s) {
        int n,top,bot,flag1,flag2;
        n=s.size();
        top=0;
        bot=n-1;
        while(top<=bot){
            flag1=0;
            flag2=0;
            if(((s[top]=='a')||(s[top]=='e')||(s[top]=='i')||(s[top]=='o')||(s[top]=='u')||(s[top]=='A')||(s[top]=='E')||(s[top]=='I')||(s[top]=='O')||(s[top]=='U'))&&(flag1==0))
            flag1=1;
            else
            top++;

             if(((s[bot]=='a')||(s[bot]=='e')||(s[bot]=='i')||(s[bot]=='o')||(s[bot]=='u')||(s[bot]=='A')||(s[bot]=='E')||(s[bot]=='I')||(s[bot]=='O')||(s[bot]=='U'))&&(flag2==0))
            flag2=1;
            else
            bot--;

            if((flag1==1)&&(flag2==1)){
                swap(s[top],s[bot]);
                bot--;
                top++;}
          }
        return(s); }
};
