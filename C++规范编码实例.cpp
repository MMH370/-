//姓名：1703-20173565 赵志博
//日期：2018.7.9
/*程序要求：
 简单通讯录程序：编程实现简单通讯录程序。
 通讯者的基本信息包括编号、姓名、性别、年龄、宅电、手机电话等信息。
 具体实现的管理功能如下：
（1） 输入并显示多个通讯者的信息；
（2） 可实现通讯者信息的添加；
（3） 查询（至少提供按姓名和手机查询两种方式）；
（4） 修改（只提供按照姓名进行修改）；
（5） 删除（依据指定的信息删除如姓名、编号等）；
（6）文件的导入和导出（从文件中读取若干条通讯录，或者将通讯录输出到文件中）*/
#include<iostream>                                                       //使用头文件增强可读性
#include<string>                                                         //C系统文件>C++系统文件>其他.h库文件>本项目.h文件
#include<fstream>
using namespace std;
#define LEN sizeof(TXL)
int i = -1;                                                             //在变量声明时进行初始化
//定义通讯录成员类
class TXL             //仅当只有数据成员时使用 struct, 其它一概使用 class.
{
public:
	string number;    //将 所有 数据成员声明为 private, 除非是 static const 类型成员 (遵循 常量命名规则).
	string name;
	string sex;
	string age;
	string homeNumber;
	string phoneNumber;
	string rests;
	TXL(string, string, string, string, string, string, string);
	~TXL();
	void setNumber();                     //我们倾向于编写简短, 凝练的函数.
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
TXL::TXL(string a="XXX", string b="XXX", string c="X", string d="X", string e="XXXXXXX", string f="XXXXXXXXXXX",string g="XXX")          //构造函数
{                                                        //函数的参数顺序为: 输入参数在先, 后跟输出参数.
	number = a;
	name = b;
	sex = c;
	age = d;
	homeNumber = e;
	phoneNumber = f;
	rests = g;
}
TXL::~TXL(){}                                                                                                                      //析构函数
//只允许在非虚函数中使用缺省参数, 且必须保证缺省参数的值始终一致. 
//缺省参数与 函数重载 遵循同样的规则. 一般情况下建议使用函数重载, 
//尤其是在缺省函数带来的可读性提升不能弥补下文中所提到的缺点的情况下.
void TXL::setNumber(){ cin>>number; }                                //所有按引用传递的参数必须加上 const.                                                                        //定义成员函数
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

int main()                                                                                         //主函数
{
	TXL people[20];
	cout << "请选择下面一个项目：" << endl;                                                        //显示目录
	cout << "1 创建" << endl;
	cout << "2 添加" << endl;
	cout << "3 查询" << endl;
	cout << "4 修改" << endl;
	cout << "5 删除" << endl;
	cout << "6 显示" << endl;
	cout << "7 文件导出" << endl;
	cout << "8 文件导入" << endl;
	cout << "9 退出" << endl;
	cout << "请选择：" << endl;
	int a;
	for (;;)                                                                                       //死循环式选择目录，知道输入9退出
	{
		cin >> a;
		if (a == 1)                                                                                //输入1时，开始创建目录
		{
			do{
				i = i + 1;
				people[i].setNumber();

				people[i].setName();

				people[i].setSex();

				people[i].setAge();

				people[i].setHomeNumber();

				people[i].setPhoneNumber();

			} while (people[i].getNumber() != "0");                                               //直到输入一个通讯录成员的编号为0时，结束创建，创建数存入i
		}
		if (a == 2)                                                                               //输入2执行通过编号确认，并添加某一成员的额外信息。
		{
			cout << "请输入想要添加额外信息的人的编号：" << endl;
			string j;
			cin >> j;
			for (int k = 0; k < i; k++)
			{
				if (people[k].getNumber() == j)
				{
					cout << "请输入想要添加的信息：" << endl;
					people[k].setRests();
					cout << "额外信息添加完成。" << endl;
				}
			}
		}
		if (a == 3)                                                                                 //输入3执行查询功能
		{
			cout << "请选择查询方式：" << endl;
			cout << "1.姓名" << endl;                                                               //输入1通过姓名查询
			cout << "2.手机号码" << endl;                                                           //输入2通过手机号码查询
			int b;
			string Xname;
			string XPhoneNumber;
			cin >> b;
			switch (b)
			{
			case 1:
			{
				cout << "请输入您想要查找的人的姓名：";
				cin >> Xname;
				for (int j = 0; j <= i; j++)
				{
					if (people[j].getName() == Xname)
					{
						cout << "编号：" << people[j].getNumber() << endl;
						cout << "姓名：" << people[j].getName() << endl;
						cout << "性别：" << people[j].getSex() << endl;
						cout << "年龄：" << people[j].getAge() << endl;
						cout << "住宅电话：" << people[j].getHomeNumber() << endl;
						cout << "手机电话：" << people[j].getPhoneNumber() << endl;
						cout << "其他信息：" << people[j].getRests() << endl;
						break;
					}
					else if (j == i)
						cout << "抱歉……查无此人·_·|请输入正确的姓名好么" << endl;
				}
			}break;
			case 2:
			{
				cout << "请输入您想要查找的人的手机号码：";
				cin >> XPhoneNumber;
				for (int j = 0; j <= i; j++)
				{
					if (people[j].getPhoneNumber() == XPhoneNumber)
					{
						cout << "编号：" << people[j].getNumber() << endl;
						cout << "姓名：" << people[j].getName() << endl;
						cout << "性别：" << people[j].getSex() << endl;
						cout << "年龄：" << people[j].getAge() << endl;
						cout << "住宅电话：" << people[j].getHomeNumber() << endl;
						cout << "手机电话：" << people[j].getPhoneNumber() << endl;
						cout << "其他信息：" << people[j].getRests() << endl;
						break;
					}
					else if (j == i)
						cout << "抱歉……查无此人·_·|请输入正确的手机号码" << endl;
				}
			}break;
			}
		}
		if (a == 4)                                                                                 //输入4执行修改
		{
			string NAME;
			cout << "请输入一个姓名以供修改其信息：";                                               //输入姓名以供确认成员
			cin >> NAME;
			for (int j = 0; j < i; j++)
			{
				if (people[j].getName() == NAME)
				{
					cout << "请选择想要修改的信息：" << endl;                                        //选择想要修改的信息
					cout << "1  编号" << endl << "2  姓名" << endl << "3  性别" << endl << "4  年龄" << endl << "5  住宅电话" << endl << "6 手机电话" << endl << "7 其他信息" << endl;
					int c;
					cin >> c;
					switch (c)                                                                       //被选择的成员信息将被修改
					{
					case 1:
					{
						cout << people[j].getName() << "的原编号为：" << people[j].getNumber() << endl << "您打算将其修改为：";
						people[j].setNumber();
					}break;
					case 2:
					{
						cout << people[j].getName() << "的原姓名为：" << people[j].getName() << endl << "您打算将其修改为：";
						people[j].setName();
					}break;
					case 3:
					{
						cout << people[j].getName() << "的原性别为：" << people[j].getSex() << endl << "您打算将其修改为：";
						people[j].setSex();
					}break;
					case 4:
					{
						cout << people[j].getName() << "的原年龄为：" << people[j].getAge() << endl << "您打算将其修改为：";
						people[j].setAge();
					}break;
					case 5:
					{
						cout << people[j].getName() << "的原住宅电话为：" << people[j].getHomeNumber() << endl << "您打算将其修改为：";
						people[j].setHomeNumber();
					}break;
					case 6:
					{
						cout << people[j].getName() << "的原手机电话为：" << people[j].getPhoneNumber() << endl << "您打算将其修改为：";
						people[j].setPhoneNumber();
					}break;
					case 7:
					{
						cout << people[j].getName() << "的原补充信息为：" << people[j].getRests() << endl << "您打算将其修改为：";
						people[j].setRests();
					}break;
					}
				}
			}
		}
		if (a == 5)                                                                                      //输入5执行删除
		{
			string DELETE_NAME;
			cout << "请输入一个姓名以删除其信息：";                                                      ///输入姓名以供确认成员
			cin >> DELETE_NAME;
			int j = 0;
			for (int n = 0; n < 20; n++)
				if (people[n].getName() == DELETE_NAME)
				{
					j = n;
					cout << "请选择想要删除的信息：" << endl;                                            //显示想要删除信息的选择目录
					cout << "1  编号" << endl << "2  姓名" << endl << "3  性别" << endl << "4  年龄" << endl << "5  住宅电话" << endl << "6 手机电话" << endl << "7 其他信息" << endl;
				}
			int d;
			cin >> d;
			switch (d)                                                                                   //执行删除，被删除的信息将被“XXXXX”覆盖
			{
			case 1:
			{
				cout << people[j].getName() << "的编号为：" << people[j].getNumber() << endl;
				people[j].SETNumber("XXX");
				cout << "该信息已删除完成！" << endl;
			}break;
			case 2:
			{
				cout << people[j].getName() << "的原姓名为：" << people[j].getName() << endl;
				people[j].SETName("XXX");
				cout << "该信息已删除完成！" << endl;
			}break;
			case 3:
			{
				cout << people[j].getName() << "的原性别为：" << people[j].getSex() << endl;
				people[j].SETSex("X");
				cout << "该信息已删除完成！" << endl;
			}break;
			case 4:
			{
				cout << people[j].getName() << "的原年龄为：" << people[j].getAge() << endl;
				people[j].SETAge(0);
				cout << "该信息已删除完成！" << endl;
			}break;
			case 5:
			{
				cout << people[j].getName() << "的原住宅电话为：" << people[j].getHomeNumber() << endl;
				people[j].SETHomeNumber("XXXXXXX");
				cout << "该信息已删除完成！" << endl;
			}break;
			case 6:
			{
				cout << people[j].getName() << "的原手机电话为：" << people[j].getPhoneNumber() << endl;
				people[j].SETPhoneNumber("XXXXXXXXXXX");
				cout << "该信息已删除完成！" << endl;
			}break;
			case 7:
			{
				cout << people[j].getName() << "的原补充信息为：" << people[j].getRests() << endl;
				people[j].SETRests("XXX");
				cout << "该信息已删除完成！" << endl;
			}break;
			}
		}
		if (a == 6)                                                                                    //输入6，打印所有通讯录成员（i已存入成员数）
		{
			cout << "全部通讯录内容如下：" << endl;
			for (int j = 0; j < i; j++)
			{
				cout << "*************************************" << endl;
				cout << "编号：" << people[j].getNumber() << endl;
				cout << "姓名：" << people[j].getName() << endl;
				cout << "性别：" << people[j].getSex() << endl;
				cout << "年龄：" << people[j].getAge() << endl;
				cout << "住宅电话：" << people[j].getHomeNumber() << endl;
				cout << "手机电话：" << people[j].getPhoneNumber() << endl;
				cout << "其他信息：" << people[j].getRests() << endl;
			}
		}
		if (a == 7)                                                                                    //输入7，从“亲朋好友.txt”导入数据，并打印在显示屏
		{
			class TXL t[20];
			ifstream infile("亲朋好友.txt", ios::in | ios::binary);
			if (!infile)
			{
				cerr << "infile defete!!!" << endl;
				exit(1);
			}
			for (int j = 0; j < i; j++)
				infile >> t[j].number >> t[j].name >> t[j].sex >> t[j].age >> t[j].homeNumber >> t[j].phoneNumber >> t[j].rests;
			infile.close();
			cout << "导入的数据如下：" << endl;
			for (int j = 0; j < i; j++)
			{
				cout << "编号：" << t[j].getNumber() << endl;
				cout << "姓名：" << t[j].getName() << endl;
				cout << "性别：" << t[j].getSex() << endl;
				cout << "年龄：" << t[j].getAge() << endl;
				cout << "住宅电话：" << t[j].getHomeNumber() << endl;
				cout << "手机电话：" << t[j].getPhoneNumber() << endl;
				cout << "其他信息：" << t[j].getRests() << endl << endl;
			}
		}
		if (a == 8)                                                                                    //输入8，将创建并被更改过的通讯录导出到“亲朋好友.txt”
		{
			ofstream outfile("亲朋好友.txt", ios::out | ios::binary);
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
			cout << "导出成功！" << endl;
		}
		if (a == 9)break;                                                                                    //输入9，结束程序
	}
	return 0;
}
