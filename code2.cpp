#include <iostream>
using namespace std;

int *fun(int a, int b)
{
    int *sum=new int;       // sum is a temporary variable so its output is stored in the static memory
    *sum=a+b;               // so when the function ends "sum" will get deleted. so to prevent it
    return sum;             // sum is created as a dynamic variable so it stays even when function ends
}

int main()
{
    int *ans=fun(5,6);
    cout<<"Sum of 2 numbers: "<<*ans;
    return 0;
}