#include<iostream>
using namespace std;
int main()
{
        int i, j, cnt;
        cout<<"\n Enter Number of Rows : ";
        cin>>cnt;
        cout<<"\n";
        char ch='A';
        for(i=0; i<cnt; i++)
        {
                for(j=0; j<=i; j++)
                {
                        cout<<ch<<" ";
                }
                cout<<"\n";
                ch++;
        }
        return 0;
}