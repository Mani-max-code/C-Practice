#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Buffer{

    int *arr;
    int size;

    public :
     Buffer(int n):size(n){
        arr=new int[size];
        
     }
     Buffer(const Buffer &b):size(b.size){
       arr=new int[size];
       for(int i=0;i<4;i++) {
        arr[i]=b.arr[i];
       }
       
       cout<<"Copying"<<endl;
     }
     Buffer(Buffer &&b):size(b.size){
        arr=b.arr;
        b.arr=nullptr;
        b.size=0;
        cout<<"Moving"<<endl;
     }

};
constexpr int factorial(int n){
    if(n==0)return 1;

    int fact=1;
    while(n>0){
        fact =fact*n;
        n--;
    } 

    return fact;

}
constexpr double area(double r){
   return 3.14*r*r;
}
void process(vector<int> v){
    int sum=0;
    for(auto x:v){
        sum += x;
    }
    cout<<sum<<endl;

}
int main(){  

    vector<int> data={1,2,3,4};
    process(data);

    process(move(data));

    for(int x:data){
        cout<<x<<" ";
    }

 /*   vector<int> v={1,2,3,4,5};

    for(auto x:v){
       x *=2;
    }
    for(auto x:v){
       cout<<x<<" "; 
    }
     cout<<endl;
    for(auto &x:v){
       x *=2;
    }
    for(auto x:v){
       cout<<x<<" "; 
    }
     cout<<endl;
    for(const auto &x:v){
       cout<<x<<" "; 
    }


   map<string,vector<int>> students;
    students["Mani"].push_back(84);
    students["Dora"].push_back(90);
    students["Naveen"].push_back(85);

    for(auto x:students){
        cout<<x.first<<":"<<*x.second.begin()<<endl;
    }


  
    constexpr int fact=factorial(2);
    constexpr int  ar=area(2);

    int arr[fact];
    int arr1[ar];


     string s1="Hello World";
    string s2=s1;
    cout<<s1<<endl;
    cout<<s2<<endl;
    string s3=move(s1);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;

   Buffer b1(5);
    Buffer b2=b1;
    Buffer b3=move(b1); */
}