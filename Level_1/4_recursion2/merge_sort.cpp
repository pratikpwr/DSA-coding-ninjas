#include <iostream>
using namespace std;

void merge(int input[], int si, int mi, int ei)
{
    int n1 = mi - si+1;
    int n2 = si - mi;

    // temp arrays
    int arr1[n1];
    int arr2[n2];

    // copy data into temp arr
    for (int i = 0; i < n1; i++)
        arr1[i] = input[i + si];

    for (int i = 0; i < n2; i++)
        arr2[i] = input[mi + 1 + i];

    int i = 0, j = 0, k = si;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            input[k] = arr1[i];
            i++;
        }
        else
        {
            input[k] = arr2[j];
            j++;
        }
        k++;
    }

    // if some elements from temp arr remains

    while (i < n1)
    {
        input[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        input[k] = arr2[j];
        j++;
        k++;
    }
}
void mergeSortHelper(int input[], int si, int ei)
{
    // base case:
    // empty or single element array
    if (si < ei)
    {
        // split array into 2 parts and sort them
        int mid = (si + ei) / 2;
        mergeSortHelper(input, si, mid);
        mergeSortHelper(input, mid + 1, ei);

        // after splitting 2 half array merge them
        merge(input, si, mid, ei);
    }
}
void mergeSort(int input[], int length)
{
    mergeSortHelper(input, 0, length - 1);
}

int main()
{
    int length = 10;
    //   cin >> length;
    //   int* input = new int[length];
    //   for(int i=0; i < length; i++)
    //     cin >> input[i];

    int input[] = {5, 3, 6, 4, 2, 7, 1, 8, 9, 0};
    mergeSort(input, length);
    for (int i = 0; i < length; i++)        
    {
        cout << input[i] << " ";
    }
}