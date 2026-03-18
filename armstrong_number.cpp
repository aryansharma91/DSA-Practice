#include<iostream>
using namespace std;

int power(int base, int power){
    int ans = 1;
    for (int i = 0; i < power; i++)
    {
        ans *= base;
    }
    return ans;
}

int main (){

    int nums;
    cin>>nums;
    int original = nums;
    int count = 0;
    int sum = 0;
    int digit;
    int temp = nums;

    // count digits
    while (nums!=0)
    {
        int lastdigit = nums%10;
        count++;
        temp = temp/10;
    }
    
    // armstrong number
    temp = nums;
    while (nums!=0)
    {
        int lastdigit = temp%10;
        sum = sum+power(digit,count);
        temp = temp/10;
    }
    
if (sum == original)
{
   cout << "number is armstrong"<< endl;
}
else{
    cout << "number is not armstrong"<< endl;
}

    return 0;
}