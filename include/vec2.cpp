#include "vec2.h"

template <typename T>
vec2<T>::vec2()
{
    this->x=0,this->y=0;
};

template <typename T>
vec2<T>::vec2(const T _x,const T _y)
{
    this->x=_x,this->y=_y;
};

template <typename T>
vec2<T>::vec2(const vec2<T>& a)
{
    this->x=x.a,this->y=y.a;
};

template <typename T>
vec2<T> vec2<T>::operator+(const vec2<T>& a)
{
     return vec2<T>(this->x+=a.x,this->y+=a.y);
};

template <typename T>
vec2<T> vec2<T>::operator-(const vec2<T>& a)
{
     return vec2<T>(this->x-=a.x,this->y-=a.y);
};

template <typename T>
vec2<T> vec2<T>::operator*(const vec2<T>& a)
{
     return vec2<T>(this->x*=a.x,this->y*=a.y);
};

template <typename T>
vec2<T> vec2<T>::operator/(const vec2<T>& a)
{
     return vec2<T>(this->x/=a.x,this->y/=a.y);
};

template <typename T>
vec2<T> vec2<T>::operator*(T const& a)
{
     return vec2<T>(this->x*=a,this->y*=a);
};

template <typename T>
vec2<T> vec2<T>::operator/(T const& a)
{
    return vec2<T>(this->x/=a,this->y/=a);
};

template <typename T>
vec2<T> vec2<T>::norm()
{   
    T x_n=this->x/length();
    T y_n=this->y/length();
    return vec2<T>(x_n,y_n);
};

template <typename T>
T vec2<T>::length()
{
    return sqrt(this->x*this->x+this->y*this->y);
};

template <typename T>
T vec2<T>::dot(const vec2<T>& a )
{
    return this->x*a.x+this->y*a.y;
};

template <typename T>
T vec2<T>::angle()
{
    return atan2(vector.y, vector.x);
};

template <typename T>
void vec2<T>::print()
{   
    std::cout<<"<"<<this->x<<","<<this->y<<">"<<"\n";
};






