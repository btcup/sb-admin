//5920500794 Photchara khanthong
#include<iostream>
using namespace std;
void ToPassive(string s)
{       
       string b;
       s= s.substr(12,9)+" "+"is"+" "+s.substr(5,5)+"ed"+" "+s.substr(0,4)+".";
       b= s.insert(20," by");
       
        
       cout<<"passive :"<<b<<endl;
       

}       
int main()
{
    string s;
    cout<<"Please in put your sentence: ";
    getline(cin,s,'\n');
    cout<<endl;
    ToPassive(s);
    
    
    system("pause");
    return 0;
}
