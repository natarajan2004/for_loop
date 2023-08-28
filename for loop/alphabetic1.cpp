#include<iostream>
using namespace std;
int main()
{
        int i, j, incr=1, cnt;
        cout<<"\n Enter Number of Rows : ";
        cin>>cnt;
        cout<<"\n";
        char ch = 'A';
        for(i=0; i<cnt; i++)
        {
                for(j=0; j<incr; j++)
                {
                        cout<<ch<<" ";
                        ch++;
                }
                cout<<"\n";
                incr = incr + 1;
        }
        return 0;
}