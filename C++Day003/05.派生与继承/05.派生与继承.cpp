// 05.派生与继承.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class 坦克 {
public:
	int m_nBlood;
protected:
	int m_nDir;
private:
	int m_nSpeed;
};

class 疾风 : public 坦克{
public:
	//int m_nBlood;
protected:
	//int m_nDir;
private:
	//int m_nSpeed;
	void Show() {
		m_nBlood;
		m_nDir;
		m_nSpeed;// 私有是基类的私有，不是我的私有
		int n = *(int*)((char*)this + 8);
	}
};
class 破甲 : protected 坦克 {
public:
	坦克::m_nBlood;
protected:
	//int m_nBlood;
	//int m_nDir;
private:
	//int m_nSpeed;
	void Show() {
		m_nBlood;
		m_nDir;
		m_nSpeed;// error
	}
};
class 追命 :private 坦克 {
public:
protected:
private:
	//int m_nBlood;
	//int m_nDir;
	//int m_nSpeed;
	void Show() {
		m_nBlood;
		m_nDir;
		m_nSpeed;
	}
};

void Show() {
	破甲 obj;
	obj.m_nBlood;
}

/*
基类       派生方式     最终权限
public		public		public
public		protected	protected
public		private		private
protected	public		protected
protected	protected	protected
protected	private		private
private		public		private
private		protected	private
private		private		private
*/


int main()
{

    return 0;
}

