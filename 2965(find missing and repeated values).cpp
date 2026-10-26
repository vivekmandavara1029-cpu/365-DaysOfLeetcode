class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n,i,j,flag=1;
        n=grid.size();
        vector<int>aux(n*n+1,0);
        vector<int>print(2);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                aux[grid[i][j]]++;}
        } 
i=1;
      while(i<n*n+1){
            if(aux[i]==2)
                print[0]=i;
           else if(aux[i]==0)
                  print[1]=i;
                  i++;}
        return(print);}
};
