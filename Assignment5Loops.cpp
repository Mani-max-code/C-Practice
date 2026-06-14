#include <iostream>
using namespace std;

void forloop();
void whileloop();
void dowhileloop();
void SquarePattern();
void TrianglePattern();
void InvertedTriangle();
void NumberPattern();
void Factorial();
void Fibanocci();
void checkPrime();
void Multiplication();
void Pyramid();
void ATM();

int main()
{

    // forloop();
    // whileloop();
    // dowhileloop();
    // SquarePattern();
    // TrianglePattern();
    // InvertedTriangle();
    // NumberPattern();
    // Factorial();
   // Pyramid();
    //ATM();
    Fibanocci();
}

void forloop()
{
    for (int i = 0; i <= 10; i++)
    {

        cout << i << endl;
    }
    cout << endl;
}

void whileloop()
{
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }
}

void dowhileloop()
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
}

void SquarePattern()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void TrianglePattern()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void InvertedTriangle()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void NumberPattern()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void Factorial()
{
    int num;
    cout << "Enter a Number:" << endl;
    cin >> num;
    int Factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        Factorial *= i;
    }
    cout << "Factorial: " << Factorial << endl;
}

void Fibanocci()
{
    int n;
    int a = 0, b = 1;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

void checkPrime()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    bool isprime=true;
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            
            isprime=false;
            break;
        }
        
    }
}

void Multiplication()
{
 int num;

    
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    cout << "\n--- Multiplication Table of " << num << " ---" << endl;

    // 2. Loop from 1 to 10 to calculate and print each line
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

void Pyramid()
{
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        
    }

}
void ATM()
{
    int pin=1234;
    int x;
    int amount;
    
    int attempt=0;
    int max_Attempts=3;

    while(attempt<max_Attempts)
    {
        cout<<"Enter PIN:"<<endl;
        cin>>x;
    if(pin==x){
        
        cout<<"Dispensing amount"<<endl;
        break;
    }
    else{
        attempt++;
        if(attempt==max_Attempts){
            cout<<"Card Blocked"<<endl;
        }
    }
   }
}
