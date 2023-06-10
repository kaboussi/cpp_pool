//
// Created by Redouane Elkaboussi on 6/4/23.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
public:
	// Constructors
	Fixed (void);
	Fixed (const Fixed& obj);
	Fixed (const int value);
	Fixed (const float value);
	Fixed& operator= (const Fixed& other);
	~Fixed (void);

	// Overloading comparison operations
	bool operator> (const Fixed& other) const;
	bool operator< (const Fixed& other) const;
	bool operator>= (const Fixed& other) const;
	bool operator<= (const Fixed& other) const;
	bool operator== (const Fixed& other) const;
	bool operator!= (const Fixed& other) const;

	// Overloading arithmetic operators
	Fixed operator+ (const Fixed& other) const;
	Fixed operator- (const Fixed& other) const;
	Fixed operator* (const Fixed& other) const;
	Fixed operator/ (const Fixed& other) const;

	// Overloading unary operators
	Fixed& operator++ (void);
	Fixed operator++ (int);
	Fixed& operator-- (void);
	Fixed operator-- (int);


	// methods
	static Fixed& min (Fixed& fixedPoint1, Fixed& fixedPoint2);
	static const Fixed& min (const Fixed& fixedPoint1, const Fixed& fixedPoint2);
	static Fixed& max (Fixed& fixedPoint1, Fixed& fixedPoint2);
	static const Fixed& max (const Fixed& fixedPoint1, const Fixed& fixedPoint2);

	// getters and setters
	int getRawBits (void) const;
	void setRawBits (int const raw);

	// methods
	float toFloat (void) const;
	int toInt (void) const;

private:
	int value;
	static const int exponent;
};

std::ostream& operator<< (std::ostream& os, const Fixed& fixed);

#endif //FIXED_HPP
