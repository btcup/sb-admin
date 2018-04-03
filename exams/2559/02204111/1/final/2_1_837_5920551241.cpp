//5920551241 Jetanon Yaemsin
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    string a,b,c;
    cout<<"Please input M :";
    cin>>n;
    cout<<"Please input array A"<<endl; 
    for (i=0;i<n;i++)
    {
        int A[i];
      for(j =0;j<n;j++)
      {
              cin>>A[i];
              if (A[i] >=100){break;
              cout<< "Wrong input !!";
              cout<<"End of Progarm"; }
              a = A[i];
      }   
    } 
    cout<<"Please input array B: "<<endl;
    for(int m=0;m<n;m++)
    { int B[i];
      for(int a=0;a<n;a++)
      {      
             cin>>B[i];
    
              if (B[i] >=100)
                  {  break;
                         cout<< "Wrong input !!";
                          cout<<"End of Progarm"; } 
             b =B[i];             
      }
    }
    c = (b!=a)*100;
     cout<<"Similarity of A and B is: "<<c<<endl;
system("pause");         
return 0;
}
    
