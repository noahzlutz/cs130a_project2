#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

template <class T> 
class Heap{
    
    public:
        Heap(bool (*compare)(T,T));
        void insert(T value);
        void remove(T value);
        T get_root();
        T extract_root();
        T get_min();
        T get_max();
        int get_size(); //should be O(1)
        bool search();

        bool (*compare)(T,T);
        static bool gt(T a, T b) {return a>b;}
        static bool lt(T a, T b) {return a<b;}

    private:
        
        vector<T> heap;
        T root;
        int type; //0 for min, 1 for max
        int size;
        T largest;
        T smallest;
        void bubble_up();
         
};

template <class T>  ////Maybe done
Heap<T>::Heap(bool (*compare)(T,T)): compare(compare),size(0){}

template <class T>
void Heap<T>::insert(T value){ ////TO DO
    if(heap.size() == 0)){
        heap.push_back(value);
    }else{
        heap.push_back(value);
        bubble_up();
    }
    size += 1;
    return;
}

template <class T>
void Heap<T>::bubble_up(){

    size_t x = size;
    size_t y = (size-1)/2;

    while(compare(heap[x], heap[y])){
        swap(heap[x], heap[y]);
        x = (x-1)/2;
        y = (((x-1)/2)-1)/2;
    }
}

template <class T>
void Heap<T>::remove(T num){ ////TO DO

}

template <class T>
int Heap<T>::get_size(){
    return size;
}


#endif