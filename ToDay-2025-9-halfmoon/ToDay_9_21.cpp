#include<stdlib.h>
#define InitSize 10
typedef struct{
    int *data;
    int length;
    int MaxSize;
}List;

int InitList(List &L)
{
    L.data = (int*)malloc((InitSize)*sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}


int AdditionLen(List &L, int len)
{
    int *q = L.data;
    L.data = (int*)malloc(sizeof(int)*(L.MaxSize+len));
    for(int i=0; i<L.length;i++)
    {
        L.data[i] = q[i]; 
    }
    L.MaxSize = L.MaxSize + len;
    free(q);

}

int main()
{
    List L;
    InitList(L);
    AdditionLen(L, 5);
    return 0;
}