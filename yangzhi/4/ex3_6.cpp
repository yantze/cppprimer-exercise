#include <iostream>

using namespace std;


int main()
{

    int ia[3][4] = {
        {1, 2, 4, 6},
        {3, 7, 1, 9}
    };

    /* for loop 1 */
    for ( int (*p)[4] = ia; p!= ia+3; ++p)
        for ( int *q = *p; q!= *p+4; ++q)
            cout << *q << " ";
    cout << endl;

    return 0;
}
