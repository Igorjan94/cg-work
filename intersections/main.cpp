#include <iostream>

#include <operations/orientation.h>
#include <primitives/point.h>

using namespace std;
using namespace cg;

int main()
{
    point_2t<double> s(0.5, 1.0);
    point_2t<double> s1(0.0, 0.0);
    point_2t<double> s2(0.25, 0.4999999);
    cout << orientation(s, s1, s2) << "\n";
    cout << orientation(s, s2, s1) << "\n";
    cout << "Hello World!" << endl;
    return 0;
}

