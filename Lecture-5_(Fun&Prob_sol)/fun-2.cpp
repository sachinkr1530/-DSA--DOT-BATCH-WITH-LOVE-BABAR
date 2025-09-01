#include<iostream>
using namespace std;

void printName()
{
    int n;
    cout<<"Enter the no ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Sachin"<<endl;
    }
}
void printNumber(int num){
    cout<<num<<endl;
}
int main()
{
    int a=5;
     printNumber(a);
}