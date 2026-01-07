#include <iostream>
using namespace std;

void print_the_array(int n, int *a)     //receives a pointer to the first element 
{                                       //of the array and accesses elements using indexing
    cout<<"Printing the array: ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *a=new int[n];     //dynamically allocates an array of size n at runtime

    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    print_the_array(n,a);   //passes the pointer to the first element 
                            // of the array to the function
    delete[] a;
    return 0;
}
