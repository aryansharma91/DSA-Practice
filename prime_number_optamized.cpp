#include<iostream>
using namespace std;

void primeOrNot(int num){

    if (num <= 1)
    {
       cout<< "not prime"<< endl;
       return;
    }
    
    for (int i = 2; i*i <= num; i++)
    {
        if (num%i == 0)
        {
            cout << "not prime";
            return;
        }
    }
    cout<< "prime number ";
}

int main(){

    int nums;
    cin>> nums;

    primeOrNot(nums);

    return 0;
}