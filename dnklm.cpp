#include <iostream>

 #include <stdio.h> 

  int x; 
  char d;
   int z; 
   int sn; 
   int s; 
   char y; 
   using namespace std; 
   int main(){
    //system ("color f0");
     while(true){
     cout<<"bilinmeyen yerine x yaziniz"<<endl; 
     cin>>y; 
     cout<<" "; 
     cin>>d;
     cin>>z;
     cout<<" = ";
      cin>>s; 
      int a; 
      switch(y) {
       case 'x':{ 
       switch(d){ 
       case '+': {
        a= s - z ;
         cout<<"x = "<<a<<endl; 
         break;
         } 
         case '-': {
          a= s + z ; 
          cout<<"x = "<<a<<endl; 
          break;
          } 
          case '*': {
           a= s / z ; 
           cout<<"x = "<<a<<endl; 
           break;
           } 
           case '/': {
            a= s * z ; 
           

            cout<<"x = "<<a<<endl;
             break; 
             } } } }}}

