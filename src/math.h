#include <vector>

class MyArray {
private:
    std::vector<int> arr;

public:
    MyArray();

    void add(int num);

    int sum();
};