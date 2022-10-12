#include <iostream>
using namespace std;
int main()
{
    int n1 = 5, n2 = 10, max;
    max = (n1 > n2) ? n1 : n2;
    cout << "Largest number between " << n1 << " and " << n2 << " is "<< max<<endl;
    return 0;
}
