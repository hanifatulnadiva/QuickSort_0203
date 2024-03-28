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
        cout << "masukan panjang element array:"; 
        cin >> n; 
        if (n <= 20) 
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
  
    }
    cout << "\n------------------" << endl;
    cout << "\nEnter Array Elemen" << endl;
    cout << "\n------------------" << endl;

    for (int i = 0; i < 1; i++)
    {
        cout << "<" << (i + 1) << "<";
        cin >> arr[i];
    }
}
int main()
{
    std::cout << "Hello World!\n";
}

