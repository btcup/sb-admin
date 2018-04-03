//5920550295 Keartisilp Tearthaisong
#include <iostream>
using namespace std;
int main ()
{
    int n,max,i,j,k,ans,ans1;
    for(i=0;;i++)
    {
        cout<<"Enter N: ";
        cin>>n;
        if(n<=0)continue;
        if(n>0)
        {           
           for(j=1;j<n;j++)
          {
             if(n%j==0)
             {
              ans=j;  
             }  
          }   
          break;      
        }    
    }
    cout<<"The greatest factor of "<<n<<" is" <<ans<<endl;
    system("pause");
    return 0;
}
