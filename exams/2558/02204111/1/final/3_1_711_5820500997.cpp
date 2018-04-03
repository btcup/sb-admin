#include<iostream>

using namespace std;
int main()
{ string name,i;
int l;
 cout<<"Please enter your message :";
 getline(cin,name,'\n');
 cout<<"Your encoding message is: ";
  for(int i=0;i<name.size();i++)
  { if(name[i]=='a')
         {cout<<"#141";
         }
  else if(name[i]=='e')
          {cout<<"#145";
         }
else if(name[i]=='i')
         {cout<<"#151";
         }       
else if(name[i]=='o')
        {cout<<"#157";
         }
else if(name[i]=='u')
        {cout<<"#165";
         }
  else 
   cout<<name[i];

}

     cout<<endl;
    
    system("pause");
    return 0;
}   
