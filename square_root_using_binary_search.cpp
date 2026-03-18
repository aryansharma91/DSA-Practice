#include<iostream>
using namespace std;

int squareRoot(int n){
    int ans = -1, st = 0, end = n;
    while (st <= end)
    {
        int mid = st + (end - st)/2;

        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid*mid > end)
        {
            st = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
    
}

int main(){



    return 0;
}