#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class cat : public Animal
{
public:
	void speak()
	{
		cout << "猫在说话" << endl;
	}

};

//狗类
class dog: public Animal
{
public:
	void speak()
	{
		cout << "狗在说话" << endl;
	}

}; 

//执行说话函数
//地址早绑定 在编译阶段就已确定函数地址
//如果想执行猫说话，那么这个函数地址就不能提前绑定，需要在运行时绑定，晚绑定

//动态多态满足条件
//1，有继承关系
//2，子类要重写父类的虚函数	（重写：函数返回值，函数名，形参列表所有内容 完全相同）

//动态多态使用
//父类的指针或者引用 执行子类对象
void doSpeak(Animal & animal) //Animal & animal = cat
{
	animal.speak();
}

void test01();
int main()
{
	
	return 1;

}