#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Tong a + b = "<<a+b<<endl;
    cout<<"Hieu a - b = "<<a-b<<endl;
    cout<<"Tich a * b = "<<a*b<<endl;
    if(b!=0)
        cout<<"Thuong a / b = "<<a/b<<endl;
    else
        cout<<"Khong the chia cho 0"<<endl; 
    return 0;
}