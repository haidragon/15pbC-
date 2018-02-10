// 06.构造与析构.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class CMyClsA {
public:
	CMyClsA() {
		printf("CMyClsA\n");
	}
	~CMyClsA() {
		printf("~CMyClsA\n");
	}
};
class Base {
public:
	Base() {
		printf("Base\n");
	}
	~Base() {
		printf("~Base\n");
	};

};
class Derived :public Base {
public:
	CMyClsA obj;
	Derived() {
		printf("Derived\n");
	};
	~Derived() {
		printf("~Derived\n");
	};
};
int main() {
	Derived obj;
	return 0;
}

