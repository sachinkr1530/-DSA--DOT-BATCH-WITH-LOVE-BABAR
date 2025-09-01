// Sum of Even no upto N

#include<iostream>
using namespace std;

int getEven(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int ans=getEven(n);
    cout<<"sum of no is "<<ans;
}