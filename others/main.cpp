#include <iostream>
using namespace std ;

int main() {
    int array[20]={0};
    int *ptr=array;
    int i;
    for(i=0;i<20;i++)
    {
        (*ptr)++;
        ptr++;
        cout << "array[" <<i<<"]的值为："<< (*ptr) <<endl;
    }
    return 0;
}