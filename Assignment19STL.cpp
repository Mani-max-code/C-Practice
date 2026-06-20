#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

struct Student{
    string name;
    int marks;
    public :
     Student(string n,int mar ) :name(n),marks(mar){}
};
bool compare(Student a,Student b){
    return a.marks<b.marks;
}
vector<pair<string,long>> contacts;
auto findByName(string name){

      for(auto x:contacts){
       if(x.first == name){
        return x.second;
       }
      }
      return -1L;
  }
class Customer{
   public : 
    string name;
    string accountNo;
    public :
      Customer(string n,string no): name(n),accountNo(no){}
    
};

int main(){

    Customer c1("Mani","SA1001");
    Customer c2("Dora","SA1002");
    Customer c3("Naveen","CA1005");

    deque<Customer> d;
    d.push_back(c1);
    d.push_back(c2);
    for(auto x:d){
       cout<<x.name<<" "<<x.accountNo<<endl; 
     }
     cout<<endl;
     d.pop_front();
     for(auto x:d){
       cout<<x.name<<" "<<x.accountNo<<endl; 
     }
cout<<endl;
     d.push_front(c3);

   for(auto x:d){
       cout<<x.name<<" "<<x.accountNo<<endl; 
     }

    
  /*    contacts.push_back(make_pair("Mani",939897910));
    contacts.push_back(make_pair("Dora",739693736));
    contacts.push_back(make_pair("Naveen",799381665));
    contacts.push_back(make_pair("Rav",970123820));
    contacts.push_back(make_pair("Surya",810468574));

    cout<<"Mani's contact: "<<findByName("Mani")<<endl;
    for(auto x:contacts){
        cout<<"Name : "<<x.first<<" "<<"Contact : "<<x.second<<endl;
    }


    




     
  vector<int> v ={5,10,15,20,25};

   // vector<int>::iterator it=v.begin();

   for(auto it=v.begin();it !=v.end();it++){
     cout<<*it<<" ";
    }

    
    auto pos=find(v.begin(),v.end(),15);
    if(pos !=v.end()) {
        v.insert(pos+1,99);
    }
   cout<<endl;
   for(int x : v){
        cout<<x<<" ";
     }



      Student s1("Mani",55);
    Student s2("Dora",50);
    Student s3("Naveen",70);
     Student s4("Ravi",60);
      Student s5("Siddhu",70);

    vector<Student> s={s1,s2,s3,s4,s5};

    for(Student stu:s){
        cout<<stu.name<<" "<<stu.marks<<endl;
    }
    cout<<endl;

    sort(s.begin(),s.end(),compare);

    for(Student sort : s){
        cout<<sort.name<<" "<<sort.marks<<endl;
    }

 vector<int> marks;
     
    int n;
    cout<<"Enter no of students :"<<endl;
    cin>>n;
    
    int mark;
    for(int i=0;i<n;i++){
       cout<<"Enter marks of student "<<i+1<<endl;
       cin>>mark;
       marks.push_back(mark);
    }
    int max=marks.at(0);
    int min=marks.at(0);
    int total=0;
    int pass=0;
    for(int x:marks){
        cout<<x<<endl;
        if(max<x){
            max=x;
        }
        if(min>x){
            min=x;
        }
        if(x>=50){
            pass++;
        }

        total +=x;
    }
    cout<<"Maximum marks :"<<max<<endl;
    cout<<"Minimum marks :"<<min<<endl;
    cout<<"Average :"<<(float) total/n<<endl;
    cout<<"No of students passed :"<<pass<<endl;*/ 



}
