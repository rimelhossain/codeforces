#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n], b[n];

  for (int i=0; i<n; i++) {
    cin >> a[i] >> b[i];
  }

  int max_passenger_count = 0;
  int current_passenger_count = 0;

  for (int i=0; i<n; i++) {
    current_passenger_count += b[i] - a[i];
    if (current_passenger_count > max_passenger_count){
      max_passenger_count = current_passenger_count;
    }
  }

  cout << max_passenger_count;

  return 0;
}