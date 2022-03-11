#include "array.h"

Array::Array()
{
    size = 0;
    data = NULL;
    printf ("default constructor\n");
}

Array::Array(int size_)
{
    size = size_;
    data = new int [size];
    printf ("size constructor\n");
}

Array::~Array ()
{
    printf ("destructor start\n");
    delete[] data;
    printf ("destructor finish\n\n");
}

Array::Array (Array const& obj)
{
    size = obj.size;
    data = new int [size];
    memcpy (data, obj.data, sizeof(int)*size);
}

Array& Array::operator=(const Array& obj)
{
    //size = obj.size;
    //data = new int [size];
    //memcpy (data, obj.data, sizeof(int)*size);
    return *this;
}