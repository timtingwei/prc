#include <iostream>

int prac_235()
{
	const int i = 42;             //i是一个整型常量
	auto j = i;                   //j是一个整型
	const auto &k = i;            //k是一个整型常量
	auto *p = &i;                 //p是一个指针，指向整数常量
	//const auto j2 = i, &k2 = i;   //j2是一个整型常量，k2是整型常量??
	//auto &k2 = i;  即使这样写k2也是一个整型常量
	const int i1 = 9, i2 = 10;    //这个语句的基本类型是const int 

	//i = 42;        //错误：不能给常量赋值，说明i是一个整型常量
	j = 42;          //正确:j是一个整型
	//k = 42;          //k是一个整型常量
	//p = 42;            //错误:p是一个指向整数常量的指针
	//j2 = 42;             //错误:j2是一个整型常量
	//k2 = 42;               //错误:k2是一个整型常量
	//i2 = 42;               //错误:i2是一个整数常量

	//使用auto类型说明符时，编译器通过初始值来推算变量的类型。显然，auto定义的变量必须由初始值
	//auto会把表达式算一遍

	return 0;
}