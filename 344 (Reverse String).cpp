class Solution {
public:
    void reverseString(vector<char>& s) {
        int n,bot,top;
        n=s.size();
        top=0;
        bot=n-1;
        while(top<=bot){
       swap(s[top],s[bot]);
        top++;
        bot--;}
        return;
    }
};
