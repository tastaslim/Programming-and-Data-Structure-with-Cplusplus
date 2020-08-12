// Here we have find numbe of occurence / Frequency
// of a given number in sorted array.
#include <iostream>
using namespace std;
int BS(int *arr, int size, int x)
{
    int start = 0, end = size - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            if (arr[ans] == arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[12] = {1, 3, 3, 3, 3, 4, 6, 8, 9, 9, 10};
    //int arr[7] = {123, 122, 43, 24, 16, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int valuetofind;
    cin >> valuetofind;
    int ans = BS(arr, size, valuetofind);
    cout << ans << endl;
    return 0;
}