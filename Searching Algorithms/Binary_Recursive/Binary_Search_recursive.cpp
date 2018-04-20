#include <iostream>
using namespace std;
template <typename T, typename S>
bool search(T *array, T key, S n)
{
    if (n < 1)
    {
        return false;
    }
    if (array[(n)/2] == key)
    {
        return true;
    }
    key < array[(n)/2] ? search(array, key, (n)/2):search(array+n/2+1, key, n-(n/2)-1);// if the condition is true, search in the first half, else second half
}
