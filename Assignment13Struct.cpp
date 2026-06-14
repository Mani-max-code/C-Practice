#include<iostream>
#include<math.h>
using namespace std;

struct Student{
   string name;
   int rollNo;
   int age;
   float gpa;
};

Student createStudent(string name,int rollNo,int age,float gpa )
{
 Student s;
 s.name=name;
 s.rollNo=rollNo;
 s.age=age;
 s.gpa=gpa;
 return s;
}

struct Rectangle{
   float length;
   float width;
  int  area(){
   return length*width;
 }
 int perimeter(){
   return 2*(length+width);
 }
 bool isSquare(){
   if(length!=width) {
      return false;
   }
   return true;
 }
 void display(){
   cout<<"Length : "<<length<<" Width : "<<width<<endl;
   cout<<"Area : "<<area()<<endl;
   cout<<"Perimeter : "<<perimeter()<<endl;
   cout<<"isSquare : "<<isSquare()<<endl;
 }
};
struct Student1{
   string name;
   int marks;
};
struct Point{
  int x;
  int y;

  void distance(){
    cout<<"Distance from Origin : "<<sqrt(x^2+y^2)<<endl;
  }
};
struct Address{
  string city;
  string state;long pincode;
};
struct Employee{
   string name;int age;
   int salary; Address address;
};
union Data{
   int a;
   float b;
   char c;
};
struct A { char c; int i; char c2; };
struct B { int i; char c; char c2; };
int main(){

   A a;
   B b;
   cout<<sizeof(a)<<endl;
   cout<<sizeof(b)<<endl;   //size differs due to padding

/*    Data d;
   d.a=5;
   cout<<d.a<<endl;
   cout << (sizeof(d) == sizeof(d.a)) << endl;
   d.b=5.4;
   cout<<d.a<<endl;  //garbage value
   
  Employee e1;
   e1.address.city="Hyd";
   e1.address.pincode=500018;
   e1.address.state="TG";
   e1.age=24;
   e1.name="Mani";
   e1.salary=70000;

   Employee e2;
   e2.address.city="Amvt";
   e2.address.pincode=533291;
   e2.address.state="AP";
   e2.age=24;
   e2.name="Dora";
   e2.salary=80000;

   cout<<"Employee 1:"<<"Name: "<<e1.name<<"Age : "<<e1.age<<"Salary : "<<e1.salary
   <<"Address : "<<e1.address.city<<","<<e1.address.state<<","<<e1.address.pincode<<endl;
   cout<<"Employee 2:"<<"Name: "<<e2.name<<"Age : "<<e2.age<<"Salary : "<<e2.salary
   <<"Address : "<<e2.address.city<<","<<e2.address.state<<","<<e2.address.pincode<<endl;

  Point p={4,5};
   Point *ptr=&p;

   cout<<"Coordinates :"<<ptr->x<<","<<ptr->y<<endl;

   ptr->x=6;
   ptr->y=7;

   ptr->distance();

  Student1 s1={"Mani",86};Student1 s2={"Naveen",97};Student1 s3={"Dora",95};Student1 s4={"Balu",87};Student1 s5={"Ravi",86};
   Student1 arr[]={s1,s2,s3,s4,s5};
   string Topper="";
   int sum=0;
   int count=0;
   int highscore=0;
   for(Student1 s:arr){
    cout<<"Name : "<<s.name<<" Marks : "<<s.marks<<endl;
    if(highscore<s.marks){
      highscore=s.marks;
    }
    sum+=s.marks;
    if(s.marks>=50){
      count++;
    }
   }
   for(Student1 s1:arr){
      if(s1.marks==highscore) {Topper=s1.name;}
   }
   cout<<"Topper : "<<Topper<<endl;cout<<"Average Marks : "<<(float)sum/5<<endl;
   cout<<"No of Students Passed : "<<count<<endl;
   
    Rectangle r;
   r.length=5.4;
   r.width=5.4;
   r.display();
  
   Student s1=createStudent("Maniss",1,24,9.4);
    Student s2=createStudent("Manish",2,25,9.8);
    Student s3=createStudent("Naveen",3,26,9.7);

    cout<<"Name   "<<"RollNo  "<<"Age  "<<"GPA  "<<endl;
   Student arr[]={s1,s2,s3};

   for(Student s:arr){
    cout<<s.name<<"  "<<s.rollNo<<"    "<<s.age<<"    "<<s.gpa<<endl;
   }

    */
}