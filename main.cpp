#include"Identity.h"

int main() {
	int select = 0;

	while (true)
	{
		cout << "==============================��ӭʹ�û���ԤԼϵͳ=========================================" << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t--------------------------------------------------------------------------------------\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          1.ѧ��                                                    |\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          2.��ʦ                                                    |\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          3.����Ա                                                  |\n";
		cout << "\t\t|                                                                                    |\n";
		cout << "\t\t|                          0.�˳�                                                    |\n";
		cout << "\t\t--------------------------------------------------------------------------------------\n";
		cout << "����������ѡ��";

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
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			system("cls");
			return 0;
			break;
		default:
			cout << "�������룬���ٴ�����" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}
