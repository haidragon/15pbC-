// C++Day003.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
class CTank {
	friend void Draw(CTank obj);
	friend class CDraw;
public:
	int m_nBlood;
	void Draw() {
		printf("%d\n", m_nDir);
	}
private:
	int m_nDir;
};

void Draw(CTank obj) {
	printf("%d\n", obj.m_nDir);
}


class CDraw {
public:
	void Draw(CTank obj) {
		printf("%d\n", obj.m_nDir);
	}
	void Change(CTank& obj,int nDir) {
		obj.m_nDir = nDir;
	}
};

int main()
{
    return 0;
}

