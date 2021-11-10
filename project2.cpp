
#include "heap.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main( int argc, char** argv ){
    
    cout<<"Yo"<<endl;

    bool (*compare)(int,int) = Heap<int>::lt;
    
    Heap<int> h(compare);

    

    if(argv[1] == "heap"){

        cout<< "populating heap"<<endl;
        
        string line;
        ifstream inF;
        string inFile = argv[2];
        inF.open(inFile.c_str());
        while(getline(inF,line)){
            h.insert(stoi(line));
        }
        inF.close();

        cout<< "populated heap"<<endl;

        cout<< "Min Heap:" << endl;
        cout<< "Size = " << h.get_size() << endl;
        cout<< "Min = " << h.get_root() << endl;
        
    }


    return 0;
}