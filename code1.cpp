// INCREASING THE SIZE OF AN ARRAY

#include <iostream>
using namespace std;
int main()
{
    int *a=new int[5];                          // technique of creating an array dynamically
    for(int i=0; i<5; i++)
    {
        cin>>a[i];                              // loading the dynamic array
    }

    cout<<"\n"<<"aray initialized"<<endl<<endl;

    int *b=new int[5];              // creating a temporary dynamic array to store the elemts in array a
    for(int i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    cout<<"aray coppied to a new temporary array"<<endl<<endl;

    int n;
    cout<<"new size of the array"<<endl;
    cin>>n;
    a=new int[n];                         // resizing a
    for(int i=0; i<5; i++)
    {
        a[i]=b[i];                       // copying elements from b to a
    }
    delete[] b;                           // deleting the temporary array b

    cout<<"Enter the new elements: "<<endl;
    for(int i=5; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"\n\n"<<"New Modified Array: ";
    for(int i=0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
