#include <iostream>
using namespace std;
template <typename T, typename C>
bool search(T *array, T key, C n)
{
    for (int iterator = 0; iterator < n; iterator++)
    {
        if (array[iterator] == key)
        {
            return true;
        }
    }
    return false;
}
