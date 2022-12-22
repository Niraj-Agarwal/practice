#include<iostream>
using namespace std;

int main(){
    // what is pointer----> it is a datatype which holds address of operator
int a=7;
int*b = &a;
cout<<b<<endl;
cout<<&a<<endl;     // &-----> (address of) operator
cout<<*b<<endl;     // *-----> (value of) operator

return 0;
}