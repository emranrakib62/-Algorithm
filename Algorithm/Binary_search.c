#include <stdio.h>

int binarySearch(int a[], int x, int low, int high) {

while (low <= high) {

int mid = low + (high - low) / 2;

if (a[mid] == x)

return mid;

if (a[mid] < x)

low = mid + 1;

else

high = mid - 1;

}

return -1;

}
int main(void) {

int a[] = {3, 4, 5, 6, 7, 8, 9};

int n = sizeof(a) / sizeof(a[0]);

int x = 8;

int result = binarySearch(a, x, 0, n - 1);

if (result == -1)

printf("Not found");

else

printf("Element is found at index %d", result);

return 0;

}
