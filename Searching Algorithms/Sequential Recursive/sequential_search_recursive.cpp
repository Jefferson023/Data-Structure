#include <iostream>
using namespace std;
template <typename T, typename X>
bool search(T *array, T key, X n)
{
    if (n < 1)
    {
        return false;
    }

    return array[n-1] == key ? true:search(array, key, n-1);
}
