include <iostream>

#include <cstdlib>

#include "Sequence.h"

using namespace std;

int main ( )

{

     Sequence bag1;

     bag1.insert(1);

     bag1.insert(2);

     bag1.insert(3);

     bag1.insert(4);

     bag1.insert(5);

     bag1.start( );

     cout << bag1.current( ) << endl;

     system ("pause");

     return 0;

}