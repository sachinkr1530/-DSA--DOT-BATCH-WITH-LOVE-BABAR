//  Write a function to add 2 numbers?



#include<iostream>
using namespace std;

// function declare and define 
int add(int a,int b){
    int result =a+b;
     return result;
}

int main()
{
    int a;
    cout<<"Enter the value of a ";
    cin>> a;
    int b;
    cout<<"Enter the vale Of b ";
    cin>> b;
    int sum =add(a,b);
    cout<<"Addition result is "<< sum<<endl;

}