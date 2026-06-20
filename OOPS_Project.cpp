#include<iostream>
using namespace std;
class InsufficientFunds :public exception{

  //string message="Need more!";
public :
  const char* what() const noexcept override{

    return "Funds are Insufficient!";
    //message.c_str();
  }
     
};
class InvalidAmount :public exception{
  //  string message="Amount should be positive number";
  public :
  
   const char* what() const  noexcept override{
     return "Amount should be positive number";
     //message.c_str();
   }
};
class Account {
    protected :
      string accountNo;
      string holderName;
      double balance;
    public :
         Account(string no,string name,double bal):accountNo(no),holderName(name),balance(bal){

         }
         virtual void deposit(double amount){
            
            if(amount<0){
                throw InvalidAmount();
            }
            else{
                balance +=amount;
            }
         }
         virtual void withdraw(double amount){
            if(amount<0){
              throw  InvalidAmount();
            }
            if(balance<amount){
                throw InsufficientFunds();
            }
            else{
                balance -= amount;
            }
         }
         virtual void display(){
        cout<<"Account Details :"<<endl;
        cout<<"Account no : "<<accountNo<<endl;
        cout<<"Account Holder : "<<holderName<<endl;
        cout<<"Balance :"<<balance<<endl;
         }
};
class SavingsAccount : public Account{
    double interestRate;

    public :
       SavingsAccount(string no,string name,double bal,double rate)
       :Account(no,name,bal),interestRate(rate){ };
       void addInterest(){
         balance +=balance*interestRate;
       }
       void display() override{
        Account :: display();
        cout<<"Rate : "<<interestRate<<endl;
         }
       
};
class CurrentAccount :public Account{
    double overdraftLimit;
    public :
     CurrentAccount(string no,string name,double bal,double limit)
     :Account(no,name,bal),overdraftLimit(limit){};
     void withdraw(double amount) override{
         if(overdraftLimit+balance <amount){
            throw InsufficientFunds();
         }
         else{
            balance -= amount;
         }
     }
     void display() override{
        Account :: display();
         }
};
int main(){

    try{
    SavingsAccount s1("SA001","Mani",50000,0.05);
    CurrentAccount c1("CA001","Naveen",6000,12000);

    s1.deposit(5000);
    s1.addInterest();
    s1.display();

    cout<<endl;
    //c1.display();
    
    cout << "Attempting to withdraw 19000 from Current Account (Max limit: 18000)..." << endl;
        c1.withdraw(19000); 
   
    }
    catch(InsufficientFunds &e){
      cout<<e.what()<<endl;
    }

}
