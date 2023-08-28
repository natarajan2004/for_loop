#include<iostream>
#include<algorithm>
using namespace std;
main() {
   string my_str;
   cout<<"Enter the string:";
   getline(cin, my_str);
   cout << "String with Spaces :" << my_str << endl;
   remove(my_str.begin(), my_str.end(),' ');
   cout << "String without Spaces :" << my_str;
}