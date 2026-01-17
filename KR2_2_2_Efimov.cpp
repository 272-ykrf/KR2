#include <iostream>

using namespace std;

double square_sum(int n) {
    if (n == 1) {
        return sqrt(n + 1);
    }
    else {
        return sqrt(n + 1) + square_sum(n - 1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << square_sum(n) << endl;
}