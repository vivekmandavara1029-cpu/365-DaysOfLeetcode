//cout<<" using bit sat concept";
class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        vector<int>fill(101,0);//cout<<take an empty array(fill) , all the element initialize with zero ;
        int i=0,idx,alice,bob;
        while(i<nums.size()){
			idx=nums[i];
			fill[idx]=1;
    		i++;}
    	i=0;
    	while(i<101){
        	alice=bob=-1;
		if(fill[i]==1){
			alice=i;
			i++;}
		if(fill[i]==1)
		bob=i;
		if(bob>0){
		arr.push_back(bob);
		arr.push_back(alice);}
		i++;}
return(arr);}
};
