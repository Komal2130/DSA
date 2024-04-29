#include<iostream>
using namespace std;
int arraySum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;

    }
    return arr[size - 1] + arraySum(arr, size - 1);
}

int main()
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(nums) / sizeof(nums[0]);

    cout<<"Array elements: "<<endl;
    for(int i = 0; i < size;i++)
    {
        cout<< nums[i] << ' ';
    }

    //Calculate the sum of the array elements using recursion

    int sum = arraySum(nums, size);

    cout<< "\nSum of array elements using recursion: " << sum << endl;
    return 0;
}



// void recurse 
//In recursion absence of if-else will lead to infinite loop

//