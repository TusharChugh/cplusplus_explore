#ifndef TLIB_STRING_STRING_H
#define TLIB_STRING_STRING_H

#include <cstring>
#include <cstddef>


#define __TLIB_STRING_VERSION "0.0.1"

namespace tlib {
    class tstring {
    public:
        //constructors
        tstring();
        tstring(const char* input);
        tstring(const tstring &);
        tstring(int a);

        ~tstring();

        //data management
        const char* alloc_str(size_t size);
        void reset();
        const char * copy_str(const char * input);
        const char * c_str() const;

        //opertors

        //comparison operators

        //find and replace

        //split


    private:
        static const int MAX_LENGTH = 65535;
        char * _str = nullptr;
        size_t _str_len = 0;
    };
}

#endif //TLIB_STRING_STRING_H
