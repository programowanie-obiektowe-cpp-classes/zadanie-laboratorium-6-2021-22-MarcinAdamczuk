#include <iostream>
#include <vector>
#include "make_random_vector.hpp"
using namespace std;
int x;
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

    vector v2 = make_random_vector(10, 0, 10);
    for(int e : v2)
        cout << e << " ";
    cout << endl;

    // cout << count_if(v2.begin(), v2.end(), [](int a){return a > 7;}) << endl;

    cin >> x;

    cout << count_if(v2.begin(), v2.end(), [](int a){return a > x;}) << endl;

    sort(v2.begin(), v2.end(), greater<int>());
    for(int e : v2)
        cout << e << " ";
    cout << endl;

}