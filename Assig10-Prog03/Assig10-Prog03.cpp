//Huan Chen Assignment10-Program03
#include<iostream>
using namespace std;

void expand(int array[], int size){
    int newSize = size *2;
    int *newArray = new int[newSize];
    for(int i=1; i<=size; i++){
        newArray[i] = array[i];
    }
    cout<<"The expanded array is: [";
    for(int b =1; b<=newSize; b++){
        cout<<newArray[b]<<",";
    }
    cout<<"]"<<endl;
}

int main(){
    int size;
    int array[size];
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=1; i<=size; i++){
        cout<<"Enter Value "<< i<<" :";
        cin>>array[i];
    }
    expand(array, size);
    
    cout<<"The original array is: [";
    for(int i=1; i<=size; i++){
        cout <<array[i]<<",";
        
    }
    cout<<"]"<<endl;
    
   
   
}
