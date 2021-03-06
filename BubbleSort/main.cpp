#include <iostream>
#include <stdlib.h>
using namespace std;

/*
Go through the list, compare the two neighbor value, if the first is smaller than the second,
keep them, otherwise, exchange them.
Improve: if no change in a loop, it means it is already a sorted list, so stop the loops.
Improve: if max changed id in a loop is x, then the list after id x is already a sorted list, no need to go through again.
*/
void bubbleSort(int val[], int n)
{
    bool changed = true;
    int lastChangedId = n;
    for (int i = n; i > 0 && changed; i--)
    {
        changed = false;
        int j;
        for (j = 0; j < lastChangedId; j++)
        {
            if (val[j] > val[j+1])
            {
                changed = true;
                swap(val[j], val[j+1]);
            }
        }
        lastChangedId = j-1;
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
