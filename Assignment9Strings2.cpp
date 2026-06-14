#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

bool isAnagram(string s1,string s2){

    if(s1.length()!=s2.length()) return false;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
}

int wordCount(string s){
   int count=0;
    bool inword=false;
    for(char c:s){
        if(c!=' ' && !inword ){
            count++;
           inword=true;
        }
        else if(c==' '){
           inword=false;
        }
    }
    return count;
}

int main(){

    string s="I am Learnning C++";
   string s2="Hello World";

   int n=wordCount(s);
   cout<<n<<endl;
   cout<<wordCount(s2)<<endl;
    
    /*

    
    cout<< isAnagram("listen","silent")<<endl;
    cout<<isAnagram("hello","world")<<endl;

   string s;
    getline(cin,s);
    int num=stoi(s);
    num+=100;
     string s1=to_string(num);
     cout<<"Result : "<<s1<<endl;
   string s="Hello world";
    cout<<"length : "<<s.length()<<endl;

    for(char &c:s){
        c=toupper(c);
    }
    cout<<s<<endl;
    
    for(char &c:s){
        c=tolower(c);
    }
    cout<<s<<endl;

    int pos=s.find("world");

    cout<<"Position of world : "<<pos<<endl;

    s.replace(6,5,"C++");

    cout<<"After Replacing : "<<s<<endl; */

   

   

}