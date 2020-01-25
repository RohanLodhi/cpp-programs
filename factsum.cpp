/* Write a program to sum first N terms of the following Series
1 + X/2! – X2/4! + X3/6! - X4/8! + ……………………… */
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

double series (double x, int n)
{
    double sum = 1, term = 1, fct = 1, p = 1, multi = 1; 
      
    for (int i = 1; i < n; i++) { 
        fct = fct * multi * (multi+1); 
        p = p*x*x; 
        term = (-1) * term;         
        multi += 2; 
        sum = sum + (term * p)/fct; 
    } 
    return sum; 
}

int main()
{
    double x; 
    cout << "Please enter the number" << endl;
    cin >> x;
    int n = 10; 
    auto start = high_resolution_clock::now();
    cout << series(x, n) <<endl; 
    auto end = high_resolution_clock::now();
    auto duration = end - start;
    cout << duration.count() << endl;
    return 0;

}