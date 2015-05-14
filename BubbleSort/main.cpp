#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Go through the list, compare the two neighbor value, if the first is smaller than the second,
keep them, otherwise, exchange them.
*/
void bubbleSort(int val[], int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (val[j] > val[j+1])
            {
                swap(val[j], val[j+1]);
            }
        }
        cout << "After loop " << n-i << ":" << endl;
        for (int k = 0; k < n; k++)
        {
            cout << val[k] << " ";
        }
        cout << endl;
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

    bubbleSort(val, num);

    cout << "The number after sort is:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << val[i] << endl;
    }

    return 0;
}
