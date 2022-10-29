//Huan Chen Assignment10-Program02
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

int *reverseArray(int array[], int size){
    int *temp = new int[size];
    for(int i=0; i<size; i++){
    temp[i] = array[size-1-i];
}
    return temp;

}


int main(){
    int size;
    int *ptr;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int *array = new int[size];

    for(int i=0; i<size; i++){
        cout<<"Enter Value "<< i+1<<" :";
        cin>>array[i];
    }
    
    ptr = reverseArray(array, size);
    cout<<"The reversed array is: [";
    for(int i = 0; i < size; i++){
        cout << ptr [i] << ", ";
    }
cout<<"]"<<endl;
cout<<"The original array is: [";
for(int i=0; i<size; i++){
cout <<array[i]<<",";
}

cout<<"]"<<endl;

}
//Program #2
//Write a function that accepts an integer array and size as arguments. The function should create a copy of the array, except that the elements should be reversed in the copy. The function should return a pointer to the new array (i.e. return the array itself).
//In the main function, you should ask the user how big the array will be, create the first array, and then fill the array with values from the user
//Sample Outputs:
//Enter the size of the array: 4 Enter Value 1: 1
//Enter Value 2: 2
//Enter Value 3: 3
//Enter Value 4: 4
//The reversed array is: [4, 3, 2, 1] The original array is: [1, 2, 3, 4] Press any key to continue . ..
