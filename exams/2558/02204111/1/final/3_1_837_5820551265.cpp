#include <iostream>

using namespace std;

void d1(string &m)
{
 for(int i=0;i<8;i++)
 {
           if(m[i]=='a')
           {
           m[i]=141;          
           }
           if(m[i]=='e')
           {
           m[i]=145;          
           }
           if(m[i]=='i')
           {
           m[i]=151;          
           }
           if(m[i]=='o')
           {
           m[i]=157;          
           }
           if(m[i]=='u')
           {
           m[i]=165;          
           }                
 }

     
}
int main()
{
string m;
cout<<"Please enter your message : ";
cin>>m;
d1(m);
cout<<"Your encoding message is : "<<d1<<endl;     


system("pause");
return 0;
}
