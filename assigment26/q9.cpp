#include<iostream>
 using namespace std;
  class Bill
  {  int id;
    float bill,unit;
   string name;
    static float rate1, rate2, rate3; // static becouse it is common for all the 
   public:
   
    static void billrate()
    {
        cout<<endl<<" Bill rate upto 100unit is "<<rate1<<"per unit";
        cout<<endl<<" Bill rate upto 200 unit is "<<rate2<<"per unit";
        cout<<endl<<" Bill rate above 200 unit is "<<rate3<<"per unit";
    }

    void getData()
    {
        cout<<endl<<"Enter the customer details"<<endl;
        cout<<" Id ";
        cin>>id;
        cout<<endl<<"Name ";
        cin>>name;
        cout<<endl<<" Enter unit ";
        cin>>unit;
    }
    void calculateBill()
    { 
        if(unit<=100)
         bill=unit*rate1;
         else if( unit>100&&unit<=200)
        bill=100*rate1+(unit-100)*rate2;
          else if( unit>200)
        bill=100*rate1+ 100*rate2+(unit-200)*rate3;
    }
     void displayDetails()
     { cout<<endl<<id<<" "<<name<<" "<<unit<<"unit "<<" Bill="<<bill;

     }

  };
  // initialising the static class value
 float Bill::rate1=1.2;
 float Bill::rate2=2;
 float Bill::rate3=3;
  int main()
  {   Bill b1, b2; 
  Bill::billrate();// accessing class without object just by static funtion
  b1.getData();
  b1.calculateBill();
  b1.displayDetails();
  b2.getData();
  b2.calculateBill();
  b2.displayDetails();
  
  
     return 0;
  }