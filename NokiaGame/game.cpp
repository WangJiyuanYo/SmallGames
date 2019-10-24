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
	cout << "暂不支持哦  (￣▽￣) "<<endl <<"按任意键开始游戏" << endl;
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
	cout << "1.开始游戏\n2.继续游戏 \n3.退出游戏 \n请选择：" << endl;
	cin >> game_statu;
	switch (game_statu)
	{
		case 1:game_start(); break;	/*开始游戏*/
		case 2:game_continue(); break;/*继续游戏*/
		case 3:game_exit();	break;	/*退出游戏*/
		default:setMenu();
	}
}


int main()
{
	setMenu();
	return 0;
}