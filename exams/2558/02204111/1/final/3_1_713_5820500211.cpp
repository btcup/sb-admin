#include <iostream>
#include <string>



     
  
using namespace std;
int main()
{

    string s;
    
    cout<<"Please enter your message : ";
    cin>>s;
    
    if (s.find('a',0))
     { s=s.replace(s.find('a',0),1,"#141"); }
     
     if (s.find('e',0))
     { s=s.replace(s.find('e',0),1,"#145"); }
     
     if (s.find('i',0))
     { s=s.replace(s.find('i',0),1,"#151"); }
      
     if (s.find('o',0))
     { s=s.replace(s.find('o',0),1,"#157"); }
      
     if (s.find('u',0))
     { s=s.replace(s.find('u',0),1,"#165"); }

      
      cout<<"Your encoding message is : " << s <<endl;
    
    
system ("pause");
return 0;

}
