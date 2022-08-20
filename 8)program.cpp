#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"The firs number is "<<num1<<endl;
    cout<<"The second number is "<<num2;
    getch();
    return 0;
}
