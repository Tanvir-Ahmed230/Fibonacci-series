# Fibonacci-series
Series of golden ratio
#include <iostream>
using namespace std;

int main() {
int n,i,num1=0,num2=1;
double fib;
cout<<"Upto how much of fibonacci?:";
cin>>n;
cout<<num1<<","<<num2<<",";
for(i=1;i<n-2;i++){
    fib=num1+num2;
    num1=num2;
    num2=fib;
    cout<<fib<<",";
    fib=num1+num2;
}
cout<<fib;

    return 0;
}
