#include<iostream>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<sstream>


#include<algorithm>


using namespace std;

bool isbalanced(string input){

    string inputt=input;
    stack<char> s;
    for(char ch:input)
    {
        if(ch=='(' || ch=='{' || ch=='['){
           s.push(ch);
        }
        else{
            if(s.empty()){
                return false;
            }
            if(ch==')' && s.top()!='('){
                return false;
            }
            if(ch=='}' && s.top()!='{'){
               return false;
            }
            if(ch==']' && s.top()!='['){
                return false;
            }
           s.pop();
        }
    }

    return s.empty();


}
class Job{
   public : 
    string name;
    public :
      Job(string n):name(n){}

};

int main(){

    string sentence="the quick brown fox the lazy dog the fox";

    map<string,int> freq;
    stringstream ss(sentence);
    string word;

    while(ss>>word){
        freq[word]++;

    }
    freq["the"]=2;
    for(auto x:freq){

        cout<<x.first<<" : "<<x.second<<endl;

    }

  /*    int arr[8]={5,3,8,1,6,3,5,4};

    set<int> s;
    for(int x:arr){
        s.insert(x);
    }
   cout<<"Set Elements :  ";
    for(int x:s){
        cout<<x<<" ";
    }

   priority_queue<pair<int,string>> Token;
    Token.push(make_pair(10,"Mani"));Token.push(make_pair(6,"Balu"));
    Token.push(make_pair(1,"Dora"));Token.push(make_pair(7,"kiran"));
    Token.push(make_pair(5,"Naveen"));Token.push(make_pair(9,"jyothi"));
    Token.push(make_pair(4,"Ravi"));Token.push(make_pair(3,"Siddhu"));
    Token.push(make_pair(8,"Surya"));Token.push(make_pair(2,"Subbu"));

    while(!Token.empty()){
       cout<<"Patient Treating :"<<Token.top().second<<endl;
       Token.pop();
    }
    // cout<<"Patient Treating :"<<Token.top().first<<endl;

  cout<< isbalanced("{[(]}")<<endl;

   queue<Job> printer;
   Job j1("Resume");
   Job j2("Report");
   Job j3("Invoice");
   Job j4("Project");
   Job j5("Notes");

   printer.push(j1);
   printer.push(j2);
   printer.push(j3);
   printer.push(j4);
   printer.push(j5);

   while(!printer.empty()){
    cout<<"Job : "<<printer.front().name<<endl;;
    printer.pop();
    cout<<"Size of printer: "<<printer.size()<<endl;;
   }

*/
}