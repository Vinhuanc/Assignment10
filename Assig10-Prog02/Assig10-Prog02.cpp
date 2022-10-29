//Huan Chen Assignment10-Program02
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

//int *reverse(int[], int);
//void print(int[], int);
//
//int main(){
//    int size, array[size];
//    cout<<"Enter the size of the array : ";
//        cin>>size;
//        for(int i=1; i<=size; i++){
//            cout<<"Enter Value "<<i<<" : ";
//            cin>>array[i];
//        }
//cout<<"The original array is : ";
//print(array,size);
//int *reversedArray=reverse(array, size);
//cout<<"The reverse array is : ";
//print(reversedArray, size);
//
//}
//
//int *reverse(int a[],int size){
//int i,j;
//if(size<=0)
//return NULL;
//int *copy = new int[size];
//for(i=1;i<=size;i++)
//copy[i]=a[size-i-1];
//return copy;
//}
//
//void print(int a[],int size)
//{int i;
//for(i=1;i<=size;i++)
//cout<<a[i] << " ";
//cout << endl;
//}



//void reverse(int arr[], int n) {
//    reverse(arr, arr + n);
//    cout<<"The inverse array is: [";
//    for(int i=1; i<=n; i++){
//        cout<<arr[i]<<",";
//    }
//    cout<<"]"<<endl;
//
//
//}
//void reverseArrayInPlace(int * array,int length){
//    int i,temp[length];
//    for(  i=0;i<length;i++){
//        temp[i]=array[length-i-1];
//    }
//    for(  i=0;i<length;i++){
//        array[i]=temp[i];
//    }
//}
//    int *copyPtr =copy;
//    for(int i=1; i<=size; i++){
//        reverse_iterator<array[i]>;
//    }
   

//    int temp;
//        for(int i = 0; i<size/2; i++){
//            temp = array[i];
//            array[i] = array[size-i-1];
//            array[size-i-1] = temp;
//        }
//        for(int i = 1; i <= size; i++){
//            cout << array[i] << " ";
//        }
//    for(int i=1; i<=size; i++){
//        reverse[i] = max
//    }
    
//    int start =0;
//    int end = size -1;
//    while (start < end)
//        {
//            int temp = array[start];
//            array[start] = array[end];
//            array[end] = temp;
//            start++;
//            end--;
//        }
    
   // int *reverseArray =
  //original array, correct
//    for(int i=1; i<=size; i++){
//        cout<<"The contents of the array is: "<<copy[i];
//    }


int main(){
    int size;
    int array[size];
    int *ptr = nullptr;
    ptr=array;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i=1; i<=size; i++){
        cout<<"Enter Value "<< i<<" :";
        cin>>array[i];
    }
    cout<<"The original array is: [";
    for(int i=1; i<=size; i++){
        cout <<array[i]<<",";
        
    }
    cout<<"]"<<endl;
//    reverseArrayInPlace(array, size);
//    for(int i=0;i<5;i++){
//        printf("%d ",array[i]);
//    }
  //  int reversedArray=reverse(array, size);
  //  copyArray(array, size);
//    reverse(array, size);
    // cout<< reverse(array, size);
    
    
    
}
