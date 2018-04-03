#include <iostream>//5620550541 Nanthakorn klinjan
using namespace std;
int main()
{   
    int M,k=0;
    cout<<"Please input M:";
    cin>>M;
    int A[M][M],B[M][M];
    cout<<"Please input array A:"<<endl;
    for(int i=0;i<M;i++)
    {       
            for(int j=0;j<M;j++)
            {      
                  cin>>A[i][j];
                  if(0>A[i][j]||A[i][j]>100) 
                  {
                    i=M;                     
                   break;}
            }
          
         if(i==M)  k=1;
    }                       
    if(k==1)
    {
         cout<<"Wrong input!!"<<endl;
         cout<<"End program."<<endl;
    }
    if(k!=1)
    {
            int l;
             cout<<"Please input array B:"<<endl;
             for(int i=0;i<M;i++)
               for(int j=0;j<M;j++)
            {      
                  cin>>B[i][j];
                  if(0>B[i][j]||B[i][j]>100) 
                  {i=M;
                  int l=1;
                   break;
                   }
                   if(i==M) l=1;
             }
             if(l!=1)
             {
             cout<<"Similarity of A and B is:";
             int sum=0,count=0;
             float percent;
              for(int i=0;i<M;i++)
                   for(int j=0;j<M;j++)
                                        if(A[i][j]==B[i][j])
                                        { 
                                        sum=sum+1;
                                        count++;
                                        }
           percent = (sum/count)*100;   
           cout<<percent<<"%"<<endl;
           }
    else if(l==1)
    {
         cout<<"Wrong input!!"<<endl;
         cout<<"End program."<<endl;
    }        
}                                     
            
    system("pause");
    return 0;
}



