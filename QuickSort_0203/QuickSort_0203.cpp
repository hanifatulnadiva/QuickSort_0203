// QuickSort_0203.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int cmp_cout = 0;
int mov_cout = 0;
int n;

void input() {
    while (true) {
        cout << "masukan jumlah data pada array:"; 
        cin >> n; 
        if (n <= 20) 
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
        
    }
}
int main()
{
    std::cout << "Hello World!\n";
}

