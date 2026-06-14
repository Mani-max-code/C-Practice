#include<iostream>
using namespace std;

void GradeCalculator();
void calculator();
void Terenaryop();
void ATM();
int main(){
 
  //  GradeCalculator();
   //   calculator();
   // Terenaryop();
   ATM();

}

void GradeCalculator()
{
    
    int marks;
    cout<<"Enter your Marks:"<<endl;
    cin>>marks;

    if(marks>=90 && marks<=100){
        cout<<"Grade : A+";
    }
    else if(marks>=80 && marks<=89){
        cout<<"Grade : A";
    }
    else if(marks>=70 && marks<=79){
         cout<<"Grade : B";
    }
    else if(marks>=60 && marks<=69){
         cout<<"Grade : c";
    }
    else{
        cout<<"Fail"<<endl;
    }

}

void calculator()
{
    int num1;
    int num2;
    char op;

    cout<<"Enter num1 :"<<endl;
    cin>>num1;
    cout<<"Enter num2 :"<<endl;
    cin>>num2;
    cout<<"Enter operator:"<<endl;
    cin>>op;
    switch(op){
        case '+':
           cout<<"Result: "<<(num1+num2)<<endl;
           break;
        case '-':
           cout<<"Result: "<<(num1-num2)<<endl;
           break;
        case '*':
           cout<<"Result: "<<(num1*num2)<<endl;
           break; 
        case '/':
           if(num2!=0){
             cout<<"Result: "<<(num1/num2)<<endl;
           }
           else{
             cout<<"Error:Divison by Zero"<<endl;
           }
           break;  
        default:
              cout<<"Error:Operator is not valid"<<endl;
    }

}

void Terenaryop()
{
    int a=10;
    int b=5;

    string EvenOddCheck= (a%2!=0)?"Odd":"Even";
    cout<< "EvenOddCheck: "<<EvenOddCheck<<endl;

    string PositiveNegativeCheck=(a>0)?"Positive":((a<0)?"Negative":"Zero");
     cout<<"PositiveNegativeCheck: "<<PositiveNegativeCheck<<endl;
    int max=(a>b)?a:b;
    cout<<"max"<<max;
}

void ATM()
{
    int pin=1234;
    int x;
    int amount;
    cout<<"Enter PIN:"<<endl;
    cin>>x;

    if(pin==x){
        cout<<"Enter amount:"<<endl;
        cin>>amount;
        cout<<"Dispensing Rs."<<amount<<endl;
    }
    else{
        cout<<"Wrong PIN!Access denied!"<<endl;
    }

}
