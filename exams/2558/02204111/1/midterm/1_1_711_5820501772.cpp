#include <iostream>
using namespace std ;

int main (){
    float a,b,c,d,e,f,g,h,vat ;
    int total ;
    cout<<"Please input usage : " ;
    cin>>a; 
    if (a<0) cout<<"Invalid  Input!!!! "<<endl;
    cout<<"Please input voltage  : ";
    cin>>b; 
    if(b>=22 && b<=33)
             {
                      c = a*2.4649 ;
                      d = 228.17 ;
                      e = a*(46.38/100) ;
                      vat = ((c+d+e)*7)/100 ;
                      total = c+e+d+vat ;
                      cout<<"Electricity Cost : " <<c<<endl;
                      cout<<"Service : " <<d<<endl ;
                      cout<<"Ft : "<<e<<endl;
                      cout<<"Vat 7 % : "<<vat<<endl ;
                      cout<<"Total cost : "<<total<<endl;
             }
    else     
             {
              if (a>0 && a<=150)
                   {
                      c = a*1.8047 ;
                      d = 40.90 ;
                      e = a*(46.38/100) ;
                      vat = ((c+d+e)*7)/100 ;
                      total = c+e+d+vat ;
                      cout<<"Electricity Cost 0-150 : " <<c<<endl;
                      cout<<"Service : " <<d<<endl ;
                      cout<<"Ft : "<<e<<endl;
                      cout<<"Vat 7 % : "<<vat<<endl ;
                      cout<<"Total cost : "<<total<<endl;
                   }
              else if(a>150 && a<=400)
                   {
                      c = 1.8047*150 ;
                      f = (a-150)*2.7781 ;
                      d = 40.90 ;
                      e = a*(46.38/100) ;
                      vat = ((c+d+e+f)*7)/100 ;
                      total = c+e+d+f+vat ;
                      cout<<"Electricity Cost 0-150 : " <<c<<endl;
                      cout<<"Electricity Cost 150-400 : " <<f<<endl;
                      cout<<"Service : " <<d<<endl ;
                      cout<<"Ft : "<<e<<endl;
                      cout<<"Vat 7 % : "<<vat<<endl ;
                      cout<<"Total cost : "<<total<<endl;
                   }
              else if (a>400)
                   {
                      c = 150*1.8047 ;
                      h = a-150 ;
                      f = h*2.7781 ;
                      g = (a-h-150)*2.9780 ;
                      d = 40.90 ;
                      e = a*(46.38/100) ;
                      vat = ((c+d+e+f+g)*7)/100 ;
                      total = c+e+d+f+g+vat ;
                      cout<<"Electricity Cost 0-150 : " <<c<<endl;
                      cout<<"Electricity Cost 150-400 : " <<f<<endl;
                      cout<<"Electricity Cost 401 -> : " <<g<<endl;
                      cout<<"Service : " <<d<<endl ;
                      cout<<"Ft : "<<e<<endl;
                      cout<<"Vat 7 % : "<<vat<<endl ;
                      cout<<"Total cost : "<<total<<endl;
                   }
            }
                           
    
             system("pause");
             return 0 ;
}
