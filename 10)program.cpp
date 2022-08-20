#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[10],sum=0;
    cout<<"Enter array elements";
    for(int i=0;i<10;i++)
        cin>>arr[i];
    for(int i=0;i<10;i++)
        sum+=arr[i];
    cout<<"The sum of elements "<<sum;
    getch();
    return 0;
}
