#include<iostream>

#include<typeinfo>

using namespace std;
template<typename T>
T getMax(T a,T b){
    return (a>b)?a:b;
}

template<typename T>
T getMin(T a,T b){
    return (a<b)?a:b;
}

template<typename T>
void swaper(T &a,T &b){
    T temp=a;
    a=b;
    b=temp; 

    cout<<"c : "<<a<<" "<<"D : "<<b<<endl;
}

template<typename T1,typename T2>
void display(T1 a,T2 b){
  cout<< a <<" : "<<typeid(a).name()<<endl;
  cout<< b <<" : "<<typeid(b).name()<<endl;
}

template<typename T1,typename T2>
class Pair{

    T1 first;
    T2 Second;
  public : 
    Pair(T1 a,T2 b) : first(a),Second(b){

    }

    T1 getFirst(){
        return first;
    }
    T2 getSecond(){
        return Second;
    }

    void display(){
        cout<<first<<endl;
        cout<<Second<<endl;
    }
    void swapData(){
        T1 temp=first;
        first=Second;
        Second=temp;
    }


};

template<typename T>
class Stack{
private :
    T arr[100];
    int top;

    public :
      Stack():top(-1){}

    void push(T val){
        arr[++top]=val;
        cout<<val<<"pushed"<<endl;
    }

    T pop(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        }
        return arr[top--];
    }

    T peek(){
        return arr[top];
    }
   
    bool isEmpty(){
        return top== -1;
    }

    void display(){
        for(int i=0;i<=top;i++)
          cout<<arr[i]<<" ";
          cout<<endl;
    }


};

template<typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a+b;
    }
};

template<>
class Calculator<string> {
public:
    void add(string a, string b) {
        cout << a << " " << b << endl;
    }
};

int main(){

    Calculator<string> c;
    c.add("Hello","worls");

 /*   Stack<string> s;
    s.push("Hello");
    s.push("World");
    s.push("dddd");
    s.pop();
    s.peek();
    s.display();

     Pair<inst,string> p(4,"Mani");

    p.display();

   display(5,"Five");
    display(4.5,0);
    display('A',65);

    int a=3,b=4;
    cout<<getMax(a,b)<<endl;
    a=4.5; b=5.4;
    cout<<getMin(4.5,5.4)<<endl;
    string s1="Mani";
    string s2="Dora";
    cout<<getMax(s1,s2)<<endl;
    char c='A';
    char D='B';
    swaper(c,D); */
    

}