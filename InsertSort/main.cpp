#include <iostream>
#include <stdlib.h>
using namespace std;

/*
For each value, compare with the sorted list, find the proper position,
move the sorted list to empty the position and put the value into the position
*/
void insertSort(int val[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (val[i] < val[i-1])
        {
            for (int j = i; j > 0 && (val[j-1] > val[j]); j--)
            {
                swap(val[j], val[j-1]);
            }
        }
        //cout << "After loop " << i << ":" << endl;
        //for (int k = 0; k < n; k++)
        //{
        //    cout << val[k] << " ";
        //}
        //cout << endl;
    }
}

int main()
{
    int num = 15;
    int val[num];
    cout << "The number before sort is:" << endl;
    for (int i = 0; i < num; i++)
    {
        val[i] = rand();
        cout << val[i] << endl;
    }

    insertSort(val, num);

    cout << "The number after sort is:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << val[i] << endl;
    }

    return 0;
}
