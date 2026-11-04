#include<iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    int gifts_given_to[n];
    int gifts_received_from[n];


    for (int i=0; i<n; i++) {
        cin >> gifts_given_to[i];
        gifts_given_to[i]--;
    }

    for (int i=0; i<n; i++) {
        gifts_received_from[gifts_given_to[i]] = i+1;
    }

    for (int i=0; i<n; i++) {
        printf("%d ", gifts_received_from[i]);
    }


    return 0;
}