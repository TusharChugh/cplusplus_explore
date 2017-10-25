#include <tstring/tstring.h>

tlib::tstring::tstring() {
    reset();
}
tlib::tstring::tstring(int a) {
    a = 10;
}

tlib::tstring::tstring(const char *input) {
    copy_str(input);
}

tlib::tstring::~tstring() {
    reset();
}

const char* tlib::tstring::copy_str(const char * input) {
    if(input) {
        size_t length = strnlen(input, tlib::tstring::MAX_LENGTH);
        alloc_str(length);
        strncpy((char *)_str, input, length);
        _str_len = length;
    }
    return _str;
}

const char* tlib::tstring::alloc_str(size_t size) {
    if(_str) reset();
    _str_len = (size > tlib::tstring::MAX_LENGTH) ? tlib::tstring::MAX_LENGTH :size;
    _str = new char[_str_len + 1]();
    return _str;
}

void tlib::tstring::reset() {
    if(_str) delete [] _str;
    _str = nullptr;
    _str_len = 0;
}

const char * tlib::tstring::c_str() const {
    return _str;
}