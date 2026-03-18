#include<iostream>
using namespace std;

int main(){

    int nums;
    cin>>nums;
    int count = 0;
    

    while (nums!= 0)
    {
        int digit = nums%10;
        count++;
        nums = nums/10;
    }
    
    cout<<"count is "<<count<<endl;

    return 0;
}