
#include "heap.h"

int main(){
    
    bool (*compare)(int,int) = Heap<int>::gt;
    
    Heap<int> h(compare);


    return 0;
}