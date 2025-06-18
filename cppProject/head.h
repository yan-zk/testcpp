//1.Stock类

//#ifndef STOCK_H_
//#define STOCK_H_
//
//#include<string>
//
//class Stock
//{
//private:
//	//enum class a
//	//{
//	//	Months = 12
//	//};
//	//enum class b
//	//{
//	//	Months=13
//	//};
//	//double costs[int(a::Months)];
//	std::string company;
//	long shares;
//	double share_val;
//	double total_val;
//	void set_tot();
//public:
//	Stock(const std::string& co, long n = 0, double pr = 0);
//	Stock();
//	~Stock();
//	void buy(long num, double price);
//	void sell(long num, double price);
//	void update(double price);
//	void show()const;
//	const Stock& topval(const Stock& s)const;
//};
//#endif // !STOCK_H_

//2.Stack类

//#ifndef STACK_H_
//#define STACK_H_
//
//typedef unsigned long Item;
//
//class Stack
//{
//private:
//	enum { MAX = 10 };
//	Item items[MAX];
//	int top;
//public:
//	Stack();
//	bool isempty();
//	bool isfull();
//	bool push(const Item& item);
//	bool pop(Item& item);
//};
//
//#endif // !STACK_H_

//3.Time类——使用运算符重载

//#ifndef MYTIME_H_
//#define MYTIME_H_
//#include<iostream>
//
//class Time
//{
//private:
//	int hours;
//	int minutes;
//public:
//	Time();
//	Time(int h, int m = 0);
//	void AddMin(int m);
//	void AddHr(int h);
//	void Reset(int h = 0, int m = 0);
//	Time operator+(const Time& t)const;
//	Time operator-(const Time& t)const;
//	Time operator*(double n)const;
//	friend Time operator*(double n, const Time& t)
//	{
//		return t * n;
//	}
//	friend std::ostream& operator<<(std::ostream& os, const Time& t);
//	void Show()const;
//
//};
//
//
//#endif // !MYTIME_H_

//4.矢量类——重载与友元

//#ifndef VECTOR_H_
//#define VECTOR_H_
//#include<iostream>
//namespace VECTOR
//{
//	class Vector
//	{
//	public:
//		enum Mode { RECT, POL };
//	private:
//		double x;
//		double y;
//		double mag;
//		double ang;
//		Mode mode;
//		void set_mag();
//		void set_ang();
//		void set_x();
//		void set_y();
//	public:
//		Vector();
//		Vector(double n1, double n2, Mode form = RECT);
//		~Vector();
//		void reset(double n1, double n2, Mode form = RECT);
//		double xval()const { return x; }
//		double yval()const { return y; }
//		double magval()const { return mag; }
//		double angval()const { return ang; }
//		void polar_mode();
//		void rect_mode();
//		//operator overloading
//		Vector operator+ (const Vector& b)const;
//		Vector operator-(const Vector& b)const;
//		Vector operator-()const;
//		Vector operator*(double)const;
//		//friend
//		friend Vector operator*(double n, const Vector& a);
//		friend std::ostream& operator<<(std::ostream& os, const Vector& v);
//	};
//}
//#endif // !VECTOR_H_

//5.类的自动转换和强制类型转换

//#ifndef STONEWT_H_
//#define STONEWT_H_
//class Stonewt
//{
//private:
//	enum { Lbs_per_stn = 14 };
//	int stone;
//	double pds_left;
//	double pounds;
//public:
//	Stonewt(double lbs);
//	Stonewt(int stn, double lbs);
//	Stonewt();
//	~Stonewt();
//	void show_lbs()const;
//	void show_stn()const;
//	operator int()const;
//	operator double()const;
//};
//#endif // !STONEWT_H_

//6.类和动态内存分配——String类

// #ifndef STRING_H_
// #define STRING_H_
// #include<iostream>
// using std::ostream;
// using std::istream;
// 
// class String
// {
// private:
// 	char* str;
// 	int len;
// 	static int num_strings;
// 	static const int CINLIM = 80;
// public:
// 	String(const char* s);
// 	String();
// 	String(const String& s);
// 	~String();
// 	int length()const { return len; }
// 	String& operator=(const String& s);
// 	String& operator=(const char* s);
// 	char& operator[](int i);
// 	const char& operator[](int i)const;
// 	friend bool operator<(const String& st1, const String& st2);
// 	friend bool operator>(const String& st1, const String& st2);
// 	friend bool operator==(const String& st1, const String& st2);
// 	friend ostream& operator<<(ostream& os, const String& st);
// 	friend istream& operator>>(istream& is, String& st);
// 	static int HowMany();
// };
// #endif // !STRING_H_


