#ifndef MYAPP_H_
#define MYAPP_H_

#include <iostream>

class Myclass {
    public:
        Myclass();
        Myclass(int var);

        int get_variable();
//        float mean(uint64_t w, uint64_t h, float *arr);

    private:
        int variable;
};
#endif
