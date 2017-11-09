#include <tstring/tstring.h>
#include <utility>

//Constructors
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

tlib::tstring::tstring(const tstring & str) {
    copy_str(str._str);
}

tlib::tstring::~tstring() {
    reset();
}

//Data management
const char* tlib::tstring::copy_str(const char * str) {
    if(str) {
        size_t length = strnlen(str, tlib::tstring::MAX_LENGTH);
        alloc_str(length);
        strncpy(_str, str, length);
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

void tlib::swap(tstring & str1, tstring & str2) noexcept {
    //enabling ADL with swap is not useful for our case as cstring and int don't have their own swap methods)
    std::swap(str1._str, str2._str);
    std::swap(str1._str_len, str2._str_len);
}

//Operators
tlib::tstring & tlib::tstring::operator=(tstring str) {
    swap(*this, str);
    return *this;
}

tlib::tstring & tlib::tstring::operator+=(const char * rhs) {
    if(rhs) {
        size_t rhs_len = strnlen(rhs, tlib::tstring::MAX_LENGTH);
        size_t combined_length = _str_len + rhs_len;
        combined_length = combined_length < MAX_LENGTH ? combined_length : MAX_LENGTH;
        tstring first(*this);
        alloc_str(combined_length);
        strncpy(_str, first._str, first._str_len);
        strncpy(_str + first._str_len, rhs, rhs_len);
    }
    return *this;
}

tlib::tstring & tlib::tstring::operator+=(const tstring &rhs) {
    operator+=(rhs._str);
    return *this;
}

const char tlib::tstring::operator[](const int index) const {
    if(index < 0 || index >= (int)_str_len) return 0;
    return _str[index];
}

//Comparison operators
bool tlib::tstring::operator==(const tstring &rhs) {
    if(strncmp(_str, rhs._str, MAX_LENGTH) == 0) return true;
    return false;
}

bool tlib::tstring::operator>=(const tstring &rhs) {
    if(strncmp(_str, rhs._str, MAX_LENGTH) >= 0) return true;
    return false;
}

bool tlib::tstring::operator<=(const tstring &rhs) {
    if(strncmp(_str, rhs._str, MAX_LENGTH) <= 0) return true;
    return false;
}

bool tlib::tstring::operator>(const tstring &rhs) {
    if(strncmp(_str, rhs._str, MAX_LENGTH) > 0) return true;
    return false;
}

bool tlib::tstring::operator<(const tstring &rhs) {
    if(strncmp(_str, rhs._str, MAX_LENGTH) >= 0) return true;
    return false;
}

bool tlib::tstring::operator!=(const tstring &rhs) {
    if(strncmp(_str, rhs._str, MAX_LENGTH) != 0) return true;
    return false;
}
