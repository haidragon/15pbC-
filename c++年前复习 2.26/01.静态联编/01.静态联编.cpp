// 01.静态联编.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
class A {
public:
	virtual void  Fun1() {
		printf("A::Fun1\n");
	}
	void Fun2() {
		printf("A::Fun2\n");
	}
};
class B :public A {
public:
	virtual void Fun2() {
		printf("B::Fun2\n");
	}
	virtual void Fun1() {
		printf("B::Fun1\n");
	}
};
int main() {
	A objA, *pA;

	B objB, objB2,*pB;
	pA = &objB;
	pA->Fun1();
	pA->Fun2();
	pB = (B*)&objA;
	pB->Fun1();
	pB->Fun2();
	return 0;
}

