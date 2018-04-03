//5920501626 Ponpimon Nopparatnitiphong
#include<iostream>
using namespace std;

int main()
{
    double a,b,c,max;
    
    do{
          cout<<"Number of subject : ";
          cin>>a;
          cout<<"Number of student : ";
          cin>>b;
          double x[a][b];
          for(int i=0;i<a;i++)
          {    cout<<"score of Subject "<<i+1<<": ";
               for(int j=0;j<b;j++)
               {    cin>>x[i][j];}
          }
          cout<<"Select graph (1-score,2-max):";
          cin>>c;
          cout<<endl;
          for(int i=0;i<a;i++)
          {    
               for(int j=0;j<b;j++)
               {    cout<<"Subj"<<i+1<<endl;
                    max=x[i][j];
                    
               }
          }
          
    }while(1);
    system("pause");
    return 0;
}
