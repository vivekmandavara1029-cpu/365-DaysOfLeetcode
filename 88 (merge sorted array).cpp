class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i,j,count;
    if((m==0)&&(n==1)){
        nums1[0]=nums2[0];
        return;}
i=m-1;
j=n-1;
count=m+n-1;
while((i>=0)&&(j>=0)){
      if(nums1[i]>=nums2[j]){
        nums1[count]=nums1[i];
        i--;}
    else{
    nums1[count]=nums2[j];
    j--;}
    count--;}

    while(i>=0){
        nums1[count]=nums1[i];
        i--;
        count--;}

    while(j>=0){
        nums1[count]=nums2[j];
        j--;
        count--;}
return;}
};
