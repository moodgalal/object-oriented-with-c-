#include <iostream>

using namespace std;

int main()
{
    int x =5; // This variable now is stored in the stack

    int *y = new int(5); // Now we store it in the heap as the heap is a dynamic memory data structure

    delete(y);
}
