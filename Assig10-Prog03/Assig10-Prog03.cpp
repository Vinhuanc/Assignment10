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

//Program #3
//Write a function that accepts an integer array and size as arguments. The function should create a new array that is twice the size of the first array. The function should copy the contents of the first array to the new array and initialize the unused elements of the second array with zeros. The function should return a pointer to the new array (i.e. the array itself)
//In the main function, you should ask the user how big the array will be, create the first array, and then fill the array with values from the user
//Sample Outputs:
//Enter the size of the array: 6
//Enter Value 1: 1
//Enter Value 2: 2
//Enter Value 3: 3
//Enter Value 4: 4
//Enter Value 5: 5
//Enter Value 6: 6
//The expanded array is: [1, 2, 3, 4, 5, 6, 0, 0, 0, 0, 0, 0] The original array is: [1, 2, 3, 4, 5, 6]
//Press any key to continue . ..
