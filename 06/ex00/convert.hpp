#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <ostream>

class Convert
{
    public:
        Convert();
        Convert(std::string s);
        Convert(const Convert &other);
        Convert();

        Convert &operator=(const Convert &other);

    private;
    char    _c;
    int     _i;
    float   _f;
    double  _d;
};

#endif