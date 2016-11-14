#include <iostream>
#include <stdio.h>
using namespace std;


int add2nums(int a, int b){


cout<<"The answer is: "<<(a + b)<<endl;


}


int sub2nums(int a, int b){

    cout<<"The answer is: "<<(a - b);

}

int div2nums(int a, int b){
    cout<<"The quotient of these two numbers is: "<< (a/b)<<endl;

}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
cout<<"Please enter number 1: "<<endl;

   cin>>a;

   cout<<"Please enter number 2: "<<endl;

   cin>>b;
   cout<<"Please enter 1 for addition, 2 for subtraction, and 3 for division: "<<endl;

   cin>>c;

    if (c==1){
     add2nums(a, b);

    }
    else if (c==2){


    sub2nums(a, b);

    }
    else if (c == 3){
    div2nums(a, b);
    }



return 0;
}




