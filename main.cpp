#include <iostream>
#include "vector.h"

using namespace std;

int main(int argv, char** argc) {
    Vector v;
    for (int i = 0; i < 10; i++){
        v.append(i);
    }
    cout << v << ": " << v.size() << endl;
    cout << "\n\n\n=====================" << endl;
    return 0;
}
