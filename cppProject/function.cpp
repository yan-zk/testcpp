//1.Stock类

//#include<iostream>
//#include"head.h"
//
//inline void Stock::set_tot()
//{
//	total_val = share_val * shares;
//}
//
//Stock::Stock()
//{
//	/*std::cout << "Default constructor called\n";*/
//	company = "No name";
//	shares = 0;
//	share_val = 0.0;
//	total_val = 0.0;
//}
//
//Stock::Stock(const std::string& co, long n, double pr)
//{
//	/*std::cout << "Constructor using " << co << "\n";*/
//	company = co;
//	if (n < 0)
//	{
//		std::cout << "Number of shares can't be negative; "
//			<< company << " shares set to 0.\n";
//		shares = 0;
//	}
//	else
//		shares = n;
//	share_val = pr;
//	set_tot();
//}
//
//Stock::~Stock()
//{
//	/*std::cout << "Bye, " << company << "!\n";*/
//}
//
//void Stock::buy(long num, double price)
//{
//	if (num < 0)
//	{
//		std::cout << "Number of shares can't be negative; "
//			<< "Transaction is aborted.\n";
//	}
//	else
//	{
//		shares += num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::sell(long num, double price)
//{
//	using std::cout;
//	if (num < 0)
//	{
//		std::cout << "Number of shares can't be negative; "
//			<< "Transaction is aborted.\n";
//	}
//	else if (num > shares)
//	{
//		cout << "You can't sell more than you have! "
//			<< "Transaction is aborted.\n";
//	}
//	else
//	{
//		shares -= num;
//		share_val = price;
//		set_tot();
//	}
//}
//
//void Stock::update(double price)
//{
//	share_val = price;
//	set_tot();
//}
//
//void Stock::show()const
//{
//	using std::cout;
//	using std::ios_base;
//	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
//	std::streamsize prec = cout.precision(3);
//
//	cout << "Company: " << company
//		<< " Shares: " << shares << std::endl;
//	cout << "Share Price: $" << share_val;
//	cout.precision(2);
//	cout << " Total Worth: $" << total_val << std::endl;
//
//
//	cout.setf(orig, ios_base::floatfield);
//	cout.precision(prec);
//}
//
//const Stock& Stock::topval(const Stock& s)const
//{
//	if (s.total_val > total_val)
//		return s;
//	else
//		return *this;
//}

//2.Stack类

//#include"head.h"
//Stack::Stack()
//{
//	top = 0;
//}
//
//bool Stack::isempty()
//{
//	return top == 0;
//}
//
//bool Stack::isfull()
//{
//	return  top == MAX;
//}
//
//bool Stack::push(const Item& item)
//{
//	if (top < MAX)
//	{
//		items[top++] = item;
//		return true;
//	}
//	else
//		return false;
//}
//
//bool Stack::pop(Item& item)
//{
//	if (top > 0)
//	{
//		item = items[--top];
//		return true;
//	}
//	else
//		return false;
//}

//3.Time类——使用运算符重载

//#include<iostream>
//#include"head.h"
//Time::Time()
//{
//	hours = minutes = 0;
//}
//
//Time::Time(int h, int m)
//{
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m)
//{
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h)
//{
//	hours += h;
//}
//
//void Time::Reset(int h, int m)
//{
//	hours = h;
//	minutes = m;
//}
//
//Time Time::operator+(const Time& t)const
//{
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = sum.minutes / 60 + hours + t.hours;
//	sum.minutes %= 60;
//	return sum;
//}
//
//Time Time::operator-(const Time& t)const
//{
//	Time diff;
//	int tot1, tot2;
//	tot1 = t.minutes + 60 * t.hours;
//	tot2 = minutes + 60 * hours;
//	diff.minutes = (tot2 - tot1) % 60;
//	diff.hours = (tot2 - tot1) / 60;
//	return diff;
//}
//
//Time Time::operator*(double n)const
//{
//	Time result;
//	long totalminutes = hours * 60 * n + minutes * n;
//	result.hours = totalminutes / 60;
//	result.minutes = totalminutes % 60;
//	return result;
//}
//
//std::ostream& operator<<(std::ostream& os, const Time& t)
//{
//	os << t.hours << " hours, " << t.minutes << " minutes";
//	return os;
//}
//
//void Time::Show()const
//{
//	using std::cout;
//	cout << hours << " hours, " << minutes << " minutes.";
//}

//4.矢量类——重载与友元

//#include<cmath>
//#include"head.h"
//using std::sqrt;
//using std::sin;
//using std::cos;
//using std::atan;
//using std::atan2;
//using std::cout;
//
//namespace VECTOR
//{
//	const double Rad_to_deg = 45.0 / atan(1.0);
//	//private methods
//	void Vector::set_mag()
//	{
//		mag = sqrt(x * x + y * y);
//	}
//
//	void Vector::set_ang()
//	{
//		if (x == 0.0 && y == 0.0)
//			ang = 0.0;
//		else
//			ang = atan2(y, x);
//	}
//
//	void Vector::set_x()
//	{
//		x = mag * cos(ang);
//	}
//
//	void Vector::set_y()
//	{
//		y = mag * sin(ang);
//	}
//
//	//public methods
//	Vector::Vector()
//	{
//		x = y = mag = ang = 0.0;
//		mode = RECT;
//	}
//
//	Vector::Vector(double n1, double n2, Mode form)
//	{
//		mode = form;
//		if (form == RECT)
//		{
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		}
//		else if (form == POL)
//		{
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		}
//		else
//		{
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = RECT;
//		}
//	}
//
//	void Vector::reset(double n1, double n2, Mode form)
//	{
//		mode = form;
//		if (form == RECT)
//		{
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		}
//		else if (form == POL)
//		{
//			mag = n1;
//			ang = n2 / Rad_to_deg;
//			set_x();
//			set_y();
//		}
//		else
//		{
//			cout << "Incorrect 3rd argument to Vector() -- ";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = RECT;
//		}
//	}
//
//	Vector::~Vector()
//	{
//	}
//
//	void Vector::polar_mode()
//	{
//		mode = POL;
//	}
//
//	void Vector::rect_mode()
//	{
//		mode = RECT;
//	}
//
//	Vector Vector::operator+(const Vector& b)const
//	{
//		return Vector(x + b.x, y + b.y);
//	}
//
//	Vector Vector::operator-(const Vector& b)const
//	{
//		return Vector(x - b.x, y - b.y);
//	}
//
//	Vector Vector::operator-()const
//	{
//		return Vector(-x, -y);
//	}
//
//	Vector Vector::operator*(double n)const
//	{
//		return Vector(n * x, n * y);
//	}
//
//	Vector operator*(double n, const Vector& a)
//	{
//		return a * n;
//	}
//
//	std::ostream& operator<<(std::ostream& os, const Vector& v)
//	{
//		if (v.mode == Vector::RECT)
//		{
//			os << "(x,y)=(" << v.x << ", " << v.y << ")";
//		}
//		else if (v.mode == Vector::POL)
//		{
//			os << "(m,a)=(" << v.mag << ", " << v.ang * Rad_to_deg << ")";
//		}
//		else
//			os << "Vector object mode is invalid";
//		return os;
//	}
//
//}

//5.类的自动转换和强制类型转换

//#include<iostream>
//#include"head.h"
//using std::cout;
//
//Stonewt::Stonewt(double lbs)
//{
//	stone = int(lbs) / Lbs_per_stn;
//	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
//	pounds = lbs;
//}
//
//Stonewt::Stonewt(int stn, double lbs)
//{
//	stone = stn;
//	pds_left = lbs;
//	pounds = stn * Lbs_per_stn + lbs;
//}	
//
//Stonewt::Stonewt()
//{
//	stone = pounds = pds_left = 0;
//}
//
//Stonewt::~Stonewt()
//{
//}
//
//void Stonewt::show_stn()const
//{
//	cout << stone << " stone, " << pds_left << " pounds\n";
//}
//
//void Stonewt::show_lbs()const
//{
//	cout << pounds << " pounds\n";
//}
//
//Stonewt::operator int()const
//{
//	return int(pounds + 0.5);
//}
//
//Stonewt::operator double()const
//{
//	return pounds;
//}

//6.类和动态内存分配——String类

// #define _CRT_SECURE_NO_WARNINGS
// #include<cstring>
// #include"head.h"
// using std::cout;
// using std::cin;
//
// int String::num_strings = 0;
//
// int String::HowMany()
// {
// 	return num_strings;
// }
//
// String::String(const  char* s)
// {
// 	len = std::strlen(s);
// 	str = new char[len + 1];
// 	std::strcpy(str, s);
// 	num_strings++;
// }
//
// String::String()
// {
// 	len = 0;
// 	str = new char[1];
// 	str[0] = '\0';
// 	num_strings++;
// }
//
// String::String(const String& st)
// {
// 	num_strings++;
// 	len = st.len;
// 	str = new char[len + 1];
// 	std::strcpy(str, st.str);
// }
//
// String::~String()
// {
// 	--num_strings;
// 	delete[] str;
// }
//
// String& String::operator=(const String& st)
// {
// 	if (this == &st)
// 		return *this;
// 	delete[] str;
// 	len = st.len;
// 	str = new char[len + 1];
// 	std::strcpy(str, st.str);
// 	return *this;
// }
//
// String& String::operator=(const char* s)
// {
// 	delete[] str;
// 	len = std::strlen(s);
// 	str = new char[len + 1];
// 	std::strcpy(str, s);
// 	return *this;
// }
//
// char& String::operator[](int i)
// {
// 	return str[i];
// }
//
// const char& String::operator[](int i)const
// {
// 	return str[i];
// }
//
// bool operator>(const String& st1, const String& st2)
// {
// 	return st2 < st1;
// }
//
// bool operator<(const String& st1, const String& st2)
// {
// 	return (std::strcmp(st1.str, st2.str) < 0);
// }
//
// bool operator==(const String& st1, const String& st2)
// {
// 	return (std::strcmp(st1.str, st2.str) == 0);
// }
//
// ostream& operator<<(ostream& os, const String& st)
// {
// 	os << st.str;
// 	return os;
// }
//
// istream& operator>>(istream& is, String& st)
// {
// 	char temp[String::CINLIM];
// 	is.get(temp, String::CINLIM);
// 	if (is)
// 		st = temp;
// 	while (is && is.get() != '\n')
// 		continue;
// 	return is;
// }

