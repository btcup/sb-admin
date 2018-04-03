#include  <iostream>
using namespace std ;

string ab (string x){
     int i=x.size();
     string y="";
     
for(int i=x.size()-1;i>=0;i--)
 y=y+x[i];

return y;
}


int main()
{
    string x,y="",z;
    int i=0;
    cout<<"Enter text : ";
    getline (cin,x,'\n');
    

  for (i=0; ; ) 
    {
    if(x.find(" ")==-1)
    {y=y+ ab(x); break;}
    else {z=x.substr(i,x.find(" ")); y=y+" "+ab(z);}
    i=x.find(" ");
   
   
}
    cout<<"Encrypted text : "<<y<<endl; 
     
system ("pause");
return 0;
}
