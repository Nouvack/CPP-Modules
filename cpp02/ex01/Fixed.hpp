#include <iostream>
#include <cmath>
class Fixed
{
private:
    int _rawBits;
    static const int _fractionalBits;
public:
    Fixed(/* args */);
    Fixed(const int nbr);
    Fixed(const float nbr);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


