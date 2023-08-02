#include "math.h"

MyArray::MyArray() {}


void MyArray::add(int num) {
    arr.push_back(num);
}

int MyArray::sum() {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}