#include<iostream>
using namespace std;

void changeSentences(string fstSentence)
{
     int i , k;
     k = fstSentence[0];
     if(k > 90)
     {
     k = fstSentence[0]-32;
     fstSentence[0] = k;
     }
     for(i = 1 ; i <= fstSentence.size() ; i++)
     if(fstSentence[i] == '.' || fstSentence[i] == '?')
     {
                       if(fstSentence[i+1] == ' ' ) continue;
                       else 
                       {      
                       k = fstSentence[i+1]-32;
                       fstSentence[i+1] = k;
                       }
     }
     else if(fstSentence[i] == ' ' )
     {
          if((fstSentence[i-1] == '.' || fstSentence[i-1] == '?' )&&fstSentence[i+1] != ' ' )
          {      
                               k = fstSentence[i+1];
                           if(k > 90)
                                {
                                k = fstSentence[i+1]-32;
                                fstSentence[i+1] = k;
                                }
          }
     }
     cout << endl << endl << endl ;
     cout << "Output sentences :" << endl << endl;
     cout << fstSentence << endl;
}
                       
                       
                       
int main()
{
    string input;
    cout << "Input sentences : ";
    getline(cin , input);
    changeSentences(input);
    system("pause");
    return 0;
}
