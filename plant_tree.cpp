#include <iostream>

const int N = 1e5 + 10;
int a[N];
int ct;

// My implementation of quick sort
void my_sort(int a[], int l, int r)
{
	if (l >= r) return;

    int x = arr[(l + r) >> 1], i = l - 1, j = r + 1;

    while (i < j)
    {
        do i++; while (arr[i] < x);
        do j--; while (arr[j] > x);
        if (i < j) swap (arr[i], arr[j]);
    }

    my_sort(arr, l, j);
    my_sort(arr, j + 1, r);
}

int get_count(int a[])
{
	my_sort(a, 0, a - 1);
	return a[0] + 3;
}

int main
{
	scanf("%d", &ct);
	for (int i = 0; i < ct; i++) scanf("%d", &a[i]);
	int res = get_count(a);
	printf("%d", res);
}