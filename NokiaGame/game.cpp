#include <iostream>
#include "PersonAttribute.h"

void game_start()
{
	PersonID person;
	person.getPersonId();
	person.printPersonId();
	person.setMenu();
}
void game_continue()
{
	cout << "�ݲ�֧��Ŷ  (������) "<<endl <<"���������ʼ��Ϸ" << endl;
	system("pause");
	game_start();
}

void game_exit()
{
	exit(0);
}

void setMenu()
{
	int game_statu = 0;
	cout << "1.��ʼ��Ϸ\n2.������Ϸ \n3.�˳���Ϸ \n��ѡ��" << endl;
	cin >> game_statu;
	switch (game_statu)
	{
		case 1:game_start(); break;	/*��ʼ��Ϸ*/
		case 2:game_continue(); break;/*������Ϸ*/
		case 3:game_exit();	break;	/*�˳���Ϸ*/
		default:setMenu();
	}
}


int main()
{
	setMenu();
	return 0;
}