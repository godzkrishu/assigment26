#include<iostream>
 using  namespace std;
  class Student
  {
     int  roll_no,Class;
      string name; // for input string
       public:
        Student() // we can also pass these details by parameter to initialise the object
        {
 cout<<" enter the students  roll no, class and name";
 cin>>roll_no;
 cin>>Class;
 cin>>name;
        }
         void display()
         {
       cout<<roll_no<<" "<<Class<<" "<<name;
         }
      

  };
 int main()
 { Student s1;
 s1.display();
    
 }