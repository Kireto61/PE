//
// Created by Kiril Valkov on 9.10.24.
//
#include <iostream>
class Worker{
private:
    int num,yearOfWork;
    char *name,*type;
    int salary[7];
public:
    Worker();
    Worker(char *type);
    void sumsalary(int salary[7]);
    void minsalary(int salary[7]);

    int getNum() const;

    void setNum(int num);

    int getYearOfWork() const;

    void setYearOfWork(int yearOfWork);

    char *getName() const;

    void setName(char *name);

    char *getType() const;

    void setType(char *type);

    const int *getSalary() const;

};

Worker::Worker() {
    num=0;
    yearOfWork=0;
}
Worker::Worker(char *type) {
    strcpy(this->type, type);
}

void Worker::sumsalary(int salary[7]) {
    int sum=0;
    for (int i = 0; i < sizeof(this->salary)/sizeof(this->salary[0]); i++) {
        sum+=salary[i];
    }
    std::cout<<"sum is"<<sum;
}

int Worker::getNum() const {
    return num;
}

void Worker::setNum(int num) {
    Worker::num = num;
}

int Worker::getYearOfWork() const {
    return yearOfWork;
}

void Worker::setYearOfWork(int yearOfWork) {
    Worker::yearOfWork = yearOfWork;
}

char *Worker::getName() const {
    return name;
}

void Worker::setName(char *name) {
    Worker::name = name;
}

char *Worker::getType() const {
    return type;
}

void Worker::setType(char *type) {
    Worker::type = type;
}

const int *Worker::getSalary() const {
    return salary;
}

void Worker::minsalary(int salary[7]) {
    int min=salary[0];
    for (int i = 1; i < sizeof(this->salary)/sizeof(this->salary[0]); i++) {
        if(min>salary[i]){
            min=salary[i];
        }
    }
    std::cout<<"min is"<<min;
}





