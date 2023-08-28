#include<iostream>
#include<algorithm>
using namespace std;
main() 
{
   string my_str;
   int words,count=0;
   cout<<"Enter the string:";
   getline(cin, my_str);
   for(int i=0;i<=my_str.size();i++)
   {
   if(my_str[i]==' ')
   {
     count++;
   }
   }
   words=count+1;
   cout<<words;
}