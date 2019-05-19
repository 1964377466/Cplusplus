//C++ hello world

#include <iostream>
using namespace std;//引进命名空间

//自定义的命名空间
namespace myspace
{
	//声明定义变量
	int x = 10;
	//声明定义函数
	void fun(){
		cout<<"myspace::FUN()"<<endl;		
	}
     //声明类  定义对象 
	 
	 
	 // 命名空间的嵌套
	 namespace myspace3
	{
		//声明定义变量
		int x = 11;
		//声明定义函数
		void fun(){
			cout<<"myspace3::FUN()"<<endl;		
		}
		//声明类  定义对象 
	 
	}
}

namespace myspace2
{
	//声明定义变量
	int x = 12;
	//声明定义函数
	
     //声明类  定义对象
}

namespace myspace2
{
	//声明定义变量
	
	//声明定义函数
	void fun(){
		cout<<"myspace2::FUN()"<<endl;		
	}
     //声明类  定义对象
}


//1. 引进整个命名空间   
//using namespace myspace;
//2. 引进命名空间的某个成员  using 命名空间::成员名
//using myspace::x;
using myspace::fun;
//using myspace2::fun;


int x=15;

//入口函数
int main(int argc,char * argv[])
{
	
	cout<<x<<endl;
     //打印字符串 helloworld
     fun();
	 //...
	 fun();
	 
	 cout<<myspace::x<<endl;//3. 调用的时候指定是哪一个命名空间下的成员
	 myspace::fun();//3. 调用的时候指定是哪一个命名空间下的成员
	 //...
	 
	 myspace2::fun();//3. 调用的时候指定是哪一个命名空间下的成员

	 
	 //调用myspace3中的fun函数
	 myspace::myspace3::fun();
     return 0;

}