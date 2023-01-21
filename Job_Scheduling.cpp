#include <iostream>
#include <algorithm>
using namespace std;

struct Task {
    int deadline;
    int profit;
};

bool comparison(Task a, Task b) {
    return (a.profit > b.profit);
}

void task_scheduling(Task arr[], int n) {
    sort(arr, arr+n, comparison);
 
    int result[n]; 
    bool slot[n];
 
    for (int i=0; i<n; i++)
        slot[i] = false;
  
    for (int i=0; i<n; i++)
    {
       for (int j=min(n, arr[i].deadline)-1; j>=0; j--)
       {
          if (slot[j]==false)
          {
             result[j] = i;
             slot[j] = true;
             break;
          }
       }
    }

    cout << "Selected tasks : ";
    for (int i=0; i<n; i++)
        if (slot[i])
            cout << arr[result[i]].profit << " ";
}

int main() {
    Task arr[] = {{2, 100}, {1, 19}, {2, 27},
                  {1, 25}, {3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    task_scheduling(arr, n);
    return 0;
}
