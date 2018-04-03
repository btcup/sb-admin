//5920500671 Mr.Chanatip   Sripakdee sec.712
#include<iostream>
using namespace std ;
int main()
{
    int a,b,i,j,x=5,y,o=5,m,n ;
    double q;
    cout<<"Number of student : " ;
    cin>>a;
    cout<<"Number of subject : " ;
    cin>>b;
    
    for(i=1;i<=a;i++){
       cout<<"score of Student "<<i<<": " ;
       for(j=0;j<b;j++)
       cin>>q      ;    
      } 
    
   cout<<"Select graph (1-score,2-max,3-exit) : ";
    cin>>y ;
    
   if(y==1)
   {
          for(m=1;m<=a;m++){
          cout<<"Student"<<m<<endl ;
          for(n=0;n<b;n++)
          { if(q<=10)
          cout<<"o"<<endl ;
          else if(q<=20)
          cout<<"oo"<<endl ;
           else if(q<=30)
          cout<<"ooo" <<endl;
          else if(q<=40)
          cout<<"oooo"<<endl ;
          else if(q<=50)
          cout<<"ooooo"<<endl ;
          else if(q<=60)
          cout<<"oooooo"<<endl ;   
          else if(q<=70)
          cout<<"ooooooo"<<endl ;
          else if(q<=80)
          cout<<"oooooooo"<<endl ;
          else if(q<=90)
          cout<<"ooooooooo"<<endl ;
          else if(q<=100)
          cout<<"oooooooooo"<<endl ;
          
   else if (y==2)
     for(m=1;m<=a;m++){
          cout<<"Student"<<m<<endl ;
          for(n=0;n<b;n++)
   { if(q==10)
          cout<<"o"<<endl ;}}
} cout<<endl;   
}


}
 
   
    
    
    
    
    
    system("pause");
    return 0 ;
    
}
