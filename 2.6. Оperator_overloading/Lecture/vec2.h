#pragma once


struct vec2
{
private:
	float x;
	float y;
	const static float eps;

public:
	vec2();
	vec2(float x, float y);

	vec2& operator+=(const vec2& vec);
	vec2& operator-=(const vec2& vec);
	vec2& operator*=(const vec2& vec);
	vec2& operator/=(const vec2& vec);
	vec2& operator+=(float a);
	vec2& operator-=(float a);
	vec2& operator*=(float a);
	vec2& operator/=(float a);

	friend vec2 operator+(const vec2& a, const vec2& b);
	friend vec2 operator-(const vec2& a, const vec2& b);
	friend vec2 operator+(const vec2& a, float b);
	friend vec2 operator-(const vec2& a, float b);
	friend vec2 operator+(float b, const vec2& a);
	friend vec2 operator-(float b, const vec2& a);
	friend vec2 operator*(const vec2& a, float b);
	friend vec2 operator/(const vec2& a, float b);

	friend bool operator!=(const vec2& a, const vec2& b);
	friend bool operator==(const vec2& a, const vec2& b);

};




