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

    bool operator<(const Fixed& other);
    bool operator>(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);

    Fixed operator+(const Fixed& other)const ;
    Fixed operator-(const Fixed& other)const ;
    Fixed operator*(const Fixed& other)const ;
    Fixed operator/(const Fixed& other)const ;

    float toFloat(void) const;
    int toInt(void) const;

    static Fixed& min(Fixed& n1, Fixed& n2);
    static Fixed& const min(const Fixed& n1, const Fixed& n2);
    static Fixed& max(Fixed& n1, Fixed& n2);
    static Fixed& const max(const Fixed& n1,const Fixed& n2);

    Fixed operator++(int);
    Fixed& operator++();
    Fixed operator--(int);
    Fixed& operator--();

};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);


