#include <iostream>
using namespace std;
int CountThe(string a)
{
 
    int i=0,sum;
 
 for (i=0;i<a.size();i++)
    {
        if (a[i]=='t'||a[i]=='T')
        {
               if(a[i+1]=='h'||a[i+1]=='H')
               {
                      if (a[i+2]=='e'||a[i+2]=='E')
                       {
                                      if (a[i+3]==' ')
                                      {
                                      sum=sum+1;
                                      }
                       }
                      }
        }
    }
    return sum;

}
int main ()
{
    string a;
    cout<<"Enter your sentence : ";
    getline(cin,a,'\n');
    cout<<"There are "<<CountThe(a)<<" words of 'the'."<<endl;
    
system ("pause");
return 0;
}
