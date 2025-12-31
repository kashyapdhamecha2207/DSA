// DEREFERENCE POINTER

// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int a = 10;
//     int* ptr = &a;   // &value to address

//     int** parptr = &ptr;

//     cout << &a << endl;
//     cout << &ptr << endl;
//     cout << parptr << endl;
//     cout << *(ptr) << endl;   // *address to value 

//     return 0;
// }




// NULL POINTER 

// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int** ptr = NULL;

//     cout << ptr << endl;
//     cout << *ptr << endl;  // error (we cant dereference null pointer)

//     return 0;
// }





// QUE

// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int a = 5;
//     int *p = &a;
//     int **q = &p;

//     cout << *p << endl;     // 5
//     cout << **q << endl;    // 5
//     cout << p << endl;      // 100 (suppose value a address)
//     cout << *q << endl;     // 100 (suppose value a address)

//     return 0;
// }



// PASS BY REFERENCE

// #include <iostream>
// #include <vector>
// using namespace std ;

// void changeA(int a){   // pass by val
//     a = 20;
// }

// int main(){
//     int a = 10;

//     changeA(a);

//     cout << "inside main fnx : " << a << endl;   //20
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std ;

// void changeA(int* ptr){   // pass by reference using pointers
//     *ptr = 20;
// }

// int main(){
//     int a = 10;
//     changeA(&a);

//     cout << "inside main fnx : " << a << endl;   //20
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std ;

// void changeA(int &b){   // pass by reference using alias
//     b = 20;
// }

// int main(){
//     int a = 10;
//     changeA(a);

//     cout << "inside main fnx : " << a << endl;   //20
//     return 0;
// }




// ARR POINTER

// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 15;
//     arr = &a; // arr pointer is constant pointer (shows error)

//     cout << *arr << endl;   //pointer
//     return 0;
// }





// POINTER ARITHMETIC


// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;  
//     ptr++;           //+4
//     cout << ptr << endl;   
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;  
//     ptr = ptr +2;           //+8
//     cout << ptr << endl;   
//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     cout << *arr << endl;   //1
//     cout << *(arr+1) << endl;   //1
//     cout << *(arr+2) << endl;   //1
//     cout << *(arr+3) << endl;   //1

//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std ;

// int main(){

//     int* ptr2;  // (100)
//     int* ptr1 = ptr2 +2 ;     // (108)

//     cout << ptr1 - ptr2 << endl; // 2. (no. of bites)
//     return 0;
// }