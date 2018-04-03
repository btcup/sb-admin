#include <iostream>
using namespace std;
int main(){
    
    int  s,c,g;
    cout<<"Number of subject : ";
    cin>>s;
    cout<<"Number of students : ";
    cin>>c;
    double S[s][c];
    for(int i=0;i<s;i++)
    {cout <<"score of Subject "<<i+1<<" ";
    for (int j=0;j<c;j++){cin>>S[i][j];} 
                }
    cout<<"Select graph (1-sore,2-max) : " ;
    cin >>g;
    if(g==1)
{for(int i=0;i<s;i++){ cout <<"Subj"<<i+1<<endl; 
         for(int j=0;j<c;j++){
                 for(double k=(S[i][j]);k>0; )
                 {if(k>10) {cout<<"0";k-10;continue;}
                 else if (k>5){cout<<"x";k-5;continue;}
                 }                     
                 }
    
    }
    
  
    
}
    
    system("pause");
    return 0;
    }
