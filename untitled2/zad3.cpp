//
// Created by Kiril Valkov on 9.10.24.
//

#include <iostream>
#include <stdlib.h>

class Draw {
private:
    int size;
public:
    Draw(int size);
    ~Draw();

};

Draw::Draw(int size) {
    this->size=size;
    for (int i = 0; i <this->size ; ++i) {
        std::cout<<"*";
    }
}

Draw::~Draw() {
    system("clear");
}



int main() { Draw a(5); system("sleep 5s"); }