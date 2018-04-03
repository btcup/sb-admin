#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Number of subject : ";
    cin>>m;
    cout<<"Number of student : ";
    cin>>n;
    double x[m][n];
    for(int i=0;i<m;i++){
            cout<<"score of Subject "<<i+1<<": ";
            for(int j=0;j<n;j++){
                    cin>>x[i][j];
                    }
                    }
    int g,a;
    cout<<"Select graph (1-score,2-max,3-exit):";
    cin>>g;
    cout<<endl;
    if(g==1){
            for(int i=0;i<m;i++){
                             cout<<"Subj"<<i+1<<endl;
                             for(int j=0;j<n;j++){
                                              a=x[i][j];
                                              for(int k=0;k<a/10;k++){
                                                      cout<<"O";
                                                      }
                                                      if(a%10>=5)cout<<"X"<<endl;
                                                      else cout<<endl;
                                                      }
                                                      }
                                                      }
    else if(g==2){
         
         for(int i=0;i<m;i++){
                 int max=0;
                             cout<<"Subj"<<i+1<<endl;
                             for(int j=0;j<n;j++){
                                     if(j==0)max=x[i][j];
                                     else if(x[i][j]>=max)max=x[i][j];
                                     else if(x[i][j]<max)continue;
                                     
                                     }     
                                     a=max;
                                              for(int k=0;k<a/10;k++){
                                                      cout<<"O";
                                                      }
                                                      if(a%10>=5)cout<<"X"<<endl;
                                                      else cout<<endl;
                                                      
                                                      }}
                                                      
                                                     
                                              
            
    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    system("pause");
                    return 0;
                    }
