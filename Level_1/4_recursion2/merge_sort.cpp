#include <iostream>
using namespace std;

void merge(int input[], int si, int mi, int ei)
{
    // copy and sort them into new array
    // copy that arrray into ori array

    int l = (ei + 1) - si;
    int array[l];

    int m = 0;
    for (int i = si; i < mi; i++)
    {
        for (int j = mi + 1; j < ei; j++)
        {
            input[i] < input[j] ? array[m] = input[i] : array[m] = input[j];
            m++;
        }
    }

    // copy elements of temp arr to ori
    int i = 0;
    for (int k = si; k < ei; k++)
    {
        input[k] = array[i];
        i++;
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