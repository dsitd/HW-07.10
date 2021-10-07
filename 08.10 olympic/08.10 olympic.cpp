#include <iostream>
using namespace std;


int main()
{
    int n = 0;
    int a = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        cout <<(a * (a - 1)) / 2 << endl;
    }
}
