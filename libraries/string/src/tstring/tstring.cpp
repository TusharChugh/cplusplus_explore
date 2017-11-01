#include <tstring/tstring.h>

tlib::tstring::tstring() {
    reset();
}

tlib::tstring::tstring(const char *str) {
    copy_str(str);
}

tlib::tstring::tstring(tstring && str) noexcept {
    reset();
    _str = str._str;
    _str_len = str._str_len;
    str.reset();
}

tlib::tstring::~tstring() {
    reset();
}

const char* tlib::tstring::copy_str(const char * str) {
    if(str) {
        size_t length = strnlen(str, tlib::tstring::MAX_LENGTH);
        alloc_str(length);
        strncpy((char *)_str, str, length);
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