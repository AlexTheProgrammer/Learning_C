#include <stdio.h>

void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if(left >= right)
        return;
    swap(v, left, (left + right)/2);
    last = left;
    for( i = left+1; i <= right; i++)
        if (v[i] < v[left])
        swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last-1);
    qsort(v, last+1,right);
}

void swap(int v[], int i, int j)
{
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
main()
{
int a[5] = {3, 4 ,5, 1, 2};

qsort(a , 0 , 4 );

printf("%d" , a[0]);
}
