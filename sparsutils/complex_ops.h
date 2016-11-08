#ifndef COMPLEX_OPS_H
#define COMPLEX_OPS_H
#include <numpy/arrayobject.h>

template <class c_type, class npy_type>
class complex_wrapper : public npy_type 
{

    public:
        complex_wrapper( const c_type r = c_type(0), const c_type i = c_type(0) ){
            npy_type::real = r;
            npy_type::imag = i;
        }
        operator bool() const 
            {
            if (npy_type::real == 0 && npy_type::imag == 0) {
                return false;
            } else {
                return true;
            }
}
