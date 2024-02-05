#include  <iostream>

using namespace std;

int main()
{
    string Name;
cout << "Type your full name: ";
getline (cin, Name);

 string str= Name;
    int i;
    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }




    return 0;
}
