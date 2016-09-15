
#ifndef FirstModule_
#define FirstModule_

#include "IKAROS.h"

class FirstModule: public Module
{
public:
    static Module * Create(Parameter * p) { return new FirstModule(p); }

    FirstModule(Parameter * p) : Module(p) {}
    virtual ~FirstModule() {};
    
    
    int		t;

    void 		Init();
    void 		Tick();

    // pointers to inputs and outputs
    // and integers to represent their sizes

    float *     output_array;
    int         output_array_size;

    // parameter values

    float       degrees;
};

#endif
