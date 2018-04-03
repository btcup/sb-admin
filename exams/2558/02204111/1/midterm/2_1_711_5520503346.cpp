#include<isotream>
#include<cmath>
using namespace std;
int main()
{
    char m,s,member,members;
    float Discount,pay;
    int cups;
    {
    cout<<"Welcome to A Cup-with-love Coffee!!";
    cout<<endl;
     if(m=='e'&&'E'||m=='a'&&'A'||m=='l'&&'L'||m=='c'&&'C'||m=='m'&&'M')
    {
          cout << "Enter your menu (E/A/L/C/M) :";
          cin >> m;
    }
    else if(s=='s'&&'S'||s=='t'&&'T'||s=='g'&&'G'||s=='v'&&'V')
    {
        cout<<"Enter size (S/T/G/V) :";
        cin>>s;
        }
    else if(cups>=0)
    {
               cout<<"how many cups? :";
               cin>>cups;
    }
    else if(member=='Y'&&'y'||member=='N'&&'n')
    {
         cout<<"Doyou want other menu? (Y/N) :";
         cin>>member;
    }
    else if(members=='Y'&&'y'||members=='N'&&'n')
   {
         cout<<"Are you a member? (Y/N) :";
         cin>>members;
   }
    if('e'&&'s'||'E'&&'S'||'a'&&'s'||'A'&&'S'==40)
    
    
    system("pause");
    return 0;
}
}
