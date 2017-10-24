#ifndef TLIB_STRING_H
#define TLIB_STRING_H

#include <cstring>
#include <cstddef>

#define __TLIB_STRING_VERSION "0.0.1"

namespace tlib {
    class string {
        //constructors
        string();
        string(const char *s);
        string(const tlib::string &);

        ~string();
        //opertors

        //comparison operators

        //find and replace

        //split

        void reset();
    private:
        static const int MAX_LENGTH = 65535;
        char * _str = nullptr;
    };
}

#endif //TLIB_STRING_H
