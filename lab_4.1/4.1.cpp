#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int I, N, i;
    double S;

    cout << "I = "; cin >> I;
    cout << "N = "; cin >> N;

    S = 0;
    i = I;
    while (i <= N)
    {
        S += sin(1. * i) / (1 + cos(1. * i));
        i++;
    }
    cout << S << endl;

    S = 0;
    i = I;
    do {
        S += sin(1. * i) / (1 + cos(1. * i));
        i++;
    } while (i <= N);
    cout << S << endl;

    S = 0;
    for (i = I; i <= N; i++)
    {
        S += sin(1. * i) / (1 + cos(1. * i));
    }
    cout << S << endl;

    S = 0;
    for (i = N; i >= I; i--)
    {
        S += sin(1. * i) / (1 + cos(1. * i));
    }
    cout << S << endl;

    return 0;
}
