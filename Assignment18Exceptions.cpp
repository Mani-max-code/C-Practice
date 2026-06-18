#include <iostream>
#include <stdexcept>
using namespace std;

int divide(int a,int b){

    if(b==0){
        throw runtime_error("Divide By Zero");
    }
    cout<<a/b<<endl;
}
void validStudent(string name,int age,float gpa){

    if(name==""){
        throw invalid_argument("Student Name is Mandatory");
    }
     if(age<0 || age>100){
        throw out_of_range("Age should between 1 to 100");
    }
     if(gpa>10 ||gpa<0){
       throw invalid_argument("Age should between 1 to 10");
    }

    cout<<"Student Details"<<endl;

}

class AgeException : public exception{
    string message="Invalid Age X";
public :
    const char* what() const noexcept override{
        return message.c_str();
    } 

};

void validateAge(int age){

    if(age<0 || age>120){
        throw AgeException();
    }

}

class FileHandler{
  public :
     FileHandler(){
        cout<<"File Opened"<<endl;
     }

     ~ FileHandler(){
        cout<<"File closed"<<endl;
     }

   void fun1(){
    cout<<"Fun1 called"<<endl;
    fun2();
   }
    void fun2(){
    cout<<"Fun2 called"<<endl;
    throw runtime_error("Error calling fun2");
}  
     
};

int main() {
    FileHandler f;
    try{
    f.fun1();
    }
    catch(runtime_error &e){

        cout<<"Error :"<<e.what()<<endl;

    }
 /*   try{
    validateAge(124);
    }
    catch(AgeException &e){

        cout<<"Error :"<<e.what()<<endl;
    }

     try{
      // validStudent("",24,6.4);
      //  validStudent("Mani",104,9.0);
        validStudent("Dora",16,10.4);
    }
    catch(invalid_argument &e){
     
        cout<<"Error :"<<e.what()<<endl;
    }
    catch(out_of_range &e){
     
        cout<<"Error :"<<e.what()<<endl;
    }
    catch(invalid_argument &e1){
     
        cout<<"Error :"<<e1.what()<<endl;
    }

    cout<<"Program Completed";


   try{
        cout<<divide(10,2)<<endl;
        cout<<divide(10,0)<<endl;
    }
    catch(runtime_error &e){
        cout<<"Error : "<<e.what()<< endl;
    }

    cout<<"Program ran successfully"<<endl;
   */
}