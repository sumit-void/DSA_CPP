#include <iostream>
using namespace std;

int main(){
    // Subtract the Product and Sum of Digits of an Integer

    int n;
    cin >> n;

    int prod =1;
    int sum = 0;


    while (n != 0)
    {
        int rem = n%10;

        prod = prod* rem;
        sum = sum + rem;

        n = n/10;
    }
    int res = prod - sum;
    cout << res;

    return 0;
}
