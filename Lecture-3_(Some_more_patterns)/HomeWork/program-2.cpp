//  Numeric Hollow inverted Half Pyramid


// 12345
// 2  5
// 3 5
// 45
// 5


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    for(int row=0; row<n;row++){
        for(int col=row+1;col<=n;col++){
            if(col==row+1 || col==n ||row==0 ){
                cout<<col;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}