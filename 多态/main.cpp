#include<iostream>
using namespace std;

//������
class Animal
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class cat : public Animal
{
public:
	void speak()
	{
		cout << "è��˵��" << endl;
	}

};

//����
class dog: public Animal
{
public:
	void speak()
	{
		cout << "����˵��" << endl;
	}

}; 

//ִ��˵������
//��ַ��� �ڱ���׶ξ���ȷ��������ַ
//�����ִ��è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ������ʱ�󶨣����

//��̬��̬��������
//1���м̳й�ϵ
//2������Ҫ��д������麯��	����д����������ֵ�����������β��б��������� ��ȫ��ͬ��

//��̬��̬ʹ��
//�����ָ��������� ִ���������
void doSpeak(Animal & animal) //Animal & animal = cat
{
	animal.speak();
}

void test01();
int main()
{
	
	return 1;

}