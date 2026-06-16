#include<iostream>
using namespace std;

class Complex{
   
    int img;
    int real;

    public :
      Complex(int i,int r): img(i),real(r){
     }
    Complex operator+ (Complex &c){

        return Complex(img+c.img,real+c.real);
    }
    
    Complex operator- (Complex &c){

        return Complex(img-c.img,real-c.real);
    }

    Complex operator* (Complex &c){

        return Complex((c.real*real)-(c.img*img),(real*c.img)+(img*c.real));
    }

    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};
class Student{
    int marks;
    string name;
    public :
      Student(int m,string n): marks(m),name(n){

      }
      string getName(){
         return name;
      }

      bool operator== (const Student &s) const {
        return marks==s.marks;
      }
      bool operator!= (const Student &s) const {
        return !(marks==s.marks);
      }
      bool operator> (const Student &s) const {
        return marks>s.marks;
      }

      bool operator< (const Student &s) const {
        return marks<s.marks;
      }

      friend ostream& operator<<(ostream &out, const Student &s) {
        out<<s.name<<"("<<s.marks<<")";
        return out;
      }
};

class Point{
    int x;
    int y;
    public :
     Point(int x,int y):x(x),y(y){

    }
    Point(){};

    friend ostream& operator<< (ostream &out, const Point &p){
     out<<"("<<p.x<<","<<p.y<<")";
     return out;
    }

    friend istream& operator>> (istream &in, Point &p){
      in>>p.x>>p.y;
      return in;
    }
};
class Rectangle{
private :
    int length;
    int width;

    friend void area(Rectangle &r);
    friend Rectangle compare(Rectangle &r1,Rectangle &r2);
};

void area(Rectangle &r){
    cout<<"Area : "<<r.length*r.width<<endl;
}
Rectangle compare(Rectangle &r1,Rectangle &r2){
    return r1.length*r1.width>r2.length*r2.width?r1:r2;

}
class Array{

    
    public :
      int *arr;
      Array (Array &a){
        arr=a.arr;

      }
      Array(Array &a){
        arr=new int[5];
        for(int i = 0; i < 5; i++)
        arr[i] = a.arr[i];


      }

};

int main(){
  Array a;

  Array a1=a;
  cout<<a.arr[0]<<endl;
  a1.arr[0]=10;
  cout<<a1.arr[0]<<endl;


  /*  Point p(1,3);
    cout<<p<<endl;

    Point p2;
    cin>>p2;
    cout<<p2<<endl;

    Student s1=Student(40,"Mani");
    Student s2=Student(60,"Naveen");
    Student s3=Student(80,"Dora");

    cout<<(s1==s2)<<endl;
    cout<<(s3!=s2)<<endl;
  // Student best=(s1>s2)?((s1>s3)?s1:s3):((s2>s3)?s2:s3);
  Student Topper =s1;
  if(s2>Topper)Topper=s2;
  if(s3>Topper)Topper=s3;

  cout<<Topper.getName()<<endl;
    



    Complex c1=Complex(2,3);
    Complex c2=Complex(4,5);

    Complex c3=c1+c2;
    c3.display();
    
    Complex c4=c2-c1;
    c4.display();

    Complex c5=c1*c2;
    c4.display();   */

}