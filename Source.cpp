#include <iostream>
#include <string>
#include <fstream>
#include<Windows.h>
using namespace std;
class Test {
public:
	void test1(string tekst) {
		if (test == true) {
			cout << tekst << endl;
		}
	}
private:
	bool test = true;
};


int main()
{
	ofstream ofs;
	ofs.open("./svod_1/�������_����.xlt");
	ofs.close();
	for (int p = 1;p < 30;p++) //������� ������
	{
		string str2;
		Test ret;
		string str, str1;
		str1 = "0";
		setlocale(LC_ALL, "ru");
		for (int wqe = 0;wqe < 3;wqe++) {
			fstream ifs;
			string qwrtq;
			if (wqe == 1) {
				qwrtq = to_string(p) + ".1.txt";
				cout << qwrtq;
			}

			else if (wqe == 2) {
				qwrtq = to_string(p) + ".2.txt";
			}

			else {
				qwrtq = to_string(p) + ".txt";
			}

			ifs.open(qwrtq);
			string str;
			int stolb = 1;
			int line = 1;
			if (!ifs.is_open()) {
				//cout << "\n���� ������ ������ 4 ������:\n";
				//cout << "���������, ��� �� ������� ��������� �������� ������ .txt � ������: ���� ��� ��������!\n\n\n\n";
				cout << "Error: " << qwrtq << endl;
			}
			else
			{
				system("cls");
				cout << "\t���� ������: " << qwrtq << endl;
				//���������� ���������� ��������
				getline(ifs, str);
				for (int i = 0;i < size(str);i++)
				{
					if (str[i] == '\t')
					{
						stolb++;
					}
				}
				ret.test1("��� - �� �������� : " + stolb);
				//��������� ���-�� �����
				while (!ifs.eof())
				{
					str = "";
					getline(ifs, str);
					if (str == "") {
					}
					else {
						line++;
					}
				}
				ret.test1("���-�� �����: " + line);
				cout << endl << endl;
				//������� ������ ��� �������
				const int x = stolb;
				const int y = line;
				string** arr = new string * [stolb];
				for (int i = 0;i < stolb;i++) {
					arr[i] = new string[line];
				}

				//���������� ���������� ����� �� ������
				ifs.clear();
				ifs.seekg(0);

				//��������� ������� ������
				for (int i = 0;i < line;i++)
				{
					//sled:  //goto sled
					getline(ifs, str);
					int j = 0;
					for (int k = 0;k < size(str);k++)
					{
						if (j >= stolb) {
							break;
						}
						if (k == 0) {
							if (str[k] == '\t') {
								arr[j][i] = str1;
								j++;
							}
							else {
								arr[j][i] = arr[j][i] + str[k];
							}
						}

						else if (k == size(str) - 1) {
							if (str[k] == '\t') {
								arr[j][i] = str1;
								break;
							}
							else {
								arr[j][i] = arr[j][i] + str[k];
								break;
							}
						}
						//////
						else if (str[k] != '\t')
						{
							arr[j][i] = arr[j][i] + str[k];
						}
						else if (str[k] == '\t') {
							j++;
						}
						if (k != 0) {
							if (str[k] == '\t' && str[k - 1] == '\t'){
							arr[j - 1][i] = str1;
							}
						}
					}
				}
				//��������� �������� ������
				for (int i = 6;i < stolb;i++) {
					if (arr[i][0]=="0") {
						arr[i][0] = arr[i - 1][0];
					}
				}
				//��������� ������ �������
				for (int i = 0;i < stolb;i++) {
					if (arr[i][1] == "0") {
						arr[i][1] = "-";
					}
				}

				//������������ ��������� � arr �����


				//��������������� ������� � �������
					/*for (int i = 0;i < line;i++)
					{
						for (int j = 0;j < stolb;j++)
						{
							if (j < stolb - 1) {
								cout << arr[j][i] << "\t";
							}
							if (j == stolb - 1) {
								cout << arr[j][i];
							}
						}
						cout << endl;
					}*/
				ifs.close();

				
				
				//������ ������� � ����� ����	
				/*
				ofs.open("newfile3.txt");
				for (int i = 0;i < line;i++)
				{
					for (int j = 0;j < stolb;j++)
					{
						ofs  << arr[j][i] << "\t";
					}
					ofs << endl;
				}
				ofs.close();

				cout << "\n\n\n\n";

				*/
				string file2 = "./mysor/" + qwrtq + "_�������_����.txt";
				ofs.open(file2);
				//������� � ���� ������
				//������� �������� ��������� ������, ������� ����� ������� � ����:
				string parametrs[]{
					"�������� ��������",
					"����������� ��������� �������� �� ��������� ������� ������ ",  //����� ����� ���� � ����
					"����������� ��������� �������� �� ��������� ������� ������",
					"���� � ����� �� ������� �����",
					"���� � ����� �� ������� �����!",
					"����� ����� � ������"
				};
				/*
				cout << "����:\n-1 - ���������� ����������� ���� ������\n2 - ������� �������������� ��������� �� �������\n������� 1 ��� 2: ";
				int menu;
				//���� ����� ������
				cin >> menu;
				int dop;
				switch (menu) {
				case 1:
					break;
				case 2:
					cout << "������� ���������� �������������� ����������: ";
					cin >> dop;
					for (int i = 0;i < dop;i++) {
						cout << "\n  ������� �������� " << i + 1 << "-�� ���. ���������: ";
						cin >> parametrs[i + 5];
						cout << endl;
					}
					system("cls");
					cout << "\n\t�������������� ��������� ������� ������� � ����!";
					break;
				}*/
				//������� ���������� ��������� ����������, ������� �� ����� ����
				bool proverka = false;
				if (arr[0][14] == "����������� ��������� �������" && arr[2][51] == "���") {
					for (int i = 0;i < line;i++)
					{
						int rad[7]{ 0,1,4,39,40,51,8 };
						for(int q=0;q<size(rad);q++){
							for (int j = 0;j < stolb;j++)
							{
								ofs << arr[j][rad[q]] << "\t";
							}
							ofs << endl;
						}
						proverka = true;
					}
					
				}
				else {
					for(int i = 0;i < line;i++) {
						if ((arr[2][i] == "���"|| arr[1][i] == "���")&& (arr[2][i-12] == "? � ������ ���" || arr[1][i-12] == "? � ������ ���")) {
							int rad[7]{ 0,1,4,i-12,i-11,i,8 };
							for (int q = 0;q < size(rad);q++) {
								for (int j = 0;j < stolb;j++)
								{
									ofs << arr[j][rad[q]] << "\t";
								}
								ofs << endl;
							}
							proverka = true;
							break;
						}
					}
					
				}
				if (proverka == false) {
					string riad1[7]{ "Qk","? � ������ ���","���","����� ����� � ������" };
					for (int w = 0;w < 2;w++) {
						for (int j = 0;j < stolb;j++)
						{
							ofs << arr[j][w] << "\t";
						}
						ofs << endl;
					}
					for (int q = 0;q < size(riad1);q++) {
						for (int i = 0;i < line;i++) {
							
							if (arr[0][i] == riad1[q] || arr[1][i] == riad1[q] || arr[2][i] == riad1[q] || arr[3][i] == riad1[q]) {
								for (int j = 0;j < stolb;j++)
								{
									ofs << arr[j][i] << "\t";
								}
								ofs << endl;
								if (arr[0][i] == "? � ������ ���" || arr[1][i] == "? � ������ ���" || arr[2][i] == "? � ������ ���" || arr[3][i] == "? � ������ ���") {
									for (int j = 0;j < stolb;j++)
									{
										ofs << arr[j][i+1] << "\t";
									}
									ofs << endl;
								}
							}
						}
					}
				}
				
				/*else if(arr[0][40]=="����������� ��������� �������� �� ��������� ������� ������	") {
					for (int i = 0;i < line;i++)
					{
						if (i == 0 || i == 1 || i == 4 || i == 8 || i == 40 || i == 41 || i == 52) {
							for (int j = 0;j < stolb;j++)
							{
								ofs << arr[j][i] << "\t";
							}
							ofs << endl;
						}
					}
				}
				else if (arr[0][40] == "����������� ��������� �������� �� ��������� ������� ������") {
					for (int i = 0;i < line;i++)
					{
						if (i == 0 || i == 1 || i == 4 || i == 8 || i == 40 || i == 41 || i == 52) {
							for (int j = 0;j < stolb;j++)
							{
								ofs << arr[j][i] << "\t";
							}
							ofs << endl;
						}
					}
				}
				else {
					for (int i = 0;i < line;i++)
					{
						if (i == 0 || i == 1 || i == 4 || i == 8 || i == 42 || i == 43 || i == 54) {
							for (int j = 0;j < stolb;j++)
							{
								ofs << arr[j][i] << "\t";
							}
							ofs << endl;
						}
					}*/
				
				
				//����� � Excel ������ ����� �������� ����������
				/*bool proverka_vvod = false;
				for (int q = 0;q < size(parametrs);q++)
				{
					proverka_vvod = false;
					for (int j = 2;j < line;j++)
					{
						if (proverka_vvod == true) {
							goto QW;                           //goto QW
						}
						if (parametrs[q] == arr[0][j]) {
							for (int i = 0;i < stolb;i++) {
								ofs << arr[i][j] << "\t";
							}
							ofs << endl;
							proverka_vvod = true;
							str = parametrs[q];
							int a = 0;
							str1 = "";
							while (str[a] != ' ') {
								str1 = str1 + str[a];
								a++;
							}
							if (str1 == "�����������") {        //����������� ���� � ����. ������������ �� ������
								for (int i = 0;i < stolb;i++) {
									ofs << arr[i][j + 1] << "\t";
								}
								ofs << endl;
							}
						}
					}
				QW:;                                     //goto QW
				}*/

				//�������� ������ �������
				string** arr1 = new string * [stolb];
				for (int i = 0;i < stolb;i++) {
					arr1[i] = new string[size(parametrs) + 2];
				}


				ofs.close();
				ifs.open(file2);
				int m = 0;
				int s = 0;
				string str2;

				for (int i = 0;i < size(parametrs) + 1;i++)
				{
					//sled:  //goto sled
					str2 = "";
					getline(ifs, str2);
					int j = 0;
					for (int k = 0;k < size(str2);k++)
					{
						if (j == stolb - 1)
						{
							if (str2[k] != '\t')
							{
								arr1[j][i] = arr1[j][i] + str2[k];
							}
							else
							{
								arr1[j][i] = arr1[j][i] + str2[k];
								//goto sled; //goto sled
							}
						}
						if (j < stolb - 1)
						{
							if (str2[k] != '\t')
							{
								arr1[j][i] = arr1[j][i] + str2[k];
							}
							if (k == 0 && str2[k] == '\t') {
								arr1[j][i] = arr1[j][i] + str2[k];
								j++;
							}
							else if (str2[k] == '\t' && str2[k + 1] == '\t')
							{
								j++;
								arr1[j][i] = arr1[j][i] + str2[k];

							}
							else if (str2[k] == '\t')
							{
								j++;
							}
						}
					}
				}

				ifs.close();
				//ofs.open("./svod_1/" + qwrtq + "_�������_����.xlt");
				ofs.open("./svod_1/�������_����.xlt", ofstream::app);
				system("cls");
				SetConsoleCP(1251);
				ofs << endl << endl << "\t\t��� -\t" << qwrtq << endl;
				for (int i = 0;i < stolb - 3;i++) {
					for (int j = 0;j < (size(parametrs) + 2);j++) {
						ofs << arr1[i][j] << "\t";
					}
					ofs << endl;
				}
				ofs.close();
				//�������� ������������� ������a

				SetConsoleCP(866);
				for (int i = 0;i < stolb;i++) {

					delete[] arr[i];
				}
				if (*arr != nullptr) {
					delete[]arr;
				}

				for (int i = 0;i < stolb;i++) {
					delete[] arr1[i];
				}
				if (*arr1 != nullptr) {
					delete[]arr1;
				}
			}
		}
	}
	system("cls");
	cout << "\n\n\t��������� ������� ������� ���� �� �����.\n\t�������� ���:)";
	return 0;
}