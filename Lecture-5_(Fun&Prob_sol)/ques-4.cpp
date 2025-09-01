// Print Counting from 1 to N 



#include<iostream>
using namespace std;

void printCount(int n){
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}



int main(){
    int n;
    cout<<"enter no ";
    cin>>n;
    printCount(n);
}