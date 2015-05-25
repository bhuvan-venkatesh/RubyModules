#include "stdafx.h"
#include <vector>
#include "rubymodules.h"
#include <cstdarg>

template <typename T>
struct Array rstart
	std::vector<T> a;

	static Array<T> create(const int num, T initial) rstart
		Array<T> retval;
		times(num,i)
			retval << initial;
		rend;
		return retval;
	rend;


	Array<T>& operator << (const T& inp) rstart
		a.push_back(inp);
		return *this;
	rend;

	Array<T> operator * (const int inp) rstart
		Array<T> retval;
		times(inp, i)
			for each (T place in a) rstart
				retval << place;
			rend;
		rend;
		return retval;
	rend;

	std::string operator *(const std::string inp) rstart
	rend;

	T& operator[] (const int val) rstart
		if(abs(val) > a.size()-1)
			return *(new int(NULL));
		else if(val >= 0)
			return a[val];
		else
			return a[a.size()+val];
	rend;

	Array<T>& operator() (const int start, const int end) rstart
		Array<T>* retval = new Array<T>();
		int rst = start, ren = end;
		if(start < 0)
			rst = a.size()+rst;
		if(end < 0)
			ren = a.size()+ren;
		upto(rst,ren,i)
			*retval << (*this)[i];
		rend;
		return *retval;
	rend;

	bool operator== (const Array<T>& inp) rstart
		if(inp.a.size() != a.size())
			return false;
		const int n = a.size();
		times(n, i)
			if(inp[i] != (*this)[i])
				return false;
		rend;
		return false;
	rend;

	T& at(const int start) rstart
		return (*this)[start];
	rend;

	T& fetch(const int value) rstart
		if(abs(val) > a.size()-1)
			throw "Out of bounds";
		else
			(*this)[value];
	rend;

	T& fetch(const int value, const std::string a) rstart
		if(abs(val) > a.size()-1)
			throw a;
		else
			(*this)[value];
	rend;

	T& first() rstart
		return (*this)[0];
	rend;

	T& last() rstart
		return (*this)[a.size()-1];
	rend;

	Array<T>& take(const int num) rstart
		Array<T>* retval = new Array<T>();
		times(num,i)
			retval << (*this)[i];
		rend;
		return *retval;
	rend;

	Array<T>& drop(const int num) rstart
		Array<T>* retval = new Array<T>();
		times(num,i)
			retval << (*this).a.back();
			(*this).a.pop_back();
		rend;
	rend;

	unsigned int length() rstart
		return a.size();
	rend;

	unsigned int count() rstart
		return a.size();
	rend;

	bool empty () rstart
		return a.size() == 0;
	rend;

	bool include (T& inp) rstart
		const int n = a.size();
		times(n,i)
			if((*this)[i] == inp)
				return true;
		rend;
		return false;
	rend;

	Array<T>& push(T& num) rstart
		(*this) << num;
	rend;

	Array<T>& unshift(T& op) rstart
		a.insert(0, op);
		return (*this);
	rend;

	Array<T>& insert(const int index, const int num, ...) rstart
		va_list vl;
		T val;
		va_start(vl,num);
		int temp = index;
		times(num, i)
			val = va_arg(v1,T);
			a.insert(temp,val);
			++temp;
		rend;
		return *this;
	rend;

	T& pop() rstart
		T temp = a.back();
		a.pop_back();
		return temp;
	rend;

	T& shift() rstart
		T temp = a.front();
		a.erase(a.begin());
		return temp;
	rend;

rend;