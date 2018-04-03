//5920501421 jarukan janta
#include <iostream>
using namespace std;
void  mySearch(string a ,string b ) 
{     
      if (a.find(b,0) != string::npos )
         cout << "'" << b << "'" << " is in above text." << endl;
      else if( a.find(b,0) == string::npos )
         cout << "Incorrect keyword!" << endl;
      else if (a.find("*" , 0 ) != string::npos && a.find(b,a.find("*",0+1)))
         {
          
}
int main ()
{
    string t ,k  ;  
    cout << "Enter text : " ;
    getline(cin,t,'\n') ;
    cout << "Enter keyword : " ;
    getline(cin,k,'\n') ;
    mySearch(t,k) ; 
    system("pause"); 
    return 0 ;   
}
