#include <iostream>
#include <stdlib.h>
using namespace std;

/*
ϣ�������ʵ�ʾ��Ƿ���������򣬸÷����ֳ���С����������DL��Shell��1959�������������
�÷����Ļ���˼���ǣ��Ƚ���������Ԫ�����зָ�����ɸ������У������ĳ������������Ԫ����ɵģ�
�ֱ����ֱ�Ӳ�������Ȼ���������������ٽ������򣬴����������е�Ԫ�ػ������������㹻С��
ʱ���ٶ�ȫ��Ԫ�ؽ���һ��ֱ�Ӳ���������Ϊֱ�Ӳ���������Ԫ�ػ������������£��ӽ�����������
Ч���Ǻܸߵģ����ϣ��������ʱ��Ч���ϱ�ǰ���ַ����нϴ���ߡ�
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
