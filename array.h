#include <cstdlib>
#include <stdio.h>
#include <string.h>

class Array
{
    private:
    size_t size;
    int * data;
    
    public:
    Array ();
    Array (int size_);
    Array (Array const& obj);
    ~Array ();
    Array& operator=(const Array&);
    
};