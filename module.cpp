#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void vector_test()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);

    cout << vec.size() << endl;
}
