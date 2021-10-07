#ifndef _IO_H_
#define _IO_H_
#include<iostream>
#include<cassert>
using namespace std;
namespace IO
{
	//control endline and space.
	bool isendl=true,space=true;
	void print()
	{
		cout<<endl;
	}
	//output.
	template<typename T>
	void print(const T& value)
	{
		if(isendl==true)
		cout<<value<<endl;
		else
		cout<<value;
	}
	template<typename T,typename... Args>
	void print(const T& value,const Args&... args)
	{
		if(space==true)
		cout<<value<<" ";
		else
		cout<<value;
		print(args...);
	}
	//input.
	template<typename T>
	void input(T& value)
	{
		cin>>value;
	}
	template<typename T,typename... Args>
	void input(T& value,Args&... args)
	{
		cin>>value;
		input(args...);
	}
	//range input.
	//Warn: class T must have operator <
	template<typename T>
	void range_input(T Left,T Right,T& value)
	{
		cin>>value;
		assert(Left<value && value<Right);
	}
};
#endif
