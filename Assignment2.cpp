#include<iostream>
using namespace std;

int main(){

    int Age=20;
    //double GPA=9.8;
    float price = 8.45;
    char Grade='A';
    bool isStudent=true;
    string Name="Mani Shankar";

    cout<<"Age:"<<Age<<endl;
   // cout<<"GPA:"<<GPA<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"Grade:"<<Grade<<endl;
    cout<<"isStudent:"<<isStudent<<endl;
    cout<<"Name:"<<Name<<endl;


    cout<<"int size:"<<sizeof(int)<<"bytes\n";
        
    cout<<"float size:"<<sizeof(float)<<"bytes\n";
    cout<<"double size:"<<sizeof(double)<<"bytes\n";
    cout<<"char size:"<<sizeof(char)<<"bytes\n";
    cout<<"bool size:"<<sizeof(bool)<<"bytes\n";
    cout<<"long size:"<<sizeof(long)<<"bytes\n";
    cout<<"long long size:"<<sizeof(long long)<<"bytes\n\n\n";

    int age;
    string name;
    double GPA;

    cout<<"Enter your name : \n";
    cin >> name;

    cout<<"Enter your Age : \n";
    cin>>age;

    cout<<"Enter your GPA : \n";
    cin>>GPA;

    cout<<"Student: "<<name<<"|"<<"Age: "<<age<<"|"<<"GPA: "<<GPA<<"\n\n\n";

    double marks=87.65;

    int mark=(int)marks;

    int maarks=static_cast<int>(marks);
  
    cout<<"cMarks:"<<mark<<"\n";
    cout<<"c++Marks:"<<maarks<<"\n";

}