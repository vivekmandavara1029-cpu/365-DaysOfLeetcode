class Solution {
public:
    bool judgeSquareSum(int c) {
        int result;
        long long int high,low;
        low=0;
        high=sqrt(c);
         
        while(high>=low){
             if((high*high+low*low)==c)
            return(true);
             if(low*low+high*high>c)
            high--; 
            else
            low++; }
            return(false);

    }
};
