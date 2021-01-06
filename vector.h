#ifndef ARRAY_VECTOR_H
#define ARRAY_VECTOR_H


#include "./includes/array_functions.h"
#include "./includes/consts.h"
#include <iostream>
using namespace std;

class Vector{
  public:
    Vector();
    Vector(int a[], int size);

    void append(int item);
    int search(int key) const;
    int at(int pos) const;
    int size() const;
    friend ostream &operator<<(ostream &outs, const Vector &v);

  private:
    int _a[MAX];
    int _size;
};

#endif