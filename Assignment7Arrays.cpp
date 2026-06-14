#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sum(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
    }
    cout << "Sum of array is:" << s << endl;

    cout << "Average of array is:" << (float)s / n << endl;
}

void maxAndMin(int arr[], int n)
{

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Max Element :" << max << endl;
    cout << "Min Element :" << min << endl;
}
int linearSearch(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            return i;
        }
    }
    return -1;
}
void reverseArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void occurences(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        bool alreadyCounted = false;

        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyCounted = true;
                break;
            }
        }
          if (alreadyCounted)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]){
                count++;
            }
        }

        cout<<arr[i]<<" occurs "<<count<<endl;
    }
}
void EvenOdd(int arr[],int n){
     
    cout<<"Even : ";
    for(int i=0;i<n;i++){
       if(arr[i]%2==0){
        cout<<arr[i]<<" ";
       }
    }

    cout<<endl;

    cout<<"Odd : ";

   for(int i=0;i<n;i++){
       if(arr[i]%2!=0){
        cout<<arr[i]<<" ";
       }
    }
}

int main()
{

    int arr[8];

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter element" << i << "to array:" << endl;
        cin >> arr[i];
    }
    cout << endl;
    

    /*  print(arr,5);

      sum(arr,5);
      maxAndMin(arr,5);

      cout<<linearSearch(arr,5,30)<<endl;

      cout<<linearSearch(arr,5,99)<<endl;   

     reverseArray(arr, 5); 

     EvenOdd(arr,6);       */

     occurences(arr,8);

     

    
}