#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<string>
//#include<cmath>
//#include<climits>
//#include<stdio.h>
//using namespace std;
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//double max(double a, double b)
//{
//	return a > b ? a : b;
//}
//long long max(long long a, long long b)
//{
//	return a > b ? a : b;
//}
//
//struct Stu {
//	string name;
//	int age;
//};
//
//int main()
//{
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	//const int Size = 20;
//	//char str1[Size];
//	//char str2[Size];
//	//char ch = 55;
//	//cin.getline(str1, Size);
//	//if (cin.fail())
//	//{
//	//	cout << "shixiao\n";
//	//}
//	//else if (ch == '\n')
//	//	cout << "n\n";
//	//else
//	//	cout << str1 << endl;
//	//cin >> ch;
//	//
//	//cout << endl;
//	//cout << "____________________"<<endl;
//	//cout << str1 << " " << ch << endl;
//	//cin.get(str2, Size).get();
//	//cout << "___________________" << endl;
//	//cin.getline(str1, Size).getline(str2, Size);
//	//cout << "The result is : " << endl;
//	//cout << str1 << endl << str2 << endl;
////	string s1 = "hellow";
////	char s2[20] = " c++";
////	char s3[20]{ "hellow" };
////	string s4 = { " c++" };
////	cout << s1 + s4 << endl;
////
////	string str;
////	cout << "Enter a line of text:\n";
////	getline(cin, str);
////	cout << str << " contains " << str.size() << " characters." << endl;
////
////	cout << R"*+(Jim "King" Tuff uses "\n" instead of endl.
////kkkkkkk)*+" << endl;
////	cout << "hdshfjkshkdfhsjf"
////		<< "jxhvkjcv"
////		<< endl;
//
//	Stu s[2] = { {"yan",19},{"L",20} };
//	cout << s[0].name << " and " << s[1].name << endl;
//	cout << "The age is: " << s[0].age << " and " << s[1].age << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<array>
//using namespace std;
//
//int main()
//{
//	double a1[4] = { 1.2,2.4,3.6,4.8 };
//	vector<double> a2(4);
//	a2[0] = 1.0 / 3.0;
//	a2[1] = 1.0 / 5.0;
//	a2[2] = 1.0 / 7.0;
//	a2[3] = 1.0 / 9.0;
//	vector<double> a5(4);
//	a5 = a2;
//	array<double, 4>a3 = { 3.14,2.72,1.62,1.41 };
//	array<double, 4>a4;
//	a4 = a3;
//	cout << a4[2] << endl;
//	return 0;
//}

//6.7---6.14 利用cin.clear()解决类型不匹配

//#include<iostream>
//const int Max = 5;
//int main()
//{
//	using namespace std;
//	int golf[Max];
//    cout << "Please enter your golf scores.\n";
//    cout << "You must enter " << Max << " rounds.\n";
//    int i;
//    for (i = 0; i < Max; i++)
//    {
//        cout << "round #" << i + 1 << ": ";
//        while (!(cin >> golf[i]))
//        {
//            cin.clear();
//            while (cin.get() != '\n')
//                continue;
//            cout << "Please enter a number: ";
//        }
//    }
//
//    double total = 0.0;
//    // 累加每一轮的成绩
//    for (i = 0; i < Max; i++)
//        total += golf[i];
//    
//    cout << total / Max << " = average score " << Max << " rounds\n";// 计算并输出平均成绩
//
//	return 0;
//}

//6.8---文本输入与输出

//#include<iostream>
//#include<fstream>
//int main()
//{
//	using namespace std;
//    
//    char automobile[50];
//    int year;
//    double a_price;
//    double b_price;
//
//    ofstream outFile;
//    outFile.open("score.txt");
//    if (!outFile) {
//        cout << "Failed to open file" << endl;
//        return 1;
//    }
//
//    cout << "Enter the make and model of automobile: ";
//    cin.getline(automobile, 50);
//    cout << "Enter the model year: ";
//    cin >> year;
//    cout << "Enter the original asking price: ";
//    cin >> a_price;
//    b_price = 0.913 * a_price;
//
//    cout << fixed;
//    cout.precision(2);
//    cout.setf(ios_base::showpoint);
//    cout << "Make and model: " << automobile << endl;
//    cout << "Year: " << year << endl;
//    cout << "Was asking $" << a_price << endl;
//    cout << "Now asking $" << b_price << endl;
//
//    outFile << fixed;
//    outFile.precision(2);
//    outFile.setf(ios_base::showpoint);
//    outFile << "Make and model: " << automobile << endl;
//    outFile << "Year: " << year << endl;
//    outFile << "Was asking $" << a_price << endl;
//    outFile << "Now asking $" << b_price << endl;
//
//    outFile.close();
//	return 0;
//}

//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//const int SIZE = 60;
//int main()
//{
//    using namespace std;
//    char filename[SIZE];
//    ifstream inFile;
//
//    cout << "Enter name of data file: ";
//    cin.getline(filename, SIZE);
//
//    inFile.open(filename);
//    if (!inFile.is_open()) {
//        cout << "Could not open the file " << filename << endl;
//        cout << "Program terminating.\n";
//        exit(EXIT_FAILURE);
//    }
//
//    double value;
//    double sum = 0.0;
//    double count = 0;
//
//    inFile >> value;
//    while (inFile.good()) {
//        ++count;
//        sum += value;
//        inFile >> value;
//    }
//
//    if (inFile.eof()) {
//        cout << "End of file reached.\n";
//    }
//    else if (inFile.fail()) {
//        cout << "Input terminated by data mismatch.\n";
//    }
//    else {
//        cout << "Input terminated for unknown reason.\n";
//    }
//
//    if (count == 0) {
//        cout << "No data processed.\n";
//    }
//    else {
//        cout << "Items read: " << count << endl;
//        cout << "Sum: " << sum << endl;
//        cout << "Average: " << sum / count << endl;
//    }
//
//    inFile.close();
//    return 0;
//}

//#include <iostream>
//const int Len = 80;
//void subdivide(char ar[], int low, int high, int level);
//const int Divs = 8;
//
//int main() {
//    char ruler[Len];
//    int i;
//    for (i = 1; i < Len - 2; i++)
//        ruler[i] = ' ';
//    ruler[Len - 1] = '\0';
//    int max = Len - 2;
//    int min = 0;
//    ruler[min] = ruler[max] = '|';
//    std::cout << ruler << std::endl;
//    for (i = 1; i <= Divs; i++) {
//        subdivide(ruler, min, max, i);
//        std::cout << ruler << std::endl;
//        for (int j = 1; j < Len - 2; j++)
//            ruler[j] = ' ';
//    }
//    return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level) {
//    if (level == 0)
//        return;
//    int mid = (high + low) / 2;
//    ar[mid] = '|';
//    subdivide(ar, low, mid, level - 1);
//    subdivide(ar, mid, high, level - 1);
//}

//#include<iostream>
//#include<fstream>
//using namespace std;
//void file_it(ostream& os, const char*, int year, double a_price, double b_price);
//int main()
//{
//
//	char automobile[50];
//	int year;
//	double a_price;
//	double b_price;
//
//	ofstream outFile;
//	outFile.open("score.txt");
//	if (!outFile.is_open()) {
//		cout << "Failed to open file" << endl;
//		return 1;
//	}
//
//	cout << "Enter the make and model of automobile: ";
//	cin.getline(automobile, 50);
//	cout << "Enter the model year: ";
//	cin >> year;
//	cout << "Enter the original asking price: ";
//	cin >> a_price;
//	b_price = 0.913 * a_price;
//
//	file_it(cout, automobile, year, a_price, b_price);
//	file_it(outFile, automobile, year, a_price, b_price);
//
//	cout << 12.5 << endl;
//	outFile.close();
//	return 0;
//}
//void file_it(ostream& os, const char* automobile, int year, double a_price, double b_price)
//{
//	ios_base::fmtflags initial;
//	initial = os.setf(ios_base::fixed);
//	os.setf(ios_base::showpoint);
//	os.precision(2);
//	os << "Make and model: " << automobile << endl;
//	os << "Year: " << year << endl;
//	os << "Was asking $" << a_price << endl;
//	os << "Now asking $" << b_price << endl;
//	os.setf(initial);
//}

//test

//// 场景一测试
//#include <iostream>
//void f(const char* str, unsigned n = 1) { std::cout << "Version 1\n"; }
//void f(const char* str) { std::cout << "Version 2\n"; }
//// 初始版本
//void send(const std::string& data) { std::cout << 1 << std::endl; }
//
//// 扩展版本（添加可选参数）
//void send(const std::string& data, bool compress) { std::cout << 2 << std::endl; }
//int main()
//{
//	const char* p = "hello";
//	send(p);
//}
//
// 场景二
//#include <iostream>
//void f(int x) { std::cout << "Version A\n"; }
//void f(int x, int y = 0) { std::cout << "Version B\n"; }
//int main() { f(10); } // 应报歧义

//#include<iostream>
//void f();
//namespace b
//{
//	int y = 20;
//}
//namespace myth
//{
//
//	namespace a
//	{
//		using b::y;
//		namespace c
//		{
//			int z = 30;
//		}
//		int x = 10;
//	}
//	using namespace a;
//	using std::cout;
//	using std::cin;
//}
//namespace MEF = myth::a::c;
//namespace
//{
//	int counts = 50;
//}
//namespace e { int x = 2; }
//namespace d { int x = 1; using namespace e; void f() { x = 10; } }
//
//int main()
//{
//	
//	d::f();
//	std::cout << d::x << std::endl;
//	myth::cout << myth::c::z << std::endl;
//	b::y = 100;
//	myth::cout << myth::x << "," << myth::a::y << "," << b::y << std::endl;
//	std::cout << MEF::z << std::endl;
//	using namespace myth;
//	cout << x << " " << y << " " << c::z << std::endl;
//	cout << counts;
//	f();
//	return 0;
//}

// 类(OOP)

//1.Stock类

//#include<iostream>
//#include"head.h"
//int main()
//{
//	using std::cout;
//	using std::endl;
//
//	Stock kate("Windows", 100, 1000);
//	kate.show();
//	kate.show();
//	kate.buy(15, 18.125);
//	kate.show();
//	kate.sell(400, 20.00);
//	kate.show();
//	kate.update(40.125);
//	kate.show();
//	kate.buy(300000, 40.125);
//	kate.show();
//	kate.sell(300000, 0.125);
//	kate.show();
//	cout << endl;
//
//	Stock stocks[4] = {
//		Stock("NanoSmart",12,20.0),
//		Stock("Boffo Objects",200,2.0),
//		Stock("M",130,3.25),
//		Stock("F",60,6.5)
//	};
//	for (int i = 0; i < 4; i++)
//	{
//		stocks[i].show();
//	}
//	cout << endl;
//
//	const Stock* top = &stocks[0];
//	for (int i = 1; i < 4; i++)
//	{
//		top = &top->topval(stocks[i]);
//	}
//	top->show();
//	cout << endl;
//
//	enum class b
//	{
//		a = 10
//	};
//	enum class c
//	{
//		a = 20
//	};
//	cout << int(b::a) << "," << int(c::a) << endl;
//	return 0;
//}

//2.Stack类

//#include<iostream>
//#include<cctype>
//#include"head.h"
//int main()
//{
//	using namespace std;
//	Stack st;
//	char ch;
//	unsigned long po;
//	cout << "Please enter A to add a purchase order,\n"
//		<< "P to process a PO,or Q to quit.\n";
//	while (cin >> ch && toupper(ch) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(ch))
//		{
//			cout << "请输入字母\n";
//			continue;
//		}
//		switch (ch)
//		{
//		case'a':
//		case'A':
//			cout << "Enter a PO number to add: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "stack already full\n";
//			else
//				st.push(po);
//			break;
//		case'p':
//		case'P':
//			if (st.isempty())
//				cout << "stack already empty\n";
//			else
//			{
//				st.pop(po);
//				cout << "PO #" << po << " popped\n";
//			}
//			break;
//		default:
//			cout << "请输入A或P\n";
//		}
//		cout << "Please enter A to add a purchase order,\n"
//			<< "P to process a PO,or Q to quit.\n";
//	}
//	cout << "Bye\n";
//	return 0;
//}

//3.Time类——使用运算符重载

//#include<iostream>
//#include"head.h"
//
//int main()
//{
//	using std::cout;
//	using std::endl;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing = Time(5, 55);
//	Time total;
//	Time diff;
//	Time adjusted;
//
//	cout << "planning time = ";
//	planning.Show();
//	cout << endl;
//
//	cout << "coding time = ";
//	coding.Show();
//	cout << endl;
//
//	cout << "fixing time = ";
//	fixing.Show();
//	cout << endl;
//
//	total = coding.operator+(fixing);
//	cout << "coding.operator+(fixing) = ";
//	total.Show();
//	cout << endl;
//
//	planning = Time(3, 28);
//	total = total + fixing + planning;
//	cout << "total = total + fixing = ";
//	total.Show();
//	cout << endl;
//
//	(coding - fixing).Show();
//	cout << endl;;
//	(total * 1.5).Show();
//	cout << endl;
//	(1.5 * total).Show();
//	cout << endl<<endl;
//
//	Time aida(3, 35);
//	Time tosca(2, 48);
//	Time temp;
//
//	cout << aida << "; " << tosca << endl;
//	(temp = aida + tosca).Show();
//	cout << endl << temp << endl;
//	temp = aida * 1.17;
//	cout << "aida * 1.17: " << temp << endl;
//	cout << "10.0*tosca: " << 10.0 * tosca << endl;
//
//	return 0;
//}

//4.矢量类——重载与友元

//#include<iostream>
//#include<cstdlib>
//#include<ctime>
//#include"head.h"
//int main()
//{
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));
//	double direction;
//	Vector step;
//	Vector result(0.0, 0.0);
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	cout << "Enter target distance (q to quit): ";
//	while (cin >> target)
//	{
//		cout << "Enter step length: ";
//		if (!(cin >> dstep))
//			break;
//
//		while (result.magval() < target)
//		{
//			direction = rand() % 360;
//			step.reset(dstep, direction, Vector::POL);
//			result = result + step;
//			steps++;
//		}
//		cout << "After " << steps << " steps,the subject ""has the following location:\n";
//		cout << result << endl;
//		result.polar_mode();
//		cout << " or\n" << result << endl;
//		cout << "Average outward distance per step = " << result.magval() / steps << endl;
//		steps = 0;
//		result.reset(0.0, 0.0);
//		cout << "Enter target distance (q to quit): ";
//	}
//	cout << "Bye!\n";
//	cin.clear();
//	while (cin.get() != '\n')
//	{
//		continue;
//	}
//	return 0;
//}

//5.类的自动转换和强制类型转换

//#include<iostream>
//#include"head.h"
//void display(const Stonewt& st, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		std::cout << "Wow! ";
//		st.show_stn();
//	}
//}
//
//int main()
//{
//	using std::cout;
//	Stonewt a = Stonewt(275, 12);
//	Stonewt b = Stonewt(275.8);
//	Stonewt c(275.9);
//	double d;
//	d = b;
//	cout << d << std::endl;
//	cout << int(b) << std::endl;
//	display(275.8, 2);
//
//	return 0;
//}

//6.类和动态内存分配——String类

#include<iostream>
#include"head.h"
const int ArSize = 10;
const int MaxLen = 81;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	String name;
	cout << "Hi, what's your name?\n";
	cin >> name;
	cout << name << ", please enter up to " << ArSize
		<< " short sayings <empty line to quit>:\n";
	String sayings[ArSize];
	char temp[MaxLen];
	int i;
	for (i = 0; i < ArSize; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')
			break;
		else
			sayings[i] = temp;
	}
	int total = i;

	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;
		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << "Shortest saying:\n" << sayings[shortest] << endl;
		cout << "First alphabetically:\n" << sayings[first] << endl;
		cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
	}
	else
		cout << "No input! Bye.\n";
	cout << "test1" << endl;

	return 0;
}
