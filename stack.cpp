#include <iostream>

const int N = 10010;

int stk[];
int tt;

void push(int x)
{
	stk[++tt] = x;

}

void add(int x)
{
    stk[++k] = x;
}

int pop()
{
	return stk[tt--];
}

bool empty()
{
	return tt == 0;
}

int peek()
{
	return stk[tt];
}
