// #include "PersonAttribute.h"
// PersonID item;
//
// void PersonID::ActionKongfu()
// {
// 	item.value_daughter_iq -= rand() % 10;
// 	item.value_daughter_eq -= rand() % 10;
// 	item.value_daughter_stamina += rand() % 10;
// 	item.value_daughter_money -= rand() % 100;
// 	item.printPersonId();
// }
//
//
// void PersonID::ActionWork()
// {
// 	item.value_daughter_iq -= rand() % 10;
// 	item.value_daughter_eq +=rand() % 10;
// 	item.value_daughter_charm -= rand() % 10;
// 	item.value_daughter_stamina -= rand() % 10;
// 	item.value_daughter_money += rand() % 100;
// 	item.printPersonId();
// }
//
//
// void PersonID::ActionSchool()
// {
// 	item.value_daughter_iq += rand() % 10;
// 	item.value_daughter_eq += rand() % 10;
// 	item.value_daughter_stamina -= rand() % 10;
// 	item.value_daughter_money -= rand() % 100;
// 	item.printPersonId();
// }
//
//
// void PersonID::setMenu()
// {
// 	
// 	int story_choice = 0;
// 	cout << "1.读私塾\n2.打工\n3.练功\n选择您的选项：" << endl;
// 	cin >> story_choice;
// 	switch (story_choice)
// 	{
// 		case 1:ActionSchool();
// 		case 2:ActionWork();
// 		case 3:ActionKongfu();
// 		case 4:return;
// 		default:setMenu();
// 	}
// }
