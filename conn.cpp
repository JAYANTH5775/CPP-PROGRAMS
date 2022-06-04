#include<iostream> 
using namespace std; 


int main()
{  int choice , done=0 ;
    int num1,num2 ,i,count=0,year ;  
        while(!done)
        {
     cout<<"enter your choice\n";
     cout<<"1)To check number is number is even is odd\n 2)to check number is prime or not \n 3)to check the entered year is leap year or not\n  4)exit\n"; 
     cin>>choice;
     switch(choice)
     {
         case 1: cout<<"enter the number\n"; 
                 cin>>num1; 
                 if( num1%2 ==0)
                 cout<<"the number is even \n"; 
                 else
                 cout<<"the entered number is odd\n"; 
                 break ; 
        case 2 : cout<<"enter the number \n"; 
                  cin>>num2;
                  
                  for(i=2;i<num2;i++)
                  {
                  if(num2%i==0)
                  count++;
                  }
                  if(count>0)
                  cout<<"the entered number is not prime number\n";
                  else
                  cout<<"the nummber is prime number\n";
                  break ;
        case 3:
                cout<<"enter the year you want to check in format YYYY\n";
                cin>>year; 
                if(year%4==0)
                cout<<"The entered year is a leap year\n";
                else 
                cout<<"The year is a not a leap year";
                
                 break ;
       case 4 :cout<<"thanks for visiting , visit again :), good day\n"; 
                done=1; 
                break; 
       default:cout<<"invalid entry\n ";
                break; 
     }
        }
        return 0 ;
}