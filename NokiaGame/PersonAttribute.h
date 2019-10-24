#pragma once
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class PersonID
{
private:
	/* 父女的名字*/
	string value_father_name = "Tom Alex";
	string value_daughter_name = "Miss Alex";
	/* 女儿的星座 */
	string value_daughter_consll;
	/* 女儿的生日*/
	int value_birth_month = 0;
	int value_birth_day = 0;
	/*平年*/
	int const average_year[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	/*闰年*/
	int const leap_year[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	/*游戏进程 游戏YY MM DD*/
	int game_month = 0;
	int game_day = 0;
	int game_year = 1840;
	int value_daughter_iq = 0; //智商
	int value_daughter_eq = 0; //情商
	int value_daughter_charm = 0; //魅力
	int value_daughter_stamina = 0; //体力
	int value_daughter_money = 0; //金钱

	/*测试用值*/
	int test_count_month = 0;

public:
	/* 获取人物的初始属性值*/
	void getPersonId();
	/* 打印人物的属性值*/
	void printPersonId();
	/*计算女儿的星座*/
	void getConsll();
	/*产生随机的属性值*/
	void getPersonal();
	/*公主养成剧情*/
	void getDate();	/*控制游戏剧情时间*/
	void setMenu(); /*设置剧情菜单d*/
	void ActionSchool();	/*上学*/
	void ActionWork();		/*打工*/
	void ActionKongfu();	/*练功*/
	void HungOut();			/*逛街*/
	void HungEat();
	void HungBuy();
	void HungClothes();
	void HungEvery();
	void HungLuckTicket();
};
