#include <iostream>
using namespace std;
int main()
{
    long long i,n;
    int sum=0;
    cout <<"Please intput number: ";
    cin >>n;
    if(n>0)
    {
           if(n%2==0)
           {
                     while(i>=n)
                     sum=sum+n;
                     cout << "Summation of Ever number "<< endl;
                      i++;
                      
           }
           else
           {
                    while(i>=n)
                    sum=sum+n;
                    cout << "Summation of Ever number "<<endl;
                    i++;
           }
           
    }
    else
          cout <<"!! Wrong Input !!"<<endl;
    
     
 system("pause");
 return 0;   
    
    
}
