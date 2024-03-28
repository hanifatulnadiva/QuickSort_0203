// QuickSort_0203.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;
int mov_count = 0;
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

void swap(int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void q_short(int low, int high)
{
    int temp;
    int pivot, i, j;

    if (low > high) { //step 1
        return;  //step 1a
    }
    pivot = arr[low]; //step 2
    i = low + 1; //step 3
    j = high; //step 4

    while (i <= j) //step 10
    {
        while ((arr[i] <= pivot) && (i <= high)) //step 5
        {
            i++; //step6
            cmp_count++;
        }
        cmp_count++;
        while ((arr[j] > pivot) && (j>=low)) //step 7
        {
            j--; //step 8
            cmp_count++;
        }
        cmp_count++;
        if (i < j) //step 9
        {
            swap(1, j);
        }

    }

    if (low < j) //step 11
    {
        swap(low, j);
    }
    q_short(low, j - 1); //step 12

    q_short(j + 1, high); //step 13

}

int main()
{
    std::cout << "Hello World!\n";
}

