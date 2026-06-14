#include <iostream>
using namespace std;
void leakyFunction(int a)
{
    int *ptr = new int[a]; // Pointer created but not nullified stays in heap , memory waste
}
void safeFunction(int a)
{
    int *ptr = new int[a];
    delete ptr;
    ptr = nullptr; // pointer created ,used,deleted,nullified . no memory waste and ram occupancy
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int *createArray(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = (i + 1) * (i + 1);

    return arr;
}

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    int *arr[5] = {&a, &b, &c, &d, &e};

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl; //cout<<*arr[i]<<endl;

    }

    *arr[2]=44;

    cout<<*arr[2]<<endl;

    

    /* int *arr=createArray(5);

      for(int i=0;i<5;i++){
          cout<<*(arr+i)<<endl;
      }

      delete[] arr;
      arr=nullptr;
      int (*funptr)(int a,int b);

      funptr=add;
      (*funptr)(5,4);

      cout<<"Add : "<<(*funptr)(5,4)<<endl;

      funptr=sub;
      (*funptr)(5,4);

      cout<<"sub : "<<(*funptr)(5,4)<<endl;

      funptr=multiply;
      (*funptr)(5,4);

      cout<<"multiply : "<<(*funptr)(5,4)<<endl;

     leakyFunction(5);
     safeFunction(10);
       int n;
      cout << "Enter n:";
      cin >> n;
      int sum = 0;
      int *arr = new int[n]; // Allocates memory in heap
      for (int i = 0; i < n; i++)
      {
          cout << "enter element :" << i + 1 << endl;
          cin >> *(arr + i);
      }
      for (int i = 0; i < n; i++)
      {

          sum += *(arr + i);
      }
      cout << " sum :" << sum << endl;
      float avg = (float)sum / n;
      cout << "Average : " << avg << endl;
      delete[] arr;
      arr = nullptr; */
    return 0;
}