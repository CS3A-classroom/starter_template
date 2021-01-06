#include "array_functions.h"
#include "cassert"

void _array_init(int a[], int size, int& x){
    for (int i=0; i<size; i++){
        a[i] = x;
    }
}

void _append(int a[], int& size, int& append_me){
    a[size++] = append_me;

}

int _find(const int a[], int size, int& find_me){
    for (int i=0; i<size; i++){
        if (a[i] == find_me) return i;
    }
    return -1;
}
int _at(const int a[], int size, int pos){
  assert(pos < size);
  return a[pos];
}

ostream& _print_array(const int a[], int size, ostream& outs){
    for (int i=0; i<size; i++){
        outs<<a[i]<<"|";
    }
    return outs;
}
