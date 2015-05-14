#include <iostream>
#include <stdlib.h>
using namespace std;

/*
希尔排序的实质就是分组插入排序，该方法又称缩小增量排序，因DL．Shell于1959年提出而得名。
该方法的基本思想是：先将整个待排元素序列分割成若干个子序列（由相隔某个“增量”的元素组成的）
分别进行直接插入排序，然后依次缩减增量再进行排序，待整个序列中的元素基本有序（增量足够小）
时，再对全体元素进行一次直接插入排序。因为直接插入排序在元素基本有序的情况下（接近最好情况），
效率是很高的，因此希尔排序在时间效率上比前两种方法有较大提高。
*/
void shellSort(int val[], int n)
{
    for (int step=n/2; step > 0; step = step/2)
    {
        for (int i = step; i < n; i++)
        {
            if (val[i] < val[i-step])
            {
                int temp = val[i];
                for (int j = i; j >= step && (val[j-step] > temp); j = j-step)
                {
                    swap(val[j], val[j-step]);
                }
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

    shellSort(val, num);

    cout << "The number after sort is:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << val[i] << endl;
    }

    return 0;
}
