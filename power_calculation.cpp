#include<iostream>
using namespace std;

int power(int base, int expo){
    int ans = 1;

    for (int i = 0; i < expo; i++)
    {
        ans = ans*base;
    }
    return ans;
}

int main(){

    int n;
    cin>> n;

    int expo;
    cin>> expo;

    cout << power(n,expo);
    return 0;
}