#include<iostream>
#include<string>
using namespace std;
//���һ��ѧ���࣬������������ѧ�ţ�
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
//���ѧ����
class Student
{
public://����Ȩ��
	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
	//���� ��Ա����  ��Ա����
	//��Ϊ ��Ա����  ��Ա����

	//����
	string m_Name;//����
	int m_Id;//ѧ�� 

		//��Ϊ
		//��ʾ������ѧ��
	void showstudent() {
		cout << "������" << m_Name << "ѧ�ţ�" << m_Id << endl;
	}

	//��������ֵ
	void setName(string name) {
		m_Name = name;
	}
	//��ѧ�Ÿ�ֵ
	void setId(int id) {
		m_Id = id;
	}
};

int main() {
	//�����Ը������ѧ����ʵ�л�����
	
	Student s1;
	//��s1���� �������Ը�ֵ����
	//s1.m_Name = "����";
	s1.setName("����");
	//s1.m_Id = 1;
	s1.setId(1);
	//��ʾѧ����Ϣ
	s1.showstudent();
	Student s2;
	s2.m_Name = "����";
	s2.m_Id = 2;
	s2.showstudent();
	return 0;
}