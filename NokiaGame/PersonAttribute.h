#pragma once
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class PersonID
{
private:
	/* ��Ů������*/
	string value_father_name = "Tom Alex";
	string value_daughter_name = "Miss Alex";
	/* Ů�������� */
	string value_daughter_consll;
	/* Ů��������*/
	int value_birth_month = 0;
	int value_birth_day = 0;
	/*ƽ��*/
	int const average_year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	/*����*/
	int const leap_year[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	/*��Ϸ���� ��ϷYY MM DD*/
	int game_month = 0;
	int game_day = 0;
	int game_year = 1840;
	int value_daughter_iq = 0; //����
	int value_daughter_eq = 0; //����
	int value_daughter_charm = 0; //����
	int value_daughter_stamina = 0; //����
	int value_daughter_money = 0; //��Ǯ

	/*������ֵ*/
	int test_count_month = 0;

public:
	/* ��ȡ����ĳ�ʼ����ֵ*/
	void getPersonId();
	/* ��ӡ���������ֵ*/
	void printPersonId();
	/*����Ů��������*/
	void getConsll();
	/*�������������ֵ*/
	void getPersonal();
	/*�������ɾ���*/
	void getDate();	/*������Ϸ����ʱ��*/
	void setMenu(); /*���þ���˵�d*/
	void ActionSchool();	/*��ѧ*/
	void ActionWork();		/*��*/
	void ActionKongfu();	/*����*/
	void HungOut();			/*���*/
	void HungEat();
	void HungBuy();
	void HungClothes();
	void HungEvery();
	void HungLuckTicket();
};
