    #include "vector.h"
    #include "./includes/array_functions.h"
    Vector::Vector(){
      _size = 0;
    }
    Vector::Vector(int a[], int size){
      for (int i = 0; i < size; i++){
        _a[i] = a[i];
      }
      _size = size;
    }

    void Vector::append(int item){
      //assert(_size < MAX - 1 && "Vector::append: OVERFLOW ERROR");
      _append(_a, _size, item);
    }
    int Vector::search(int key) const{
      return _find(_a, _size, key);
    }
    int Vector::at(int pos) const{
      //assert(pos < _size && "Vector::at() : POS OUT OF BOUNDS ERROR.");
      return _at(_a, _size, pos);
    }
    int Vector::size()const {
      return _size;
    }
    ostream &operator<<(ostream &outs, const Vector &v){
      return _print_array(v._a, v._size, outs);
    }
