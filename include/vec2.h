#include <cmath>

template <typename T> 
class vec2
{
     public:
     T x,y;

     public:
     vec2<T>(); //defines x=0, y=0
     vec2<T>(const T _x,const T _y); // defines using _x ,_y 
     vec2<T>(const vec2<T>& a);// defines using vec2
     vec2<T>(const T a);// defines x=a, y=a
     
     vec2 operator+(vec2 const& a);
     vec2 operator-(vec2 const& a);
     vec2 operator*(vec2 const& a);
     vec2 operator/(vec2 const& a);

     vec2 operator*(T const& a);
     vec2 operator/(T const& a);
     
     vec2 norm();

     T length();
     T dot(vec2 const& a);
     T angle(); //angle in radinas, 0 radians is on the vertical line
     
     void print();

};
