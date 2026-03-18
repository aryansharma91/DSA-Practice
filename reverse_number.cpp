#include<iostream>
using namespace std;

int main(){

int nums;
cin>>nums;
int rev = 0;

int original = nums;

while (nums!=0)
{
    int digit = nums%10;
    rev = rev*10+ digit;
    nums = nums/10;
}

cout << "reverse number is "<< rev<< endl;

    return 0;
}