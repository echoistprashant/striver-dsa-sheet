#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[100];
    int left = low;
    int right = mid + 1;
    int k = low;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k] = arr[left];
            left++;
        }
        else
        {
            temp[k] = arr[right];
            right++;
        }
        k++;
    }

    while (left <= mid)
    {
        temp[k] = arr[left];
        left++;
        k++;
    }

    while (right <= high)
    {
        temp[k] = arr[right];
        right++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
