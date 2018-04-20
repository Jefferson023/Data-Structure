#include <iostream>
using namespace std;
template<typename T, typename I>
void switches(T *array, I i, I j)
{
    T aux = array[i];
    array[i] = array[j];
    array[j] = aux;
}
template <typename T, typename I>
int sort2(T *array, I size)
{
    int p = 0, p1 = 1, p2 = size-1;
    while (p2 > p1)
    {
        while (array[p1] < array[p] && p2 > p1)
        {
            p1++;
        }
        while (array[p2] > array[p])
        {
            p2--;
        }
        if (p2 > p1)
        {
            switches(array, p2, p1);
        }
    }
    switches(array, p, p2);
    return p2;
}
template <typename T, typename I>
void sort(T *array, I size)
{
    int p = sort2(array, size);
    sort(array, p);
    sort(array+p+1, size-p-1);
}
int main()
{
    int vetor[10] = {3, 6, 8, 7, 1, 17, 10, 5, 2, 0};
    //sort(vetor, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << " " << vetor[i];
    }
    return 0;
}
