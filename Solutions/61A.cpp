#include <iostream>

using namespace std;

int main()
{
    string first_line, second_line;

    cin >> first_line >> second_line;

    int n = first_line.length();

    string result = "";

    for (int i = 0; i < n; i++)
        result += first_line[i] == second_line[i] ? "0" : "1";

    cout << result;

    return 0;
}