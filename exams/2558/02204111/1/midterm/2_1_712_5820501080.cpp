#include<iostream>

using namespace std;
int main(){
    
    int n=0,discount=0,k;
    char t,s,w,m;
    
    cout<<"Welcome to A Cup-with-love Coffee!!"<<endl;
    do{
    cout<<"Emter your manu (E/A/L/C/M) : ";
    cin>>t;
    cout<<"Enter size (S/T/G/V) : ";
    cin>>s;
    cout<<"How many cups? : ";
    cin>>k;
    if(t=='E'||t=='e'){
                   switch(s){
                   case 's' :;
                   case 'S' : n=n+(40*k);break;
                   case 't' :;
                   case 'T' : n=n+(50*k);break;
                   case 'g' :;
                   case 'G' : n=n+(60*k);break;
                   case 'v' :;
                   case 'V' : n=n+(60*k);break; }
                   }
    else if(t=='A'||t=='a'){
                   switch(s){
                   case 's' :;
                   case 'S' : n=n+(40*k);break;
                   case 't' :;
                   case 'T' : n=n+(50*k);break;
                   case 'g' :;
                   case 'G' : n=n+(60*k);break;
                   case 'v' :;
                   case 'V' : n=n+(70*k);break; }
                   }
    else if(t=='C'||t=='c'){
                   switch(s){
                   case 's' :;
                   case 'S' : n=n+(50*k);break;
                   case 't' :;
                   case 'T' : n=n+(60*k);break;
                   case 'g' :;
                   case 'G' : n=n+(70*k);break;
                   case 'v' :;
                   case 'V' : n=n+(80*k);break; }
                   }
    else if(t=='L'||t=='l'){
                   switch(s){
                   case 's' :;
                   case 'S' : n=n+(50*k);break;
                   case 't' :;
                   case 'T' : n=n+(60*k);break;
                   case 'g' :;
                   case 'G' : n=n+(70*k);break;
                   case 'v' :;
                   case 'V' : n=n+(80*k);break; }
                   }
    else if(t=='M'||t=='m'){
                   switch(s){
                   case 's' :;
                   case 'S' : n=n+(60*k);break;
                   case 't' :;
                   case 'T' : n=n+(70*k);break;
                   case 'g' :;
                   case 'G' : n=n+(80*k);break;
                   case 'v' :;
                   case 'V' : n=n+(90*k);break; }
                   }
    cout<<"Do you want other menu? (Y/N) :";
    cin>>w;
}while(w=='y'||w=='Y');
                   cout<<"Are you a member? (Y/N) : ";
                   cin>>m;
                   if(m=='y'||m=='Y')
                   discount=n*0.1;
                   
                   cout<<"Total "<<n<<" Baht"<<endl;
                   cout<<"Discount "<<discount<<" Baht"<<endl;
                   cout<<"You pay "<<n-discount<<" Baht"<<endl;
                   cout<<"Thank you."<<endl;
    
    
    
    
    system("pause");
    return 0;
} 
