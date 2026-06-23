#include<iostream>
#include<memory>
#include<vector>
#include<algorithm>
using namespace std;
class Book{
    string title;
    string author;
    public :
     Book(string t,string a) :title(t),author(a){cout<<"Constructor Called!"<<endl;}

     ~Book(){
         cout<<"Destructor Called!"<<endl;
     }
     string getTitle(){
        return title;
     }
     string getAuthor(){
        return author;
     }

};
class Resource{
    public :
      Resource(){
        cout<<"Resource constructor called!"<<endl;
      }
      ~Resource(){
        cout<<"Resource destructor called!"<<endl;
      }

};
//class Parent;
class Child;

class Parent{
  public :
      shared_ptr<Child> cptr;

      Parent(){
        cout<<"Parent constructor called!"<<endl;
      }
      ~Parent(){
         cout<<"Parent destructor called!"<<endl;
      }

};
class Child{
      public :
      //shared_ptr<Parent> pptr;
      weak_ptr<Parent> pptr;
        Child(){
            cout<<"Child constructor called!"<<endl;
        }
        ~Child(){
            cout<<"Child destructor called!"<<endl;
        }

};
class Student{
    string name;
    int marks;
     public :
       string getName(){
        return name;
       }
       int getMarks(){
        return marks;
       }
      Student(string n,int m):name(n),marks(m){}

};
int main()
 {   
    vector<shared_ptr<Student>> v;
    v.push_back(make_shared<Student>("Mani",84));
    v.push_back(make_shared<Student>("Dora",84));
    v.push_back(make_shared<Student>("Naveen",84));
    v.push_back(make_shared<Student>("Surya",84));
    v.push_back(make_shared<Student>("Balu",84));

    sort(v.begin(),v.end(),[](shared_ptr<Student> a,shared_ptr<Student> b){ return a->getMarks() > b->getMarks();});

    for(auto &x:v){
        cout<<x->getName()<<" "<<x->getMarks()<<endl;  
      
    }
   /*  int counter=0;
    auto f1=[counter](){cout<<counter+1<<endl;};
    f1();
    cout<<counter<<endl;
    auto f2=[&counter](){counter=3;};
    f2();
    cout<<counter<<endl;
    
     auto add=[](){cout<<3+4<<endl;};
      add();
      auto sub=[](int a,int b){return a-b;};
      cout<<sub(5,3)<<endl;
      auto mul=[](int a,int b)->int{return a*b;};
      cout<<mul(2,5)<<endl;
        shared_ptr<Parent> p=make_shared<Parent>();
          shared_ptr<Child> c=make_shared<Child>();

       p->cptr=c;
       c->pptr=p;


   
   shared_ptr<Resource> s1(new Resource()); //shared_ptr<Resource> s1 =make_shared<Resource>();
    cout<<"Count :"<<s1.use_count()<<endl;
    {
        shared_ptr<Resource> s2=s1;
        cout<<"Count :"<<s1.use_count()<<endl;

        {
              shared_ptr<Resource> s3=s1;
              cout<<"Count :"<<s1.use_count()<<endl;
        }
        cout<<"Count :"<<s1.use_count()<<endl;
    }
    cout<<"Count :"<<s1.use_count()<<endl;

   unique_ptr<Book> b1=make_unique<Book>("The Secret","Rhonda Byrne");
   cout<< b1->getTitle()<<" "<<b1->getAuthor()<<endl;
    
   unique_ptr<Book> b2=move(b1);
   if(b1==nullptr){
    cout<<"b1 is null"<<endl;
   }

   cout<< b2->getTitle()<<" "<<b2->getAuthor()<<endl; */

}
