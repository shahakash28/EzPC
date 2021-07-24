/*
This is an autogenerated file, generated using the EzPC compiler.
*/
#include<vector>
#include<math.h>
#include<cstdlib>
#include<iostream>
#include<fstream>

using namespace std;

uint32_t public_lrshift(uint32_t x, uint32_t y){
return (x >> y);
}

int32_t public_lrshift(int32_t x, uint32_t y){
return ((int32_t)(((uint32_t)x) >> y));
}

uint64_t public_lrshift(uint64_t x, uint64_t y){
return (x >> y);
}

int64_t public_lrshift(int64_t x, uint64_t y){
return ((int64_t)(((uint64_t)x) >> y));
}

template<typename T>
vector<T> make_vector(size_t size) {
return std::vector<T>(size);
}

template <typename T, typename... Args>
auto make_vector(size_t first, Args... sizes)
{
auto inner = make_vector<T>(sizes...);
return vector<decltype(inner)>(first, inner);
}

template<typename T>
ostream& operator<< (ostream &os, const vector<T> &v)
{
for(auto it = v.begin (); it != v.end (); ++it) {
os << *it << endl;
}
return os;
}



int main () {

double a =  (double)5.;

double b =  (double)10.;

double c;

uint32_t e;

double d;
c = (a + b);
c = (a - b);
c = (a * b);
c = (b /  (double)4.);
c = (pow( (double)2.,  (double)10.));
e = (1 && 0);
e = (0 || 0);
e = (0 ^ 1);
e = (a > b);
e = (a == b);
e = (a >= b);
e = (a <= b);
e = (a < b);
return 0;
}

