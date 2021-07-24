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

double w;
cout << ("Input w:") << endl;
/* Variable to read the clear value corresponding to the input variable w at (35,1-35,27) */
double __tmp_in_w;
cin >> __tmp_in_w;
w = __tmp_in_w;

double x;
cout << ("Input x:") << endl;
/* Variable to read the clear value corresponding to the input variable x at (36,1-36,27) */
double __tmp_in_x;
cin >> __tmp_in_x;
x = __tmp_in_x;

auto z = make_vector<double>( (int32_t)10);
cout << ("Input z:") << endl;
/* Variable to read the clear value corresponding to the input variable z at (37,1-37,31) */
double __tmp_in_z;
for (uint32_t i0 =  (uint32_t)0; i0 <  (int32_t)10; i0++){
cin >> __tmp_in_z;
z[i0] = __tmp_in_z;
}

auto a = make_vector<double>( (int32_t)10,  (int32_t)100);
cout << ("Input a:") << endl;
/* Variable to read the clear value corresponding to the input variable a at (38,1-38,36) */
double __tmp_in_a;
for (uint32_t i0 =  (uint32_t)0; i0 <  (int32_t)10; i0++){
for (uint32_t i1 =  (uint32_t)0; i1 <  (int32_t)100; i1++){
cin >> __tmp_in_a;
a[i0][i1] = __tmp_in_a;
}
}

uint32_t b;
cout << ("Input b:") << endl;
/* Variable to read the clear value corresponding to the input variable b at (39,1-39,26) */
uint32_t __tmp_in_b;
cin >> __tmp_in_b;
b = __tmp_in_b;
cout << ("Value of w:") << endl;
cout << (w) << endl;
cout << ("Value of x:") << endl;
cout << (x) << endl;
cout << ("Value of z:") << endl;
cout << (z) << endl;
cout << ("Value of a:") << endl;
cout << (a) << endl;
cout << ("Value of b:") << endl;
cout << (b) << endl;
return 0;
}

