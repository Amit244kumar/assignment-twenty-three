#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers ";
    cin>>num1>>num2;
    if(num1>num2)
        cout<<"The maximum number is "<<num1;
    else
        cout<<"The maximum number is "<<num2;
    getch();
    return 0;
}
