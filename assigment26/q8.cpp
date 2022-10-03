#include<iostream>
 using namespace std;
  class Bank
  {
     int year, principal_aomount;
       float simple_intrest; // declaring  the static member  variable
      static float rate_of_intrest;
       public:
        Bank( int y,int amount)
        { 
             year=y;
             principal_aomount=amount;
        }
        Bank( )
        { 
             year=0;
             principal_aomount=0;
        }
        static float Rate()
       {
        return rate_of_intrest;
       } // declaring  the static member funtion
       void SetData()
       {
        cout<<"Enter the amount and time";
        cin>>principal_aomount>>year;
       }
        void Calculate()
        {
            simple_intrest=year*principal_aomount*Rate();
        }
         void display()
         {
             cout<<endl<<" The simple intrest is the "<<simple_intrest;
         }
      
  };
    float  Bank::rate_of_intrest=8.9; // initialising the static meber variable;
  
  int main()
  {  cout<<" rate of the intrest is "<<Bank::Rate()<<endl; /// ***we can acess the  class without object with the help of static member of that class
     Bank b1(5,6), b2; // creating object
    b2.SetData();
    b1.Calculate();
    b2.Calculate();
    b1.display();
    b2.display();
     return 0;
  }