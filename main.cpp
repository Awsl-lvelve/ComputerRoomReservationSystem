#include"Identity.h"

int main() {
	int select = 0;

	while (true)
	{
		cout << "==============================欢迎使用机房预约系统=========================================" << endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t--------------------------------------------------------------------------------------\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          1.学生                                                    |\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          2.老师                                                    |\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          3.管理员                                                  |\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          0.退出                                                    |\n";
		cout << "\t\t--------------------------------------------------------------------------------------\n";
		cout << "请输入您的选择：";

		cin >> select;

		switch (select)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			system("cls");
			return 0;
			break;
		default:
			cout << "有误输入，请再次输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}
