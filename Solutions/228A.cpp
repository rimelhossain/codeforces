#include <iostream>
#include<unordered_map>

using namespace std;

int main()
{
    int shoe_colors[4];

    for (int i=0; i < 4; i++) {
        cin >> shoe_colors[i];
    }

    unordered_map<int, int> color_counts;

    for (int i=0; i<4; i++) {
        color_counts[shoe_colors[i]]++;
    }

    int needed = 0;

    for (pair<int, int> p: color_counts) {
        needed += p.second - 1;
    }

    printf("%d", needed);

    return 0;
}