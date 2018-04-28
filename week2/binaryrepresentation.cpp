#include <iostream>
#include<cmath>
using namespace std;

int checkHowManyBits(int x)
{
    int result=2, n=-1;
    if(x>0)
        while(result<x)
        {
            result = pow(2,++n);
        }
    return n;
}

void printBinary(int n,bool *arr)
{
    for(int i=n-1;i>=0;i--)
        cout<<arr[i];
    cout<<endl;
    cout<<"size of array: "<<n*sizeof(bool)<<"B"<<endl;
}

void binaryRepresentation(int x)
{
    cout<<"Binarna reprezentacja liczby "<<x<<": ";
    int n = checkHowManyBits(x);
    bool arr[n]{0};
    for(int i=0;i<n;i++)
        if(x){
            arr[i] = x%2;
            x /=2;
        }
    printBinary(n,arr);
}
