int list[];
int prev[];
int next[];

void insert_node(int i, int x)
{
    prev[x] = prev[i];
    next[x] = i;
    next[prev[x]] = x;
    prev[i] = x;
}

void delete_node(int x)
{
    next[prev[x]] = next[x];
    prev[next[x]] = prev[x];
}

void init(int x)
{
    list[0] = x;
    prev[x] = 0;
    next[x] = 0;
}
