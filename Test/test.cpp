// #include <iostream>
//
// // 前置声明模板函数
// template <typename T>
// void counts();
//
// // 模板类定义
// template <typename TT>
// class HasFriendT
// {
// private:
//     TT data;
//
// public:
//     HasFriendT(TT d) : data(d) {}
//     friend void counts<int>(); // 类内部声明友元具体化（无需 template<>）
// };
//
// template <typename TT>
// void counts()
// {
//     std::cout << "moban" << std::endl;
//     std::cout << sizeof(TT) << std::endl;
// }
//
// int main()
//
// {
//     HasFriendT<int> hf1(10);
//     HasFriendT<double> hf2(20);
//     counts<int>();
//     counts<double>();
//     return 0;
// }

// #include <iostream>
// template <typename T>
// void report(T &);
//
//
//
// template <typename TT>
// class HasFriendT
// {
//     friend void report<>(HasFriendT<TT> &);
// };
//
// template <typename T>
// void report(T &) { std::cout << "1" << std::endl; }
//
// template<typename T>
// using hf=HasFriendT<T>;
// int main()
// {
//     hf<int> obj;
//     report(obj); // 编译器可能报错：找不到匹配的非模板函数
// }

// template <class T>
// class beat
// {
// private:
//     template <typename V>
//     class hold;
//     hold<T> *h;
//
// public:
//     template <typename U>
//     U blab(U u, T t);
// };
//
// template <class T>
// template <typename V>
// class beat<T>::hold
// {
// private:
//     V val;
// };
//
// template <class T>
// template <typename U>
// U beat<T>::blab(U u, T t)
// {
//     return (u + t);
// }

// #include <iostream>
// #include <string>
// class A
// {
// public:
//     std::string a;
//     explicit A(const std::string &str) : a(str) {}
// };
// int main()
// {
//     A a("hello world");
//     std::string c("hello world");
//     A b = A(c);
//
//     std::cout << a.a << std::endl;
//     std::cout << b.a << std::endl;
// }

// #include <iostream>
// #include <exception>
// void f()
// {
//     try
//     {
//         throw std::exception();
//     }
//     catch (std::exception &ex)
//     {
//         std::cout << "catch" << std::endl;
//         throw;
//     }
// }
// int main()
// {
//     try
//     {
//         f();
//         throw std::bad_exception();
//     }
//     catch (const std::bad_exception &be)
//     {
//         std::cout << "catch 1" << std::endl;
//         std::cout << be.what() << std::endl;
//     }
//     catch (const std::exception &e)
//     {
//         std::cout << "catch too" << std::endl;
//         std::cerr << e.what() << '\n';
//     }
//
//     return 0;
// }

// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cstdlib>
// int main()
// {
//     using namespace std;
//     ifstream fin;
//     fin.open("filename.txt");
//     if (fin.is_open() == false)
//     {
//         cerr << "Can't opean file. Bye.\n";
//         exit(EXIT_FAILURE);
//     }
//     string item;
//     int count = 0;
//     getline(fin, item, ':');
//     while (fin)
//     {
//         ++count;
//         cout << count << ": " << item << endl;
//         getline(fin, item, ':');
//     }
//     cout<<"Done\n";
//     fin.close();
//     return 0;
// }

// #include <string>
// #include <iostream>
// class a
// {
// public:
//     static int A;
//     int c;
// };
// int a::A = 20;
//
// int main()
// {
//     std::string str = "Hello World   \t\n";
//     size_t last = str.find_last_not_of(" \t\n"); // 查找最后一个非空白符的位置
//
//     if (last != std::string::npos)
//     {
//         str = str.substr(0, last + 1); // 截取到该位置（含）
//         std::cout << "Trimmed: \"" << str << "\"\n";
//     }
//     else
//     {
//         std::cout << "字符串全为空白符！\n";
//     }
//
//     std::string id = "Item_123";
//     size_t last_non_digit = id.find_last_not_of("0123456789");
//
//     if (last_non_digit != std::string::npos)
//     {
//         std::cout << "ID 后缀是数字，前缀为: " << id.substr(0, last_non_digit + 1) << "\n";
//     }
//     else
//     {
//         std::cout << "ID 全为数字！\n";
//     }
//     std::cout << a::A << std::endl;
//     return 0;
// }

// #include <iostream>
//
// void foo(void func(int)) { // 看似接受函数类型，实际是函数指针
//     func(42); // 调用时 func 是函数指针
// }
//
// void bar(int x) {
//     std::cout << "Value: " << x << std::endl;
// }
//
// int main() {
//     foo(bar); // 传递函数名，隐式转换为指针
//     foo(&bar); // 显式传递函数指针，也合法
// }

// #include <iostream>
// class MyClass
// {
// public:
// 	MyClass() {}
// 	void updateCounter() const { counter++; } // 在 const 成员函数中修改 mutable 成员
// private:
// 	int data;				 // 非 mutable，不可通过 const 引用修改
// 	mutable int counter = 0; // mutable，可通过 const 引用修改
// };
//
// int main()
// {
// 	const MyClass obj;				// const 对象
// 	const MyClass &const_ref = obj; // const 引用指向 const 对象
//
// 	// 合法：通过 const 引用调用 const 成员函数，修改 mutable 成员
// 	const_ref.updateCounter(); // 等价于 obj.updateCounter()
// 	return 0;
// }

// #include <iostream>
// class A
// {
// public:
// 	virtual void show() { std::cout << "A"; }
// };
//
// class B : public A
// {
// public:
// 	void show() override { std::cout << "B"; }
// };
//
// int main()
// {
// 	B test;
// 	A &a = test;
// 	a.show();
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
//
// class Building {
// private:
//     char name[40];
//     double height;  // 注意：原代码中height是double，构造时828会隐式转换，没问题
//     int floors;
// public:
//     Building();
//     Building(const char n[], double h, int f);
//     void Set(const char n[], double h, int f);
//     void Show();
// };
//
// // 修正默认构造函数：字符数组需用strcpy赋值，不能在初始化列表直接写"NULL"
// Building::Building():name("NULL"){
//
//     height = 0;
//     floors = 0;
// }
//
// Building::Building(const char n[], double h, int f) {
//     strcpy(name, n);
//     height = h;
//     floors = f;
// }
//
// void Building::Set(const char n[], double h, int f) {
//     strcpy(name, n);
//     height = h;
//     floors = f;
// }
//
// void Building::Show() {
//     cout << "[" << name << "/" << height << "米/" << floors << "层]" << endl;
// }
//
// int main() {
//     Building b1, b2("阿联酋迪拜塔", 828, 162);
//     b1.Show();
//     b2.Show();
//     b1.Set("上海环球金融中心", 492, 101);
//     b1.Show();
//     return 0;
// }

// class Course
// {
// private:
// 	int Id;
// 	char name[40];
// 	int credit;
//
// public:
// 	Course()
// 	{
// 		Id = 0;
// 		strcpy(name, "NULL");
// 		credit = 0;
// 	}
// 	Course(int i, char *n, int c)
// 	{
// 		Id = i;
// 		strcpy(name, n);
// 		credit = c;
// 	}
// 	void Set(int i = 9999999, const char *n = "None", int c = 10000)
// 	{
// 		Id = i;
// 		strcpy(name, n);
// 		credit = c;
// 	}
// 	void Show() const
// 	{
// 		cout << Id << "/" << name << "/" << credit << endl;
// 	}
// 	int GetId() { return Id; }
// 	char *GetName() { return name; }
// 	int GetCredit() { return credit; }
// };

// #include <iostream>
// #include <typeinfo>
// using namespace std;
//
// template <typename T>
// void counts();
// template <typename T>
// void report(T &);
//
// template <typename TT>
// class HasFriendT
// {
// public:
// 	friend void counts<TT>();
// 	friend void report(HasFriendT<TT> &);
// 	friend void report(HasFriendT<double> &);
// };
//
// template <typename T>
// void counts()
// {
//
// 	cout << typeid(T).name() << " moban" << endl;
// }
//
// template <typename T>
// void report(T &hf)
// {
// 	cout << "moban:" << typeid(hf).name() << endl;
// }
// void report(HasFriendT<double> &hf)
// {
// 	cout << typeid(double).name() << " " << typeid(hf).name() << endl;
// }
// int main()
// {
// 	HasFriendT<int> a;
// 	HasFriendT<double> b;
// 	counts<char>();
// 	report(a);
// 	report(b);
// }

#include <iostream>
#include <string>

using namespace std;

class Excp
{
public:
	Excp() { cout << "Constructor of Excp" << endl; }
	Excp(const Excp &) { std::cout << "复制构造" << std::endl; }
	~Excp() { cout << "Destructor of Excp" << endl; }
};

class Demo
{
public:
	Demo() { cout << "Constructor of Demo" << endl; }
	~Demo() { cout << "Destructor of Demo" << endl; }
};

void fun()
{
	Demo d;

	throw Excp();
}

Excp fun2()
{
	Demo d;
	return Excp();
}

int main()
{
	try
	{
		fun();
	}
	catch (Excp a)
	{
		cout << "Caught an exception" << endl;
	}
	cout << "End of main function" << endl;
	Excp ax = fun2();
	
	return 0;
}
