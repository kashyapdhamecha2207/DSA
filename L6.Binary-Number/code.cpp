// Decimal To Binary

#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while(decNum > 0){
        int rem = decNum%2;
        decNum = decNum/2;
        ans += (rem * pow);
        pow *= 10;
    }

    return ans;        // 110010
}

int main(){
    int decNum = 50;
    cout << decToBinary(decNum) << endl;
    cout << "1 to 10 binary\n";
    for(int i =1; i<=10 ; i++){
        cout << decToBinary(i) <<endl;
    }

    return 0;    
};


// Binary To Decimal

#include <iostream>
using namespace std;

int binaryToDec(int binaryNum){
    int ans = 0, pow = 1;

    while(binaryNum > 0){
        int rem = binaryNum%10;
        ans += (rem * pow);
        binaryNum = binaryNum/10;
        pow *= 2;
    }

    return ans;       // 50
}

int main(){
    int binaryNum = 110010;
    cout << binaryToDec(binaryNum) << endl;

    return 0;    
};