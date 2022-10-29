//Huan Chen Assignment10-Program01
#include<iostream>

using namespace std;
int x, y,a ;
void getValues(){
    
    cout<<"Please enter a value for x: ";
    cin>>x;
    cout<<"Please enter a value for y: ";
    cin>>y;
}

int doSomething(int *input1, int *input2){
    int a = *input1;
    *input1 = *input2 *10;
    *input2 = a * 10;
   
    cout<<"The result of the function was: "<< *input1 + *input2<<endl;
    cout<<"X's current value is "<<*input1<<endl;
    cout<<"Y's current value is "<<*input2<<endl;
    return *input1 + *input2;

}

int main(){
    getValues();
    doSomething(&x, &y);
}

//Computer Science 1081 – Assignment #10
//Program #1
//Rewrite the following function to use pointers instead of reference variables. Write a main function that asks the user for 2 integer values, and then prints the result of the function call, as well as the ending values for the user’s inputs.
//int doSomething(int &x, int &y) { int temp = x;
//x = y * 10;
//y = temp * 10; return x + y;
//}
//Sample Outputs:
//Please enter a value for x: 7 Please enter a value for y: 8
//The result of the function was: 150 x's current value is 80
//y's current value is 70
//Press any key to continue . ..
