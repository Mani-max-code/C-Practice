#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>

#include<Algorithm>
using namespace std;

struct Student{
    string name;
    int marks;
    public :
     Student(string n,int mar ) :name(n),marks(mar){}
};
int main(){
    unordered_map<string,long> contacts;

    contacts.insert({"Mani",939897910}); contacts.insert({"Dora",739693736});
    contacts.insert({"Naveen",799381665});contacts.insert({"Ravi",970123820});
    contacts.insert({"Balu",913379657});

    cout<<contacts["Mani"]<<endl;

    for(auto x:contacts){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    int arr[]={5,3,8,1,3,9};

    unordered_set<int> us;

    for(int x:arr){
      
     auto inserted=us.insert(x);
     if(!inserted.second){

        cout<<"Has Duplicates"<<endl;

     }
    }

    cout<<endl;
    vector<int> v={12,45,3,67,23,1,89};

    auto pos=find(v.begin(),v.end(),67);
     if(pos != v.end()){
        cout<<"Element 67 found"<<endl;
    }

    int count=count_if(v.begin(),v.end(),[](int x){return x>20;});

    cout<<"No of Elements Greater than 20 :"<<count<<endl;

    auto max=max_element(v.begin(),v.end());

    cout<<"Max Element : "<< *max<<endl;

    auto min=min_element(v.begin(),v.end());

    cout<<"Min Element : "<< *min<<endl;

    cout<<endl;

    vector<int> v1={10,20,30,40,50,60,70};

    bool found1=binary_search(v1.begin(),v1.end(),40);

    cout<<"Element 40 Found : "<<found1<<endl;

    bool found2=binary_search(v1.begin(),v1.end(),60);

    cout<<"Element 60 Found : "<<found2<<endl;

    bool found3=binary_search(v1.begin(),v1.end(),90);

    cout<<"Element 90 Found : "<<found3<<endl;

    cout<<endl;

    vector<int>  v2={5,1,4,1,5,9,2,6,5,3,5};

    sort(v2.begin(),v2.end());

    v2.erase(unique(v2.begin(),v2.end()),v2.end());

    reverse(v2.begin(),v2.end());

    for(int x:v2){
        cout<<x<<" "<<endl;
    }

    cout<<endl;

    vector<Student> v4;
    v4.push_back(Student("Mani",60)); v4.push_back(Student("Dora",70));
    v4.push_back(Student("Naveen",80)); v4.push_back(Student("Balu",60)); v4.push_back(Student("Gowtham",80));

    sort(v4.begin(),v4.end(),[](Student a,Student b){return a.marks>b.marks;});

    for(auto x:v4){
        cout<<x.name <<" "<<x.marks<<endl;
    }

    sort(v4.begin(),v4.end(),[](Student a,Student b){return a.name>b.name;});

    for(auto x:v4){
        cout<<x.name <<" "<<x.marks<<endl;
    }

}