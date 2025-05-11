#include <iostream>
using namespace std;
void sort(int arr[], int size);
int main() {
    int arr[] = {10, 3, 5, 8, 9, 14, 1};
    int size = sizeof (arr) / sizeof(arr[0]);
    sort(arr, size);
    return 0;
}