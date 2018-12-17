/*
 * algorithm name:bucket sort(桶排序)
 * author：yangjie
 * date：2017.12.23
 * version：1.0
 * Time complexity:O(M+N)(the M is bucket number)(the N is input number)
*/
#include <stdio.h>
#define NUMBER 1024

int main(int /*argc*/, char **/*argv[]*/)
{
    int sort[NUMBER], i, j, t, n;
    for(i = 0; i < NUMBER; i++)
    {
        //赋初值
        sort[i] = 0;
    }
    //输入个数
    scanf("%d", &n);
    for(j = 0; j < n; j++)
    {
        //输入数字
        scanf("%d", &t);
        sort[t]++;
    }
    //输出排序
    for(i = 0; i < NUMBER; i++)
    {
        for(j = 0; j < sort[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
    //getchar();
    return 0;
}
