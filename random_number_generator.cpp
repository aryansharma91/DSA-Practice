#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));  // seed

    int randomNumber = rand() % 100; // 0 to 99
    cout << "Random Number: " << randomNumber << endl;

    return 0; 
}