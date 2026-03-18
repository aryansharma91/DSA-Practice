#include<iostream>
using namespace std;
int main(){
 int num;
 cin>>num;
 int count = 0;
 
 for (int i = 1; i <= num; i++)
 {
    if (num%i == 0)
    {
       count++;
    }
 }

  if (count == 2)
    {
        cout<<"nums is a prime";
    }
    else{
        cout<<"nums is not prime";
    }
 return 0;
}