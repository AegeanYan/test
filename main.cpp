#include <iostream>
using namespace std;
const int MOD = 2019;

int mul(int a, int b){
    int y = 1, t = a;
    while(b > 0){
        if (b & 1 == 1) y = y * t % MOD;
        b >>= 1;
        t = t * t % MOD;
    }
    return y;
}

int main(){
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d\n", mul(a, n));
    return 0;
}







