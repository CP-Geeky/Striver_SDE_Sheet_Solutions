#include<bits/stdc++.h>
using namespace std;

int maxProfit(int arr[]) {
    int maxPro = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < 6; i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }

    return maxPro;
}
int main() {
    int arr[] = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}