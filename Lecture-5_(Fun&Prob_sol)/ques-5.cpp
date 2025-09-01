// Write a function of student & Grade Problem



#include<iostream>
using namespace std;

char grade(int mark){
    // if(mark>=90)

    //     return 'A';

    // else if (mark>=80)
    //     return 'B';
    // else if (mark>=70)
    //     return 'C';
    // else if(mark>=60)
    //     return 'D';
    // else 
    //     return 'F';

    switch(mark/10){
        case 10:
        case 9 : return 'A'; break;
        case 8 : return 'B'; break;
        case 7 : return 'C'; break;
        case 6 : return 'D'; break;
        default : return 'F';
    }
}

int main(){
    int mark;
     cout<<"enter the marks "<<endl;
     cin>>mark;

     char finalGrade= grade(mark);
     cout<<"Grade "<<finalGrade<< endl;

}