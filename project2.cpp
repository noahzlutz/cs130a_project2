
#include "heap.h"
#include <iostream>
#include <fstream>
#include <string>


int main( int argc, char** argv ){
    
    bool (*compare)(int,int) = Heap<int>::lt;
    
    Heap<int> h(compare);

    if(argv[1] == "heap"){
        
        string line;
        ifstream inF;
        string inFile = argv[2];
        inF.open(inFile.c_str());
        while(getline(inF,line)){
            h.insert(stoi(line));
        }
        inF.close();

        cout<< "Min Heap:" << endl;
        cout<< "Size = " << h.get_size() << endl;
        cout<< "Min = " << h.get_root() << endl;
        
    }


    return 0;
}