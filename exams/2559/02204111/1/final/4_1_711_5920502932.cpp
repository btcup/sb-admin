//5920502932 Sithichok Sudsan
#include<iostream>
using namespace std;
string a;
string encryption(string &a)
{
    
    int i,h;   
    h=a.size(); 
    for(i=h;i>=0;i--)
    {
      cout<<a[i];                
    }
    return a;             
}


main()
{
     string x;
     cout<<"Enter text: ";
     getline(cin,x,'\n');  
     cout<<" Encrypted text: "<<encryption(x)<<endl;      
      
      
      
system("pause");      
return 0;      
}
