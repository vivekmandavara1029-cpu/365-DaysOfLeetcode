class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i,max=0,j,count=0,n;
        n=arr.size();
        for(i=0;i<n;i++){
            max=0;
            for(j=i+1;j<n;j++){
            if(arr[j]>max)
            max=arr[j];}

            arr[count]=max;
            count++;}
arr[n-1]=-1;
return(arr);
        }
};
