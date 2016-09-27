
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

    float *     input_array;
    float *     input_array2;
    
    float *     output_array1;
    float *     output_array2;
    float *     output_array3;

    // parameter values

    int       int_start_parameter;
};

#endif
