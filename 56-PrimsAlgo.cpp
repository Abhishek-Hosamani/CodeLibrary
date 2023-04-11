#include <stdio.h>
int N, M;

typedef struct graph
{
    int u, v, w;

} GRAPH;

void swap(GRAPH *a, GRAPH *b)
{
    GRAPH temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(GRAPH arr[M])
{
    for (int i = 0; i <= M - 2; i++)
    {
        for (int j = 0; j <= M - 2 - i; j++)
        {
            if (arr[j].w > arr[j + 1].w)
            {
                swap(&arr[j], &arr[j + 1]);
            }

            else if (arr[j].w == arr[j + 1].w)
            {
                if (arr[j].u + arr[j].v + arr[j].w > arr[j + 1].u + arr[j + 1].v + arr[j + 1].w)
                {
                    swap(&arr[j], &arr[j + 1]);
                }

                else if (arr[j].u + arr[j].v + arr[j].w == arr[j + 1].u + arr[j + 1].v + arr[j + 1].w)
                {
                    if (arr[j].u > arr[j].v)
                    {
                        swap(&arr[j], &arr[j + 1]);
                    }
                }
            }
        }
    }
}

int find(int a[], int x)
{
    return a[x];
}

void union_arr(int a[], int u, int v)
{
    int temp = a[u];
    for (int i = 0; i < M; i++)
    {
        if (a[i] == temp)
        {
            a[i] = a[v];
        }
    }
}

void min(GRAPH arr[M])
{
    int a[M], cost = 0;
    for (int i = 0; i < N; i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0; i < M; i++)
    {
        int k = find(a, arr[i].u);
        int l = find(a, arr[i].v);

        if (k != l)
        {
            cost = cost + arr[i].w;
            union_arr(a, arr[i].u, arr[i].v);
        }
    }

    printf("%d", cost);
}

int main()
{
    scanf("%d%d", &N, &M);
    GRAPH arr[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d%d", &arr[i].u, &arr[i].v, &arr[i].w);
    }

    int s;
    scanf("%d", &s);
    bubblesort(arr);
    min(arr);
}