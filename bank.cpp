 #include<iostream> 
 #include MAX 30
  using namespace std; 

  class bank
  {
    private : 
             char name[MAX];
             char account[MAX];
             char upi[MAX];
             char pw[MAX];
      public:
          void registration()
          {
            cout<<"enter the account number given by bank ";
            cin>>"account";
            cout<<"enter the name";
            cin>>"name";
            cout<<"create your id \n\ create a id with standard passcode protocol\n\n involving captical letters 'A' to -'Z' and small letters 'a'to'z' and 0 to 9 ";
            for (i=0;i<MAX;i++)
            {
                if(pw[i]>'A'&&pw[i]<'Z'||pw[i]<'a'&&pw[i]>'z'||pw[i]>'0'&&pw[i]<'9')
            cin>>"pw[i]";
            break ;

          }

          void display()
          {
            cout<<name; 
            cout<<account;
            cout<<upi;
            
          }
  } 
      
int main()
{
    bank B;
    B.registration; 
    B.display;
    return 0;
}