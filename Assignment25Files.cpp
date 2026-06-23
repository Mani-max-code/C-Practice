#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
struct Employee{
    string name;
    double salary;
    string department;

    
};
void saveEmployees(vector<Employee> &Employees){

    ofstream file("Employees.txt");
    for(auto &emp:Employees){
        file<<emp.name<<" "<<emp.department<<" "<<emp.salary<<endl;
    }
    file.close();

}
/*vector<Employee> loadEmployee(vector<Employee> &Emp){
    ifstream file("Employees.txt");
    Employee e;
    while(file>>e.name>>e.department>>e.salary){
        Emp.push_back(e);
    }
   file.close();
}*/
vector<Employee> loadEmployee(){
    ifstream file("Employees.txt");
    vector<Employee> v;
    Employee e;
    while(file>>e.name>>e.department>>e.salary){
        v.push_back(e);
    }
    return v;
   file.close();
}

int main(){
 

    // Step 1: Try opening a file that doesn't exist
    ifstream file("abc.txt");

    if (!file)
    {
        cout << "Error: File does not exist!" << endl;
    }

    file.close();

    // Step 2: Create the file and write data
    ofstream out("abc.txt");

    out << "Hello Mani, File Handling Test";

    out.close();

    cout << "\nFile created successfully.\n" << endl;

    // Step 3: Reopen and read
    ifstream in("abc.txt");

    if (in.good())
    {
        cout << "File opened successfully." << endl;
    }

    string line;

    getline(in, line);

    cout << "Content: " << line << endl;

    // Step 4: Check stream states
    cout << "\nAfter first read:" << endl;
    cout << "good() = " << in.good() << endl;
    cout << "eof()  = " << in.eof() << endl;
    cout << "fail() = " << in.fail() << endl;

    // Step 5: Try reading again (past end of file)
    getline(in, line);

    cout << "\nAfter attempting another read:" << endl;
    cout << "good() = " << in.good() << endl;
    cout << "eof()  = " << in.eof() << endl;
    cout << "fail() = " << in.fail() << endl;

    in.close();

    return 0;


 /*   fstream file4("Pointers.txt",ios::in|ios::out|ios::trunc);

    file4<<"Hello World C++ File Handling";

    cout<<"Reading Position : "<<file4.tellg()<<endl;

    file4.close();

    ifstream file5("Pointers.txt");

    cout<<"Reading Position : "<<file5.tellg()<<endl;

    char arr[6];
    file5.read(arr,5);
    arr[5]='\0';

    cout<<"Reading Position after reading : "<<file5.tellg()<<endl;

    file5.seekg(0);

    string line;
    while(getline(file5,line)){
        cout<<line<<endl;
    }

     vector<Employee> v={{"Mani",50000,"IT"},{"Dora",50000,"IT"},{"Naveen",60000,"HR"}};

    saveEmployees(v);

    v.clear();    //clears vector makes empty

    v=loadEmployee();  // loads to vector v

    for(auto x:v){
        cout<<x.name<<" "<<x.department<<" "<<x.salary<<endl;
    }


     ofstream file("Students.txt",ios::app);

    file<<"Surya 25 8.8 "<<endl;
    file<<"Ravi 25 8.7 "<<endl;
    file.close();  

  ifstream file1("Students.txt");
     
    if(!file1.is_open()){
        cout<<"Error Occured!"<<endl;
        return 1;
    }
    string line;
    while(getline(file1,line)){

        cout<<line<<endl;
    }

    file1.close();//

   ofstream file("Students.txt");

    if(!file.is_open()){
        cout<<"Error Occured!"<<endl;
        return 1;
    }

    file<<"Mani 24 7.4"<<endl;file<<"Dora 23 8.4"<<endl;
    file<<"Naveen 25 9.4"<<endl;file<<"Balu 23 6.4"<<endl;file<<"Siddhu 25 8.4"<<endl;

    file.close();
    */

}