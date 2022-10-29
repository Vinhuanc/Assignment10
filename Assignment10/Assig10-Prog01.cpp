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
