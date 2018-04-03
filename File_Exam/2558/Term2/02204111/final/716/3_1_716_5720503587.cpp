#include<iostrem>
#include<string>
using namespace std;
int Count()
{
    string str1,str2,str3;
    int N;
    cout<<"What text : ";
    cin>>str1;
    cout<<"What word : ";
    cin>>str2;
    str3= str1.find(str2,0);
     N =str3.size();
    return N;
}
int Remove()
{
    string n,str2,str3;
    cout<<"What text : ";
    cin>>n;
    cout<<endl;
    cout<<"What word : ";
    cin>>str2;
    str3= n.erase(str2,0);
    return str3;
}
int main()
{
    string text;
    do
    {
     cout<<"Can I help you ? : ";
     cin>>text;
     if(text.find("count".0)!=0)
     {
      if(text.find("delet".0)=0)
      Count();
     }
     else if(text.find("delete".0)!=0)
         {
           if(text.find("count".0)!=0)
           Remove();
         }
     while();
     system("pause");
     return 0;
}
    
    
    
