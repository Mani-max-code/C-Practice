#include<iostream>
#include<vector>
using namespace std;

void square(int a){
    a *=a;

}
void squareRef(int &a){
    a *=a;
}
void squareConst(const int a){
    cout<<a<<endl;
}
void swap(int &a, int &b){
    int temp=a;
     a=b;
     b=temp;
}
void printDetails(const string &name,const int &age){ //Only for reading 

  //  name="sagar";
   // age=26;

    cout<<"Name: "<<name<<" Age : "<<age<<endl;
}
int main(){
    string s="Mani";
    int age=24;
    printDetails(s,age);
    /*
     int a=10;
     int b=20;
     swap(a,b);
     cout<<"a :"<<a<<endl;
     cout<<"b :"<<b<<endl;
    
    vector<int> v={1,2,3,4};

    for(int x :v)
    {
      x +=x;
    }
    cout<<"Before using Reference:";
    for(int x :v)
    {
        cout<<x<<endl;
    }
    for(int &x :v)
    {
      x +=x;
    }
    cout<<"After using Reference:";
    for(int x :v)
    {
        cout<<x<<endl;
    }

    int a=10;
    square(a);
    cout<<a<<endl;
    squareRef(a);
    cout<<a<<endl;
    squareConst(a);

    int x=50;
    int &ref=x;
    cout<<x<<endl;
    cout<<ref<<endl;

    ref=20;

     cout<<x<<endl;

    cout<<&x<<endl;
    cout<<&ref<<endl;*/


}