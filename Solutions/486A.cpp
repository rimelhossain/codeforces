#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double n;

    cin >> n;

    long long int result = ceil(n / 2) * pow(-1, n);

    printf("%lld", result);

    return 0;
}

// 