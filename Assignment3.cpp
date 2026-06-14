#include<iostream>
using namespace std;

void swapnum();
void Increment();
void BitWise();
void percentage();
void Arthimetic();
void Literals();
int main(){

   // swapnum();
   // Increment();
   // BitWise();
   // percentage();
   // Arthimetic();
   Literals();

}

void swapnum(){
    int a=10;
    int b=5;

    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"a :"<<a<<"|"<<"b :"<<b<<endl;
}

void Increment()
{
    int a=5;
    cout<<a++<<endl;
    cout<<++a<<endl;
     cout<<a--<<endl;
    cout<<--a<<endl;
}

void BitWise()
{
    int x=6;
    int y=4;

    cout<<"& :"<< (x&y) <<endl;
    cout<<" | :"<<( x|y) <<endl;
    cout<<" ^ :"<<(x^y)<<endl;


}

void percentage()
{
    int ActualTotal=100;
    int english=16;
    int maths=19;
    int science=20;
    int hindhi=15;
    int telugu=19;

    int total=english+maths+science+hindhi+telugu;

    float percentage=((float)total/ActualTotal)*100;

    cout<<"Total: "<<total <<endl;
    cout<<"Percentage: "<<percentage<<endl;
}

void Arthimetic()
{
    int c=10;
    int d=5;

    cout<<"sum: "<<(c+d)<<endl;
    cout<<"Difference: "<<(c-d)<<endl;
    cout<<"Product: "<<(c*d)<<endl;
    cout<<"Quotient: "<<(c/d)<<endl;
    cout<<"Remainder: "<<(c%d)<<endl;
}

void Literals()
{
   int decimalLiteral = 42;        // Decimal base
    int octalLiteral = 052;         // Octal base (starts with 0)
    int hexLiteral = 0x2A;          // Hexadecimal base (starts with 0x)
    int binaryLiteral = 0b101010;   // Binary base (starts with 0b)
   
    cout<<"DecimalLiteral :"<<decimalLiteral<<endl;
    cout<<"octalLiteral"<<octalLiteral<<endl;
    cout<<"hexLiteral"<<hexLiteral<<endl;
    cout<<"binaryLiteral"<<binaryLiteral<<endl;

    
   

}
