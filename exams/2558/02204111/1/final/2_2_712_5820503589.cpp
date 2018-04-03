#include<iostream>
using namespace std;
      
      int CountThe(string s,int &m)
      {
          int i,n,b=0;
          n=s.size();
          for(i=0;i<n;i++)
          {
             if(s[i]=='T'||s[i]=='t' && s[i+1]=='H'||s[i+1]=='h' && s[i+2]=='E'||s[i+2]=='e' && s[i+3]==' ' )
             {
              m=m+1;
              }
            
         
             
          }
           return m;
     

       }
     int main()
      {
         int m=0;
         string s;
         
         cout<<"Enter your sentence : ";
         getline(cin,s,'\n');
         
        
         
            cout<<CountThe(s,m)-1<<"Words of 'the'.";
         
        
         
      
    
    
    
    
    
         system("pause");
         return 0;
    
      }
