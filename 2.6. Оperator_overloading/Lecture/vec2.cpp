#include "vec2.h"
#include<cmath>

const float vec2::eps(0.0001f);

vec2::vec2(): x(0.0f), y(0.0f)
{}
vec2::vec2(float _x, float _y): x(_x), y(_y)
{}

vec2 operator+(const vec2& a, const vec2& b)
{
	vec2 res(a);
	return res += b;
	//return vec2(a.x + b.x, a.y + b.y);
}
vec2 operator-(const vec2& a, const vec2& b)
{
	vec2 res(a);
	return res -= b;
	//return vec2(a.x - b.x, a.y - b.y);
}
vec2 operator+(const vec2& a, float b)
{
	vec2 res(a);
	return res += b;
	//return vec2(a.x + b, a.y + b);
}
vec2 operator-(const vec2& a, float b)
{
	vec2 res(a);
	return res -= b;
	//return vec2(a.x - b, a.y - b);
}
vec2 operator+(float b, const vec2& a)
{
	return  a + b;
}
vec2 operator-(float b, const vec2& a)
{
	vec2 res(a);
	return res += b;
	//return vec2(b - a.x, b - a.y);
}
vec2 operator*(const vec2& a, float b)
{
	vec2 res(a);
	return res *= b;
	//return vec2(a.x * b, a.y * b);
}
vec2 operator/(const vec2& a, float b)
{
	vec2 res(a);
	return res /= b;
	//return vec2(a.x / b, a.y / b);
}
vec2& vec2::operator+=(const vec2& vec)
{
	this->x += vec.x;
	this->y += vec.y;
	return *this;
}
vec2& vec2::operator-=(const vec2& vec)
{
	this->x -= vec.x;
	this->y -= vec.y;
	return *this;
}
vec2& vec2::operator*=(const vec2& vec)
{
	this->x *= vec.x;
	this->y *= vec.y;
	return *this;
}
vec2& vec2::operator/=(const vec2& vec)
{
	this->x /= vec.x;
	this->y /= vec.y;
	return *this;
}
vec2& vec2::operator+=(float a)
{
	x += a;
	y += a;
	return *this;
}
vec2& vec2::operator-=(float a)
{
	x -= a;
	y -= a;
	return *this;
}
vec2& vec2::operator*=(float a)
{
	x *= a;
	y *= a;
	return *this;
}
vec2& vec2::operator/=(float a)
{
	x /= a;
	y /= a;
	return *this;
}
bool operator!=(const vec2& a, const vec2& b)
{
	//TO DO function to compare float
	//float eps = 0.0001f;
	return !(fabs(a.x - b.x)<=vec2::eps && fabs(a.y - b.y) <= vec2::eps);
}
bool operator==(const vec2& a, const vec2& b)
{
	return !(a != b);
}