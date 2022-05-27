#include<iostream>
using namespace std; 

 int main ()
 {
     float kel ,fer;
     cout<<"enter the temperature in kelvin :";
     cin>>kel;
     fer = (9/5)*(kel-273.15)+32;
     cout<<"the temperature in fahranheit is :";
     cout<<fer;
     return 0; 
 }
