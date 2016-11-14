#include <iostream>
#include <stdio.h>
using namespace std;


//This function adds two float values and prints it out to the screen.

int add2nums(float a, float b){


cout<<"The answer is: "<<(a + b)<<endl;


}

//This does the same as the above one, except it is subtracting the two variables.

int sub2nums(float a, float b){

    cout<<"The answer is: "<<(a - b);

}

//Same thing, just division.

int div2nums(float a, float b){
    cout<<"The quotient of these two numbers is: "<< (a/b)<<endl;

}

//The user will enter two numbers.
//If-else statement determines the function to be used.


int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
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




