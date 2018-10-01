#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

class Stack{

public:
    int array[MAX_SIZE];
    int index;

    Stack(){
        index = -1;
    }

    bool push(int num){
        
    }
};

int main() {

    Stack stack1;
    cout << "index " << stack1.index<< endl;


    return 0;
}