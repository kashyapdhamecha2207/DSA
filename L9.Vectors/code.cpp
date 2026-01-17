// vector fuctions

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vec;

//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);

//     cout << "after push back size = " << vec.size() << endl;

//     vec.pop_back();

//     cout <<. vec.at(2) <<. endl;

//     return 0;
// }




// Static v/s Dynamic
// Vector can resize because it has dynamical memory allocation
// static memory allocation in stack
// Dynamic memory allocation in heap

 


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << vec.size() << endl;               // 3
    cout << vec.capacity() << endl;          // 4

    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;               // 5
    cout << vec.capacity() << endl;            // 8

    return 0;
}


// leetcode 136 completed