// Numeric Full Pyramid 

//    1 
//   2 3 2
//  3 4 5 4 3
// 4 5 6 7 6 5 4


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
        for(int row=0; row<n;row++)
        {
            // spaces 
            for(int col=0; col<n-row-1;col++)
            {
               cout<<" ";
            }
            // number
             for(int col=0;col<row+1;col++)
                {
                    cout<<row+col+1<<" ";
                }
                // reverse
                int  start=2*row;
                for(int col=0; col<row;col++){
                    cout<<start<<" ";
                    start--;
                }


                cout<<endl;
        }

    // for(int row =0; row<n; row++)
    // {
    //     // row+1 element print karna h 
    //     // int start =row+1; 
    //     for(int col=0; col<row+1; col++)
    //     {
    //         cout<<row+col+1<<" ";
    //         // cout<<start<<" ";
    //         // start++;
    //     }
    //     cout<<endl;
    // }
    
}