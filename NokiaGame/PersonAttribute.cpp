#include "PersonAttribute.h"
#include "GameStory.h"
#include <time.h>

void PersonID::getPersonId()
{
	cout << "请输入父亲的名字：" << endl;
	cin >> value_father_name;

	cout << "请输入女儿的名字：" << endl;
	cin >> value_daughter_name;

	cout << "请输入女儿的生日（MM DD）" << endl;
	cin >> value_birth_month >> value_birth_day;
	game_month = value_birth_month;
	game_day = value_birth_day;
	PersonID::getConsll();
}

void PersonID::printPersonId()
{
	cout << "=====================今年是：公元"<<game_year<<" 年 "<<game_month<<" 月 "<<game_day<<" 日==============================" << endl;
	cout << "当前人物属性值" << endl;
	cout << "姓名：" << value_daughter_name << endl;
	cout << "性别：女" << endl;
	cout << "生日：" << game_year << "-" << value_birth_month << "-" << value_birth_day << endl;
	cout << "星座：" << value_daughter_consll << endl;
	cout << "智商：" << value_daughter_iq << endl;
	cout << "情商：" << value_daughter_eq << endl;
	cout << "魅力：" << value_daughter_charm << endl;
	cout << "体力：" << value_daughter_stamina << endl;
	cout << "金钱：" << value_daughter_money << endl;
}

void PersonID::getConsll()
{
	/*月份对应星座*/
	string const consll[12][2]
	{
		{"魔羯座","水瓶座"},
		{"水瓶座","双鱼座"},
		{"双鱼座","白羊座"},
		{"白羊座","金牛座"},
		{"金牛座","双子座"},
		{"双子座","巨蟹座"},
		{"巨蟹座","狮子座"},
		{"狮子座","处女座"},
		{"处女座","天秤座"},
		{"天秤座","天蝎座"},
		{"天蝎座","射手座"},
		{"射手座","魔羯座"},
	};

	int const consall_day[12] = { 20,19,21,21,21,22,23,23,23,23,22,22 };
	value_daughter_consll = consll[value_birth_month - 1][value_birth_day / consall_day[value_birth_day - 1]];
	getPersonal();
}

void PersonID::getPersonal()
{
	/*定义不同星座不同的属性值*/
	int const personal_attribute[12][5] = {
		/*IQ,EQ,CHARM,STAMINA,MONEY*/
		{17,25,15,26,992},
		{15,10,16,19,1309},
		{15,9,17,26,1697},
		{13,19,15,12,1282},
		{26,13,11,19,1490},
		{20,10,19,17,654},
		{19,18,14,18,1038},
		{10,9,8,16,1573},
		{11,12,19,19,1874},
		{12,20,17,16,1067},
		{15,11,12,19,1788},
		{17,15,11,24,1556},
	};
	value_daughter_iq = personal_attribute[value_birth_month - 1][0];
	value_daughter_eq = personal_attribute[value_birth_month - 1][1];
	value_daughter_charm = personal_attribute[value_birth_month - 1][2];
	value_daughter_stamina = personal_attribute[value_birth_month - 1][3];
	value_daughter_money = personal_attribute[value_birth_month - 1][4];
}

void PersonID::HungEat()
{
	srand((unsigned)time(NULL));
	value_daughter_money -= rand()%100;
	value_daughter_stamina += rand() % 5;
	printPersonId();
}

void PersonID::HungClothes()
{
	srand((unsigned)time(NULL));
	value_daughter_money -= rand() % 1000;
	value_daughter_stamina -= 2;
	value_daughter_charm += rand() % 4;
	printPersonId();

	
}

void PersonID::HungBuy()
{
	value_daughter_money -= 2500;
	value_daughter_stamina -= 2;
	printPersonId();

}

void PersonID::HungLuckTicket()
{
	int luck_num = 0;
	srand((unsigned)time(NULL));
	luck_num = rand() % 100;
	value_daughter_money -= 2;
	value_daughter_stamina -= 2;
	printPersonId();
}


void PersonID::HungEvery()
{
	cout << "长安街到处热闹非凡，夜深了。该回家了" << endl;
	value_daughter_stamina -= 2;
}

void PersonID::HungOut()
{
	int hung_chooice = 0;
	cout << "1.吃东西\n2.买衣服\n3.买用品\n4.闲逛\n5.买彩票\n输入你的选择" << endl;
	cin >> hung_chooice;
	switch (hung_chooice)
	{
		case 1:HungEat();break;
		case 2:HungClothes();break;
		case 3:HungBuy();break;
		case 4:HungEvery();break;
		case 5:HungLuckTicket(); break;
		default:HungOut();
	}

}

void PersonID::ActionKongfu()
{
	srand((unsigned)time(NULL));
	value_daughter_iq -= rand() % 4 ;
	value_daughter_eq -= rand() % 5;
	value_daughter_charm -= rand() % 5;
	value_daughter_stamina += rand() % 5;
	value_daughter_money -= rand() % 5;
	game_day++;
	test_count_month++;
	printPersonId();
}


void PersonID::ActionWork()
{
	srand((unsigned)time(NULL));
	value_daughter_iq += rand() % 3;
	value_daughter_eq += rand() % 5;
	value_daughter_charm -= rand() % 4 ;
	value_daughter_stamina -= rand() % 5;
	value_daughter_money += rand() % 100;
	game_day++;
	printPersonId();
}


void PersonID::ActionSchool()
{
	srand((unsigned)time(NULL));
	value_daughter_iq += rand() % 5;
	value_daughter_eq -= rand() % 2;
	value_daughter_charm -= rand() % 2;
	value_daughter_stamina += rand() % 2;
	value_daughter_money -= rand() % 80;
	game_day++;
	printPersonId();
}


void PersonID::setMenu()
{
	int story_choice = 0;
	while(game_year != 1858 || game_month !=value_birth_month ||game_day !=value_birth_day)
	{
		cout << "1.读私塾\n2.打工\n3.练功\n4.逛街\n选择您的选项：" << endl;
		 cin >> story_choice;
		switch (story_choice)
		{
		case 1:ActionSchool(); break;
		case 2:ActionWork(); break;
		case 3:ActionKongfu(); break;
		case 4:HungOut();break;
		default:setMenu();
		}
		if(game_year%4==0&&game_year%100!=0)
		{
			if(game_day % leap_year[game_month - 1] == 0)
			{
				game_month++;
				game_day = 0;
				if (game_month % 12 == 0)
				{
					game_year++;
					game_month = 0;
				}
			}
		}
		else
		{
			if (game_day % average_year[game_month - 1] == 0)
			{
				game_month++;
				game_day = 0;
				if (game_month % 12 == 0)
				{
					game_year++;
					game_month = 0;
				}
			}
		}
		
	}
	if(game_year == 1858 &&game_month == value_birth_month && game_day==value_birth_day)
	{
		if(value_daughter_iq >= 1000)
		{
			cout << "博士诞生了" << endl;
		}
		else if(value_daughter_money>=300000)
		{
			cout << "商人诞生了" << endl;
		}
	}

}
