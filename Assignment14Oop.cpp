#include<iostream>
using namespace std;

class BankAccount{
    private :
       long accountNo;
       string holderName;
       double balance;

    public :
       
       BankAccount(){
           accountNo=0;
           holderName="Unknown";
           balance=0.0f;       }
       void setAccountNo(long ac){
          accountNo=ac;
       } 
       void setHolderName(string name){
          holderName=name;
       } 
       void setBalance(double bal){
        balance=bal;
       } 
        
       long getAccountNo(){
         return accountNo;
       }
       string getsetHolderName(){
        return holderName;
       }
       double setBalance(){
         return balance;
       }
       void deposit(int amount){
        cout<<"Enter amount to deposit : "<<endl;
        balance += amount;
       }
       void withdraw(int amount){
         cout<<"Enter amount to deposit : "<<endl;
         if(balance >=amount){
            balance -= amount;
         }
       }
       void display(){
        cout<<"AccountNo : "<<accountNo<<endl;
        cout<<"HolderName : "<<holderName<<endl;
        cout<<"Balance : "<<balance<<endl;
       }
};

class Box{
     float length;
     float height;
     float width;

public :
    Box(){
        length=0;
        height=0;
        width=0;
     }
     Box(float l,float h,float w):length(l),height(h),width(w){

     }
     Box(const Box &b){
        length=b.length;
        height=b.height;
        width=b.width;
    }
    void volume(){
        cout<<"Volume : "<<length*height*width<<endl;
    }
    void display(){
        cout<<"length :"<<length<<endl;
        cout<<"width : "<<width<<endl;
        cout<<"height : "<<height<<endl;
    }
};
class DynamicArray{
   
    int n;
    int *arr;
    public :
      DynamicArray(int num){
       n=num;
       arr=new int[num];
      }

      ~DynamicArray(){
        delete[] arr;
        cout<<"Destructor is called"<<endl;
      }
};
class Counter{
    int count=0;

    public :
      Counter& increment(){
        count += 1;
        return *this;
      }
      Counter& decrement(){
        count -= 1;
        return *this;
      }
      Counter& reset(){
        count = 0;
        return *this;
      }
      void display(){
        cout<<"Count : "<<count<<endl;
      }

};
class Car{
   static int totalCars; // inline static int totalCars; if compiler uses c++17

    public :
       Car(){
         totalCars++;
       }
       ~Car(){
        totalCars--;
       }
  static int getTotalCars(){
    return totalCars;
  };

};
int  Car:: totalCars=0;
int main(){

  /*   Car c1;
    Car c2;
    cout<<"Count: "<<Car::getTotalCars()<<endl;
    {
    Car c3;
    cout<<"Count: "<<Car::getTotalCars()<<endl;
    }
    cout<<"Count: "<<Car::getTotalCars()<<endl;


   Counter c;
    c.increment().increment().decrement().display();
   Box b;
    Box b1=Box(5,4,3);
    Box b2(b1); // Box b2=Box(b1);
    b2.volume();
    b2.display();*/ 
}