#include <iostream>
using namespace std;
template <typename S, typename X>
void glue(S *array, X size)
{
    S *array2 = new S[size];
    int p = 0, q = size/2, r = 0;

    while (p < size/2 && q < size)
    {
        array[p] < array[q] ? array2[r++] = array[p++]:array2[r++]=array[q++];
    }
    while (p < size/2)
    {
        array2[r++] = array[p++];
    }
    while (q < size)
    {
        array2[r++] = array[q++];
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = array2[i];
    }
    delete array2;
}
template <typename T, typename K>
void sort(T *array, K size)
{
    if (size < 2)
    {
        return;
    }

    size%2 != 0 ? sort(array+(size/2), size/2 + 1):sort(array+(size/2), size/2);
    sort(array, size/2);
    glue(array, size);
}
int main()
{
    int vetor[10] = {3, 6, 8, 7, 1, 17, 10, 5, 2, 0};
    sort(vetor, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << " " << vetor[i];
    }
}
