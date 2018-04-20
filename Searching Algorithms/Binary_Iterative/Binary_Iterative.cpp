#include <iostream>
using namespace std;
template <typename T, typename S>
bool search(T *array, T key, S n)
{
    if (n < 1)
    {
        return false;
    }

    int begin = 0;
    int end = n-1;

    while (begin <= end)
    {
        int p = (begin+end)/2;
        if (array[p] == key)
        {
            return true;
        }
        key < array[p] ? end = p-1:begin = p+1;

    }
    return false;

}
