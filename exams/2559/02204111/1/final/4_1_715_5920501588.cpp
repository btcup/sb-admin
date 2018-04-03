//5920501588 Phanutchaporn Ong-ard
#include<iostream>
#include<string>
using namespace std;

string encryption(string str)
{
       int i;
       string A[str.length()],sum;
       for(i=0;i<str.length();i++)
       {A[i]=str.substr(str.length()-i,i+1);}
       for(i=str.length();i>=0;i--)
       {sum = sum+A[i];
       cout<<str;}
       return sum;
       
}

int main()
{
   string str;
   cout<<"Enter text: ";
   getline(cin,str,' ');
   cout<<"Encrypted: "<<encryption(str)<<endl;
   system("pause");
   return 0;
    
}
