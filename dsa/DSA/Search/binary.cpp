#include<iostream>
using namespace std;
int binary(int array[] , int x, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high)/2;

        if(array[mid] == x)
            return mid;
        if(array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void)
{
    int array[] = {3,4,5,6,7,8,9};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 6;
    int result = binary(array, x, 0, n - 1);
    if(result == -1)
        cout<<"NotFound";
    else
        cout<<"Element is found at index: "<<result;
    return 0;
}