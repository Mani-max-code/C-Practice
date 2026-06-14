#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while(start < end)
    {
        if(s[start] != s[end])
        {
            return false;
        }

        start++;
        end--;
    }

    return true;
}
int main()
{
    cout << isPalindrome("madam") << endl;
    cout << isPalindrome("hello") << endl;
    cout << isPalindrome("racecar") << endl;

    return 0;
    /*   int arr[3][3];

       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               cout<<"Enter element for row "<<i<<" and column "<<j<<endl;
              cin>> arr[i][j];
           }
       }

       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               cout<<arr[i][j]<<" ";
           }
           cout<<endl;
       }

       cout<<endl;
       cout<<"Tranpose Matrix :"<<endl;

       for(int i=0;i<3;i++){
           for(int j=0;j<3;j++){
               cout<<arr[j][i]<<" ";
           }
           cout<<endl;
       }    

    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int c[2][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {

                c[i][j] += A[i][k] * B[k][j];
            }
            cout << endl;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][ij] << " ";
        }
        cout << endl;
    } 

   
    int Length=s.length();
    cout<<"length: "<<Length<<endl;
    cout<<"First character: "<<s[0]<<endl;
    cout<<"Last character: "<<s[Length-1]<<endl;
  
    string s="Mani shankar";
    string rev="";
    for(int i=s.length()-1;i>=0;i--){
        rev +=s[i];
    }
    cout<<"Reversed string : "<<rev<<endl;

    if(s==rev){
        cout<<"It is palindrome ";
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }

    cout<<"Substring : "+s.substr(5)<<endl;

 string str;
    int vowels = 0, consonants = 0;

    cout << "Enter string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        char ch = tolower(str[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if(isalpha(ch))
        {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
*/
    


}