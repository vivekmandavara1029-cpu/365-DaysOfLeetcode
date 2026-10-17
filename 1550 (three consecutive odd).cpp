class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,flag=1,len;
        len=arr.size();
         
        for(i=0;((i<len-2)&&len>2);i++){
            if((arr[i]%2!=0)&&(arr[i+1]%2!=0)&&(arr[i+2]%2!=0))
           return(true);
            }
        return (false);
    }
};
