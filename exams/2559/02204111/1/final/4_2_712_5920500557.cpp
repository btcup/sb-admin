//5920500557 Suwanna Chinmuni
#include<iostream>
using namespace std;
int main()
{
    int d,s;
    int i,j;
    cout<<"Number of student : ";
    cin>>d;
    cout<<"Number of subject : ";
    cin>>s;
    string score[d][s];
    for(i=1;i<=d;i++){
    cout<<"score of student"<<i<<":";
                 for(j=1;j<=s;j++)
                 cin>>score[i][j];
                     }
    int graph,k;
    cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>graph;
    
    if(graph==1){
         for(int k=10;k<=score[i][j];k=k+10){
            cout<<"o";
            if(k==5){
                     cout<<"x";
                     cout<<endl;
                     }
                     }
            }
         
            
    
                     
  system("pause");
  return 0;
}   
