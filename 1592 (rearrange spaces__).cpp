class Solution {
public:
    string reorderSpaces(string text) {
        int i,space=0,word=0,total,j,flag;
        std::string s;
        for(i=0;text[i]!='\0';i++){
            if(text[i]==' ')
            space++;
          else  if((text[i]!=' ')&&(text[i+1]==' ' || text[i+1]=='\0'))
            word++;}
            if(word>1)
         total=space/(word-1);
         else if((word==1)&&(text.size()>1))
         total=space;
         else
         return(text);
         i=0;
         
         while(text[i]==' '){
             i++;}
         while(i<text.size()){
            flag=0;

           while(text[i]==' '){
            i++;
            flag=1;}

            for(j=1;((j<=total)&&(flag==1)&&(space>0));j++){
                s.push_back(' ');
                space--;}

            if (i<text.size() && text[i]!=' ')
             s.push_back(text[i]);
                i++;
         }
         while(space!=0){
         s.push_back(' ');
         space--;}
return(s);}
};
