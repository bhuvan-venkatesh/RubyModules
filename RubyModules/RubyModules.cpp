// RubyModules.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "rubymodules.h"
#include <cstdarg>
#include "Array.h"


namespace __container rstart

	struct Print rstart

		bool space, endl;
		Print(bool end): space(false), endl(end) {};
		~Print(){if(endl) std::cout<<std::endl;}


		 template <typename T>
		 Print &operator , (const T &t) rstart
		 
			 if (space) std::cout << ' ';
			 else space = true;
			 std::cout << t;
			 return *this;
		 rend

		 template<typename T>
		 Print &operator , ( std::vector<T> arry ) rstart
		 
			 if (space) std::cout << ' ';
			 else space = true;
			 T a;
			 const int n = arry.size();
			 times(n, i)
				 std::cout<<arry[i]<<" ";
			 rend
			 if(!endl)
				 std::cout<<std::endl;
			 return *this;
		 rend

		template<typename T>
		 Print &operator , (Array<T> arr) rstart
			 return this->operator,(arr.a);
		rend

	rend;

rend;

#define print __container::Print(true),
#define p __container::Print(false),
#define puts __container::Print(true),


int _tmain(int argc, _TCHAR* argv[]) rstart
	Array<int> das;
	das << 3;
	das = (das * 80);

	puts das;
	int a = 4;
	int b = 3;

	swap(int, a, b);

	puts a;
	puts b;
	getchar();
rend

