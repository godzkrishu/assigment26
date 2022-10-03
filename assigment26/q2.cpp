
#include <iostream>

using namespace std;
class Time
{     private:
     int  h,m,s;
      public:
       void setTime(int x, int y,int z)
       {
            h=x;
            m=y;
            s=z;
       }
      
       void Normalize()
       { 
         s=s%60; /// 130%60=2 min + 10 sec
         m= m + s/60; // changin the sec into min
         h=h+ m/60;/// changing the min into hour
         m=m%60;// remaining min

       }
        void showTime()
       {
           cout<<endl<<h<<"hour "<<m<<"minute "<<s<<"second ";
       }
        Time add(Time T) // complex T is pssed as a argument in funtion  add;
        {
         Time temp; ///this is a temporary complex class object
         temp.h=h+T.h; // h is the member variabe of caller object t1 and t.h is a member variable of T in which c2 is copied
         temp.m=m+T.m; // m is the member variabe of caller object t1 and t.m is a member variable of m in which c2 is copied
         temp.s=s+T.s; // s is the member variabe of caller object t1 and t.s is a member variable of s in which c2 is copied
         return  temp; // returning a complex type data temp
        }
    
};
int main()
{ 
Time t1,t2,t3;
 t1.setTime(5,8,6);
 t2.setTime(7,6,3);
  
t3=t1.add(t2); /// t1 is calling add funtion and passing t2 as an argument and the result is stored in t3
t3.showTime();
 return 0;
}