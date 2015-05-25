#include "stdafx.h"
#define rend }
#define rstart {
#define times(a,loopvar) for(int loopvar = 0; loopvar < a; ++loopvar){
#define swap(t,a,b) do {t temp = a; a = b; b = temp;}while(0)
#define PRINT_TOKEN(token) printf(#token " is %d", token)
#define fassert(expr) lassert((expr), #expr, __FILE__, __LINE__)
#define loopto(sym,a,b,loopvar) for(int loopvar = a; loopvar < b; i sym){
//#define loopto(sym,a,b) for(int gensym_i = a; gensym_i < b; sym gensym_i){
#define upto(gensym_a,gensym_b,loopvar) for(int loopvar=fassert(gensym_a <= gensym_b) *gensym_a; loopvar < gensym_b; ++loopvar){
#define downto(gensym_a,gensym_b,loopvar) for(int loopvar=fassert(gensym_a >= gensym_b) *gensym_a; loopvar < gensym_b; --loopvar){
#define foreach(type,sym,vect,loopvar) for(int loopvar = 0; loopvar < vect.size(); ++loopvar{ type sym = vect[loopvar];
#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
#define max(X, Y)  ((X) > (Y) ? (X) : (Y))
#include <cstdlib> // for abort();
#include <iostream>

//The X replacement macro is AMAZING to reduce code duplication for enums and listed types
/* These parameters will be assumed to be correct. */
bool lassert(bool invariant, std::string statement, std::string file, int line)
{
 if(!invariant)
 {
 std::cerr << "fassert Failed!" << std::endl;
 std::cerr << "Expression: " << statement.c_str() << std::endl;
 std::cerr << "File: " << file.c_str() << std::endl;
 std::cerr << "Line: " << line <<std:: endl;
 abort(); // Quits program and signals error to the OS.
 }
 return true;
}