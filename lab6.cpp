#include <iostream>
#include <vector>
#include "make_random_vector.hpp"
using namespace std;

int main()
{
    vector v1 = make_random_vector(10, 0, 10);
    for(int e : v1)
        cout << e << " ";
    cout << endl;

    cout << count(v1.begin(), v1.end(), 7) << endl;

    sort(v1.begin(), v1.end());
    for(int e : v1)
        cout << e << " ";
    cout << endl;

}