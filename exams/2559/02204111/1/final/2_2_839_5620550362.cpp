//5620550362Khorakot Saiyanart
#include <iostream>
using namespace std;



string ToPassive(string a)
{
       int i;
       string a,b,c,d;
       for(i=0;i<a.length();i++)
       {
            if(a[i]=="the")
            {                    
                b=a.substr(find("the",0),20);
                c=a.find(" ",0)a.substr(0,6);
                d="passive : "+b+"is"+c+"by"+a.erase(a.find(" ",0),100);
                
            else
            {
                d="Error: Not present simple tense.";
                
            } 
       }
       return d;      
}     



int main()
{
    string a,b,c;
    cout<<"Please input your sentence: ";
    getline(cin,a,'\n');
    b=ToPassive(a);
    cout<<endl;
    cout<<b<<endl;
    system("pause");
    return 0;
}
