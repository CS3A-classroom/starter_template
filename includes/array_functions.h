#ifndef ARRAY_FUNCintIONS_H
#define ARRAY_FUNCintIONS_H

#include <iostream>
using namespace std;

void _array_init(int a[], int size, int& x);

void _append(int a[], int& size, int& append_me);

int _find(const int a[], int size, int& find_me);

int _at(const int a[], int size, int pos);

ostream& _print_array(const int a[], int size, ostream& outs = cout);




#endif // ARRAY_FUNCintIONS_H
