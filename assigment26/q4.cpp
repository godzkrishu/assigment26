#include<iostream>
 using namespace std;
   class Counter
   { public:
       Counter() // this is constuctor
       {
         cout<<" counter";
       }

   };
    int main()
    {  
        Counter c1,c2; /// when any object created the there is difinatly constructor also created and run
       // there is 2 object therefore  contructor run 2 times
        return 0;
    }