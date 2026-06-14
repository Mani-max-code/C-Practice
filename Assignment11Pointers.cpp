#include<iostream>
#include <array>
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=5;
    int b=10;
    cout<<"Before : "<<"a="<<a<<" b="<<b<<endl;
    swap(&a,&b);
    cout<<"Before : "<<"a="<<a<<" b="<<b<<endl;
   /*  int *ptr=&a;
     int **pptr=&ptr;

     cout<<a<<endl;
     cout<<*ptr<<endl;
     cout<<**pptr<<endl;

     **pptr=10;

     cout<<a<<endl;
     cout<<*ptr<<endl;
     cout<<**pptr<<endl;

     if(ptr != nullptr){
       cout<<*ptr<<endl;
     }
     else{
        cout<<"poniter is null"<<endl;
     }
     ptr=&a;
     cout<<*ptr<<endl;


   int arr[]={5,10,15,20,25};
    int *ptr=arr;
 
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;

    cout<<&arr<<endl;
   

    for(int i=0;i<4; i++){
     
      
      cout<<(ptr+i+1)-(ptr+i)<<endl; 
    }
    int sum =0 ;
   for(int i=0;i<(sizeof(arr)/sizeof(arr[0])); i++){
      cout<<arr[i]<<endl;
      cout<<*(ptr+i)<<endl; 
     
     sum +=*(ptr+i); 
     
   }cout<<sum<<endl;

  

    cout<<*(ptr)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
    cout<<*(ptr+4)<<endl;

    int x=42;
    int *ptr=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=100;
    cout<<x<<endl; */
}