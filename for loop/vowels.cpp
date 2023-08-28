#include<iostream>
using namespace std;
int main()
{
    string str;
    int count=0;
    cout<<"Enter the string:";
    getline(cin, str);
    for(int i=0;i<=str.length()-1;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
    }
    cout<<count;
}