#include<iostream>
  using namespace std;
  class student
  {
   public:
   int roll;
   string name;
   string clas;
   string blood;
   string div;
   public:
    
   static int stud;
   static int count()
   {
   cout<<"no.of object:"<<stud<<endl;
   }
   student()
   {
     cout<<"**STUDENT INFORMATION**"<<endl;
     }
     student(int roll,string name, string clas,string blood,string div)
     {
      this->roll=roll;
      this->name=name;
      this->clas=clas;
      this->blood=blood;
      this->div=div;
      ++stud;
      }
      
      ~student()
      { cout<<"distructor released"<<endl;
      }
      friend void show(student s);
      };
      void show(student s)
      {
      cout<<"enter the roll number:"<<s.roll<<endl;
      cout<<"enter the name:"<<s.name<<endl;
      cout<<"enter the class:"<<s.clas<<endl;
      cout<<"enter the blood group:"<<s.blood<<endl;
       cout<<"enter the division:"<<s.div<<endl;
      
      }
      int student::stud=1;
      

   int main()
   { 
     
   student x;
   student y(138,"Snehal","SE","A", "O");
   show(y);
   cout<<endl;
   student *p=new student(138,"Snehal","SE","A", "O");
   show(*p);
   
   delete p;
   cout<<"object is deleted:"<<endl;
   student::count();
   return 0;
   } 
