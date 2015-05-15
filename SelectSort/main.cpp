#include <iostream>
#include <stdlib.h>
using namespace std;

/*
从无序数列中选出一个最小的，放在有序数列的最后
*/
void selectSort(int val[], int n)
{
    int k, minId;
    for (int i = 0; i < n; i++)
    {
        minId = i;
        for (int j = i; j < n; j++)
        {
            if (val[minId] > val[j])
            {
                minId = j;
            }
        }
        if (minId != i)
            swap(val[i], val[minId]);
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

    selectSort(val, num);

    cout << "The number after sort is:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << val[i] << endl;
    }
    return 0;
}
