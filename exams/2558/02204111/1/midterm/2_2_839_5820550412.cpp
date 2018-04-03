#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int size1,size2,prif,priw;
    float H,W,D,numf,numw;
    char f,w;
    cout<<"Welcome to The Fantastic Titles!!"<<endl;
    cout<<"Please enter room size in meter (H x W x D) : ";
    cin>>H>>W>>D;
    size1 = (2*(H*D)*100*100)+(2*(H*W)*100*100);
    size2 = ((W*D)*100*100);
    cout<<"Please select floor title... (A/B/C) : ";
    cin>>f;
    if( f== 'A' || f == 'a')
    {
              numf = (30*30);
              prif = 55;
    }
    else if(f=='B' || f=='b')
    {
              numf = (45*45);
              prif = 80;
    }
    else
    {
              numf = (60*60);
              prif = 90;
    }
    cout<<"Please select wall title... (A/B/C) : ";
    cin>>w;
    if(w=='A' || w=='a')
    {
              numw = (20*20);
              priw = 17;
    }
    else if(w=='B' || w=='b')
    {
              numw = (20*30);
              priw = 32;
    }
    else
    {
              numw = 30*30;
              priw = 50;
    }
    cout<<"--------------------------------------"<<endl;
    cout<<"Number of floor title: "<<floor(size1/f)<<"-->Price = "<<floor((size1/f)*prif)<<" Baht"<<endl;
    cout<<"Number of wall title: "<<floor(size2/w)<<"-->Price = "<<floor((size2/w)*priw)<<" Baht"<<endl;
    cout<<"Total price : "<<floor((size2/w)*priw) <<" + "<< floor((size1/f)*prif) <<" = "<<floor(((size2/w)*priw)+((size1/f)*prif))<<" Baht"<<endl;
    system("pause");
    return 0;
}
    
         
              
    
