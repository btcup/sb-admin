#include <iostream>
using namespace std;
int sum1=0,sum=0,sum2=0;
int CountThe(string a,string b,string c,string d){
                for(int i=0;i<a.size();i++){     
                if(a.find(c,i)!=4294967295){
                sum=sum+1;
                }
                }
                for(int i=0;i<a.size();i++){     
                if(a.find(b,i)!=4294967295){
                sum1=sum1+1;
                }
                }
                for(int i=0;i<a.size();i++){     
                if(a.find(d,i)!=4294967295){
                sum2=sum2+1;
                }
                }
                int z=sum+sum1+sum2;
                return z;
                }
int main()
    {
   string a,b,c,d;
   b="THE";c="The";d="the";
   cout<<"Enter yout sentence : ";cin>>a;
   cout<<"There are "<<CountThe(a,b,c,d)<<" words of 'the'."<<endl;
   system("pause");
   return 0;
}
