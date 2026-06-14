#include<iostream>
using namespace std;

int multiply(int a,int b){
    return a*b;
}
void printStars(int n){
    for(int i=1;i<=n;i++){
        cout<<"* ";
    }
}
bool isPositive(int n){
    if(n>=0){
        return true;
    }
    else{
        return false;
    }
    cout<<endl;
}
void swap_value(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swap_Ref(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void area(int side){
   cout<<"Area of Square : "<<side*side<<endl;
}
void area(int l,int b){
       cout<<"Area of Rectangle : "<<l*b<<endl;

}
void area(double r){
        cout<<"Area of circle : "<<3.14*r*r<<endl;

}

int factorial(int n){
   if(n==0||n==1)return 1;
    
     return n*factorial(n-1);
   
     
}

int sum(int n){
   if(n==1)return 1;
    
     return n+sum(n-1);
   
}

int power(int base,int exp){
    if(exp==0)
     return 1;
    return base*power(base,exp-1); 
}

void studentInfo(string name,int age,string course="B.Tech",float gpa=0.0){

    cout<<"==== Student Details ==="<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Course : "<<course<<endl;
    cout<<"GPA : "<<gpa<<endl;
}

int main()
{
    studentInfo("Mani",23);
    studentInfo("Dora",24,"CSE");
    studentInfo("Naveen",24,"CSE",8.8);
   
       


    /*

    cout<<"Power() : "<<power(5,3)<<endl;
    cout<<"Sum : "<<sum(5)<<endl;

    cout<<"Factorial : "<<factorial(5)<<endl;

    area(5);

     area(5,4);

     area(2.5);

    cout<< multiply(2,5)<<endl;

    printStars(5);
    cout<<isPositive(-4)<<endl;   

    int a=10,b=5;
    swap_value(a,b);

    cout<<"a:"<<a<<"b:"<<b<<endl;

    swap_Ref(a,b);

    cout<<"a:"<<a<<"b:"<<b<<endl; */

    

     

}