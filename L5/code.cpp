#include <iostream>
using namespace std;

int sum(int a, int b){                    // a and b are parameteres
    int s = a + b;
    return s;
}

int minOftwo(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}


int sumN (int n){
    int sum = 0;
    for(int i=1; i<=n ; i++){
        sum += 1;
    }

    return sum;
}

int sumOfDigits(int num){
    int sum = 0;
     
    while (num > 0){
        int lastDig = num % 10;
        num /= 10;

        sum += lastDig;
    }

    return sum;
}


int factN(int n){
    int fact = 1;

    for(int i = 1; i<=n ;i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factN(n);
    int fact_r = factN(r);
    int fact_nmr = factN(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int main(){
    int n = 8,r = 2;
    
    cout << nCr(8,2) << endl;
    return 0;
}