#include <iostream>
using namespace std;

string changeSentences (string& a)
{
     int i,j,k;
       if (a[0]<65||a[0]>90)
       {
                      k=a[0] ;     
                      k=k-32;
                      a[0]=k;
       }
       for(i=1;i<9999;i++)
       {
              j=a.find('.',i);             
              if(j>=0&&j<=9999)
                {
                      k=a[j+2] ;     
                      k=k-32;
                      a[j+2]=k;
                break;
                }       
       }
       for(i=1;i<9999;i++)
       {
              j=a.find('?',i);         
              if(j>=0&&j<=9999)
                {
                      k=a[j+1] ;     
                      k=k-32;
                      a[j+1]=k;
                break;
                }       
       } 
       return a ;
}

int main()
{
    string b;
    cout<<"Input sentences: ";
    getline (cin,b,'\n');
    changeSentences(b);
    cout<<"Output sentences: \n"<<b<<endl;
    system ("pause");
    return 0;
}
