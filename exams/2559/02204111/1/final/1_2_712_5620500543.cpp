//5620500543 napatdanai rathapaknithichot
#include<iostream>
#include<cmath>
using namespace std;             
int main()
{
    string sentence;
    int i,length;
    cout << "Please input your sentence: ";
    getline(cin,sentence,'\n');
    length = sentence.length();
    for(i=0; i<=length; i++)
    {
             if(sentence[i] == 'b' )
             {
                  i++;
                  if(sentence[i] == 'y')
                  {
                       i++;   
                       if(sentence[i] == ' ')
                       {
                             i++;         
                             for(i=i; i<length-1; i++)
                             {
                                      cout << sentence[i];
                             }         
                       }       
                  }     
             }
             else
             {
                 continue;
             }
    }
    cout << " ";
    for(i=0; i<=length; i++)
    {
             if(sentence[i] == 'i' )
             {
                  i++;
                  if(sentence[i] == 's')
                  {
                        if(sentence[i] == ' ')
                        {
                            i++;
                            for(i=i; i<=length; i++)
                             {
                                  if(sentence[i] == 'e')
                                  {
                                      break;
                                  }
                                  else
                                  {
                                      cout << sentence[i];
                                  }
                             }     
                        }
                        else
                        {
                            
                        }              
                  }     
             }
             else
             {
                 cout << sentence[i];
             }
    }
    for(i=0; i<=length; i++)
    {
             if(sentence[i] == 'i' )
             {
                  i++;
                  if(sentence[i] == 's')
                  {
                       break;          
                  }     
             }
             else
             {
                 cout << sentence[i];
             }
    }
    cout << ".";
    
  system("pause"); 
  return 0;  
}
