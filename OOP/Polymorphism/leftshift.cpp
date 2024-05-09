#include<iostream>
using namespace std;

class Test {
private:
    int num;

public:
    Test() : num(2) {}

    // Overload the left shift operator as a member function
    void operator<<(int shift) {
        num = num << shift; // Perform left shift on the num member variable
    }

    void Print() {
        cout << "The count is: " << num;
    }
};

int main() {
    Test tt;
    tt << 5; // Shift the value left by 5 bits
    tt.Print();
    return 0;
}
