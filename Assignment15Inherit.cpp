#include<iostream>
using namespace std;
class Vehicle{

    string brand;
    int speed;
    public :
      void start(){
          cout<<"Vehicle started"<<endl;
      }
      void stop(){
        cout<<"Vehicle stopeed"<<endl;
      }
      void display(){
        cout<<"Brand :"<<brand<<"Speed : "<<speed<<endl;
      }

};
class Car : public Vehicle{
    string doors;
    public :
      void honk(){
        cout<<" Car honk"<<endl;
      }
      void display(){
        cout<<"Doors :"<<doors<<endl;
      }

};
class Bike : public Vehicle{
    string type;
    public :
      void wheelie(){
        cout<<"bike wheelie"<<endl;
      }
      void display(){
        cout<<"Type :"<<type<<endl;
      }

};
class Person{
    string name;
    int age;
    public :
       Person(){
        cout<<"Person created"<<endl;
       }
       ~ Person(){
        cout<<"Person destroyed"<<endl;
       }
};
class Student :public Person{
    int rollNo;
    float gpa;
    public :
       Student(){
        cout<<"Student created"<<endl;
       }
       ~ Student(){
        cout<<"Student destroyed"<<endl;
       }
};
class CollegeStudent : public Student{
    string college;
    public :
        CollegeStudent(){
            cout<<"CollegeStudent created"<<endl;
        }
        ~ CollegeStudent(){
            cout<<"CollegeStudent destroyed"<<endl;
        }
};
class Shape{
  public :  
     virtual void area(){
        cout<<"Area of shape"<<endl;
     }
     virtual void display(){
         cout<<"Area Displaying"<<endl;
     }

};
class Circle : public Shape{
    void area() override{
       cout<<" Area of Circle is 3.14*r*r"<<endl;
    }
};
class Rectangle : public Shape{
    void area() override{
       cout<<" Area of Rectangle is length*width"<<endl;
    }
};
class Triangle : public Shape{
    void area() override{
       cout<<" Area of Triangle is (1/2)*breadth*height"<<endl;
    }
};
class Animal{
   public : 
    virtual void sound()=0;
    virtual void move()=0;

    void breathe(){
        cout<<"Breathing"<<endl;
    }

};
class Dog : public Animal{
    void sound() override{
       cout<<"Woof"<<endl;
    }
    void move() override{
       cout<<"Run"<<endl;
    }
};
class Bird : public Animal{
    void sound() override{
       cout<<"Tweet"<<endl;
    }
    void move() override{
       cout<<"Fly"<<endl;
    }
};
class Fish : public Animal{
    void sound() override{
       cout<<"Blub"<<endl;
    }
    void move() override{
       cout<<"Swim"<<endl;
    }
};
class Flyable{
    public :
        void fly(){
            cout<<"Duck Flying"<<endl;
        }
      
};
class Swimmable{
    public :
       void swim(){
         cout<<"Duck Swimming"<<endl;
       }
};

class Duck : public Flyable,public Swimmable{
  public :  
    void Quack(){
        cout<<"Duck Quacking"<<endl;
    }  
};

int main(){
   
    Duck d;
    d.fly();
    d.swim();
    d.Quack();


    


 /* Shape *ptr;
    
    Circle c;
    ptr=&c;
    ptr->area();

    Rectangle r;
    ptr=&r;
    ptr->area();

    Triangle t;
    ptr=&t;
    ptr->area();
 
    CollegeStudent c;
    Vehicle v;
    Car c;
    Bike b;
    v.display();
    c.display();
    b.display();
    c.honk();
    b.wheelie();
    b.start();
    c.stop(); */


}