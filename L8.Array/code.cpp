// Linear Search



// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int n){
//     for(int i=0; i<size ; i++){
//         if(arr[i] == n){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){

//     int arr[] = {4 ,2 ,7 ,8 ,3 ,1 ,9};
//     int size = 7;
//     int n=8;
//     cout << linearSearch(arr,size,n) << endl;

//     return 0;
// }





// reverse array


// #include<iostream>
// using namespace std;

// void reverseArray(int arr[], int size){
//     int start = 0, end = size-1;

//     while(start < end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){

//     int arr[] = {4 ,2 ,7 ,8 ,3 ,1 ,9};
//     int size = 7;

//     reverseArray(arr,size);
//     for(int num : arr){
//         cout << num << endl;
//     }
//     return 0;
// }



// optimise approach

#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){

    for(int i = 0; i<size/2;i++){
        swap(arr[i],arr[size-i-1]);
    }
}

int main(){

    int arr[] = {4 ,2 ,7 ,8 ,3 ,1 ,9};
    int size = 7;

    reverseArray(arr,size);
    for(int num : arr){
        cout << num << endl;
    }
    return 0;
}