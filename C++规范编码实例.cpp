//������1703-20173565 ��־��
//���ڣ�2018.7.9
/*����Ҫ��
 ��ͨѶ¼���򣺱��ʵ�ּ�ͨѶ¼����
 ͨѶ�ߵĻ�����Ϣ������š��������Ա����䡢լ�硢�ֻ��绰����Ϣ��
 ����ʵ�ֵĹ��������£�
��1�� ���벢��ʾ���ͨѶ�ߵ���Ϣ��
��2�� ��ʵ��ͨѶ����Ϣ����ӣ�
��3�� ��ѯ�������ṩ���������ֻ���ѯ���ַ�ʽ����
��4�� �޸ģ�ֻ�ṩ�������������޸ģ���
��5�� ɾ��������ָ������Ϣɾ������������ŵȣ���
��6���ļ��ĵ���͵��������ļ��ж�ȡ������ͨѶ¼�����߽�ͨѶ¼������ļ��У�*/
#include<iostream>                                                       //ʹ��ͷ�ļ���ǿ�ɶ���
#include<string>                                                         //Cϵͳ�ļ�>C++ϵͳ�ļ�>����.h���ļ�>����Ŀ.h�ļ�
#include<fstream>
using namespace std;
#define LEN sizeof(TXL)
int i = -1;                                                             //�ڱ�������ʱ���г�ʼ��
//����ͨѶ¼��Ա��
class TXL             //����ֻ�����ݳ�Աʱʹ�� struct, ����һ��ʹ�� class.
{
public:
	string number;    //�� ���� ���ݳ�Ա����Ϊ private, ������ static const ���ͳ�Ա (��ѭ ������������).
	string name;
	string sex;
	string age;
	string homeNumber;
	string phoneNumber;
	string rests;
	TXL(string, string, string, string, string, string, string);
	~TXL();
	void setNumber();                     //���������ڱ�д���, �����ĺ���.
	void SETNumber(string);
	string getNumber();
	void setName();
	void SETName(string);
	string getName();
	void setSex();
	void SETSex(string);
	string getSex();
	void setAge();
	void SETAge(string);
	string getAge();
	void setHomeNumber();
	void SETHomeNumber(string);
	string getHomeNumber();
	void setPhoneNumber();
	void SETPhoneNumber(string);
	string getPhoneNumber();
	void setRests();
	void SETRests(string);
	string getRests();
};
TXL::TXL(string a="XXX", string b="XXX", string c="X", string d="X", string e="XXXXXXX", string f="XXXXXXXXXXX",string g="XXX")          //���캯��
{                                                        //�����Ĳ���˳��Ϊ: �����������, ����������.
	number = a;
	name = b;
	sex = c;
	age = d;
	homeNumber = e;
	phoneNumber = f;
	rests = g;
}
TXL::~TXL(){}                                                                                                                      //��������
//ֻ�����ڷ��麯����ʹ��ȱʡ����, �ұ��뱣֤ȱʡ������ֵʼ��һ��. 
//ȱʡ������ �������� ��ѭͬ���Ĺ���. һ������½���ʹ�ú�������, 
//��������ȱʡ���������Ŀɶ������������ֲ����������ᵽ��ȱ��������.
void TXL::setNumber(){ cin>>number; }                                //���а����ô��ݵĲ���������� const.                                                                        //�����Ա����
void TXL::SETNumber(string a){ number = a; }
string TXL::getNumber(){ return number; }
void TXL::setName(){ cin >> name; }
void TXL::SETName(string b){ name = b; }
string TXL::getName(){ return name; }
void TXL::setSex(){ cin >> sex; }
void TXL::SETSex(string c){ sex = c; }
string TXL::getSex(){ return sex; }
void TXL::setAge(){ cin>>age; }
void TXL::SETAge(string d){ age = d; }
string TXL::getAge(){ return age; }
void TXL::setHomeNumber(){ cin>>homeNumber; }
void TXL::SETHomeNumber(string e){ homeNumber = e; }
string TXL::getHomeNumber(){ return homeNumber; }
void TXL::setPhoneNumber(){ cin>>phoneNumber; }
void TXL::SETPhoneNumber(string f){ phoneNumber = f; }
string TXL::getPhoneNumber(){ return phoneNumber; }
void TXL::setRests(){ cin >> rests; }
void TXL::SETRests(string g){ rests = g; }
string TXL::getRests(){ return rests; }

int main()                                                                                         //������
{
	TXL people[20];
	cout << "��ѡ������һ����Ŀ��" << endl;                                                        //��ʾĿ¼
	cout << "1 ����" << endl;
	cout << "2 ���" << endl;
	cout << "3 ��ѯ" << endl;
	cout << "4 �޸�" << endl;
	cout << "5 ɾ��" << endl;
	cout << "6 ��ʾ" << endl;
	cout << "7 �ļ�����" << endl;
	cout << "8 �ļ�����" << endl;
	cout << "9 �˳�" << endl;
	cout << "��ѡ��" << endl;
	int a;
	for (;;)                                                                                       //��ѭ��ʽѡ��Ŀ¼��֪������9�˳�
	{
		cin >> a;
		if (a == 1)                                                                                //����1ʱ����ʼ����Ŀ¼
		{
			do{
				i = i + 1;
				people[i].setNumber();

				people[i].setName();

				people[i].setSex();

				people[i].setAge();

				people[i].setHomeNumber();

				people[i].setPhoneNumber();

			} while (people[i].getNumber() != "0");                                               //ֱ������һ��ͨѶ¼��Ա�ı��Ϊ0ʱ����������������������i
		}
		if (a == 2)                                                                               //����2ִ��ͨ�����ȷ�ϣ������ĳһ��Ա�Ķ�����Ϣ��
		{
			cout << "��������Ҫ��Ӷ�����Ϣ���˵ı�ţ�" << endl;
			string j;
			cin >> j;
			for (int k = 0; k < i; k++)
			{
				if (people[k].getNumber() == j)
				{
					cout << "��������Ҫ��ӵ���Ϣ��" << endl;
					people[k].setRests();
					cout << "������Ϣ�����ɡ�" << endl;
				}
			}
		}
		if (a == 3)                                                                                 //����3ִ�в�ѯ����
		{
			cout << "��ѡ���ѯ��ʽ��" << endl;
			cout << "1.����" << endl;                                                               //����1ͨ��������ѯ
			cout << "2.�ֻ�����" << endl;                                                           //����2ͨ���ֻ������ѯ
			int b;
			string Xname;
			string XPhoneNumber;
			cin >> b;
			switch (b)
			{
			case 1:
			{
				cout << "����������Ҫ���ҵ��˵�������";
				cin >> Xname;
				for (int j = 0; j <= i; j++)
				{
					if (people[j].getName() == Xname)
					{
						cout << "��ţ�" << people[j].getNumber() << endl;
						cout << "������" << people[j].getName() << endl;
						cout << "�Ա�" << people[j].getSex() << endl;
						cout << "���䣺" << people[j].getAge() << endl;
						cout << "סլ�绰��" << people[j].getHomeNumber() << endl;
						cout << "�ֻ��绰��" << people[j].getPhoneNumber() << endl;
						cout << "������Ϣ��" << people[j].getRests() << endl;
						break;
					}
					else if (j == i)
						cout << "��Ǹ�������޴��ˡ�_��|��������ȷ��������ô" << endl;
				}
			}break;
			case 2:
			{
				cout << "����������Ҫ���ҵ��˵��ֻ����룺";
				cin >> XPhoneNumber;
				for (int j = 0; j <= i; j++)
				{
					if (people[j].getPhoneNumber() == XPhoneNumber)
					{
						cout << "��ţ�" << people[j].getNumber() << endl;
						cout << "������" << people[j].getName() << endl;
						cout << "�Ա�" << people[j].getSex() << endl;
						cout << "���䣺" << people[j].getAge() << endl;
						cout << "סլ�绰��" << people[j].getHomeNumber() << endl;
						cout << "�ֻ��绰��" << people[j].getPhoneNumber() << endl;
						cout << "������Ϣ��" << people[j].getRests() << endl;
						break;
					}
					else if (j == i)
						cout << "��Ǹ�������޴��ˡ�_��|��������ȷ���ֻ�����" << endl;
				}
			}break;
			}
		}
		if (a == 4)                                                                                 //����4ִ���޸�
		{
			string NAME;
			cout << "������һ�������Թ��޸�����Ϣ��";                                               //���������Թ�ȷ�ϳ�Ա
			cin >> NAME;
			for (int j = 0; j < i; j++)
			{
				if (people[j].getName() == NAME)
				{
					cout << "��ѡ����Ҫ�޸ĵ���Ϣ��" << endl;                                        //ѡ����Ҫ�޸ĵ���Ϣ
					cout << "1  ���" << endl << "2  ����" << endl << "3  �Ա�" << endl << "4  ����" << endl << "5  סլ�绰" << endl << "6 �ֻ��绰" << endl << "7 ������Ϣ" << endl;
					int c;
					cin >> c;
					switch (c)                                                                       //��ѡ��ĳ�Ա��Ϣ�����޸�
					{
					case 1:
					{
						cout << people[j].getName() << "��ԭ���Ϊ��" << people[j].getNumber() << endl << "�����㽫���޸�Ϊ��";
						people[j].setNumber();
					}break;
					case 2:
					{
						cout << people[j].getName() << "��ԭ����Ϊ��" << people[j].getName() << endl << "�����㽫���޸�Ϊ��";
						people[j].setName();
					}break;
					case 3:
					{
						cout << people[j].getName() << "��ԭ�Ա�Ϊ��" << people[j].getSex() << endl << "�����㽫���޸�Ϊ��";
						people[j].setSex();
					}break;
					case 4:
					{
						cout << people[j].getName() << "��ԭ����Ϊ��" << people[j].getAge() << endl << "�����㽫���޸�Ϊ��";
						people[j].setAge();
					}break;
					case 5:
					{
						cout << people[j].getName() << "��ԭסլ�绰Ϊ��" << people[j].getHomeNumber() << endl << "�����㽫���޸�Ϊ��";
						people[j].setHomeNumber();
					}break;
					case 6:
					{
						cout << people[j].getName() << "��ԭ�ֻ��绰Ϊ��" << people[j].getPhoneNumber() << endl << "�����㽫���޸�Ϊ��";
						people[j].setPhoneNumber();
					}break;
					case 7:
					{
						cout << people[j].getName() << "��ԭ������ϢΪ��" << people[j].getRests() << endl << "�����㽫���޸�Ϊ��";
						people[j].setRests();
					}break;
					}
				}
			}
		}
		if (a == 5)                                                                                      //����5ִ��ɾ��
		{
			string DELETE_NAME;
			cout << "������һ��������ɾ������Ϣ��";                                                      ///���������Թ�ȷ�ϳ�Ա
			cin >> DELETE_NAME;
			int j = 0;
			for (int n = 0; n < 20; n++)
				if (people[n].getName() == DELETE_NAME)
				{
					j = n;
					cout << "��ѡ����Ҫɾ������Ϣ��" << endl;                                            //��ʾ��Ҫɾ����Ϣ��ѡ��Ŀ¼
					cout << "1  ���" << endl << "2  ����" << endl << "3  �Ա�" << endl << "4  ����" << endl << "5  סլ�绰" << endl << "6 �ֻ��绰" << endl << "7 ������Ϣ" << endl;
				}
			int d;
			cin >> d;
			switch (d)                                                                                   //ִ��ɾ������ɾ������Ϣ������XXXXX������
			{
			case 1:
			{
				cout << people[j].getName() << "�ı��Ϊ��" << people[j].getNumber() << endl;
				people[j].SETNumber("XXX");
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			case 2:
			{
				cout << people[j].getName() << "��ԭ����Ϊ��" << people[j].getName() << endl;
				people[j].SETName("XXX");
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			case 3:
			{
				cout << people[j].getName() << "��ԭ�Ա�Ϊ��" << people[j].getSex() << endl;
				people[j].SETSex("X");
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			case 4:
			{
				cout << people[j].getName() << "��ԭ����Ϊ��" << people[j].getAge() << endl;
				people[j].SETAge(0);
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			case 5:
			{
				cout << people[j].getName() << "��ԭסլ�绰Ϊ��" << people[j].getHomeNumber() << endl;
				people[j].SETHomeNumber("XXXXXXX");
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			case 6:
			{
				cout << people[j].getName() << "��ԭ�ֻ��绰Ϊ��" << people[j].getPhoneNumber() << endl;
				people[j].SETPhoneNumber("XXXXXXXXXXX");
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			case 7:
			{
				cout << people[j].getName() << "��ԭ������ϢΪ��" << people[j].getRests() << endl;
				people[j].SETRests("XXX");
				cout << "����Ϣ��ɾ����ɣ�" << endl;
			}break;
			}
		}
		if (a == 6)                                                                                    //����6����ӡ����ͨѶ¼��Ա��i�Ѵ����Ա����
		{
			cout << "ȫ��ͨѶ¼�������£�" << endl;
			for (int j = 0; j < i; j++)
			{
				cout << "*************************************" << endl;
				cout << "��ţ�" << people[j].getNumber() << endl;
				cout << "������" << people[j].getName() << endl;
				cout << "�Ա�" << people[j].getSex() << endl;
				cout << "���䣺" << people[j].getAge() << endl;
				cout << "סլ�绰��" << people[j].getHomeNumber() << endl;
				cout << "�ֻ��绰��" << people[j].getPhoneNumber() << endl;
				cout << "������Ϣ��" << people[j].getRests() << endl;
			}
		}
		if (a == 7)                                                                                    //����7���ӡ��������.txt���������ݣ�����ӡ����ʾ��
		{
			class TXL t[20];
			ifstream infile("�������.txt", ios::in | ios::binary);
			if (!infile)
			{
				cerr << "infile defete!!!" << endl;
				exit(1);
			}
			for (int j = 0; j < i; j++)
				infile >> t[j].number >> t[j].name >> t[j].sex >> t[j].age >> t[j].homeNumber >> t[j].phoneNumber >> t[j].rests;
			infile.close();
			cout << "������������£�" << endl;
			for (int j = 0; j < i; j++)
			{
				cout << "��ţ�" << t[j].getNumber() << endl;
				cout << "������" << t[j].getName() << endl;
				cout << "�Ա�" << t[j].getSex() << endl;
				cout << "���䣺" << t[j].getAge() << endl;
				cout << "סլ�绰��" << t[j].getHomeNumber() << endl;
				cout << "�ֻ��绰��" << t[j].getPhoneNumber() << endl;
				cout << "������Ϣ��" << t[j].getRests() << endl << endl;
			}
		}
		if (a == 8)                                                                                    //����8���������������Ĺ���ͨѶ¼���������������.txt��
		{
			ofstream outfile("�������.txt", ios::out | ios::binary);
			if (!outfile)
			{
				cout << "open error !!!" << endl;
				exit(1);
			}
			for (int j = 0; j < i; j++)
			{
				outfile << people[j].getNumber() << " ";
				outfile << people[j].getName() << " ";
				outfile << people[j].getSex() << " ";
				outfile << people[j].getAge() << " ";
				outfile << people[j].getHomeNumber() << " ";
				outfile << people[j].getPhoneNumber() << " ";
				outfile << people[j].getRests() << endl;
			}
			cout << "�����ɹ���" << endl;
		}
		if (a == 9)break;                                                                                    //����9����������
	}
	return 0;
}
