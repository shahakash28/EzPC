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

int32_t terms;
cout << ("Input terms:") << endl;
/* Variable to read the clear value corresponding to the input variable terms at (2,4-2,31) */
uint32_t __tmp_in_terms;
cin >> __tmp_in_terms;
terms = __tmp_in_terms;

double euler =  (double)1.;

double fact =  (double)1.;

double ctr =  (double)1.;
for (uint32_t i =  (int32_t)1; i < terms; i++){
fact = (fact * ctr);
euler = (euler + ( (double)1. / fact));
ctr = (ctr +  (double)1.);
}
cout << ("Value of euler:") << endl;
cout << (euler) << endl;
return 0;
}

