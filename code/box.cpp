//1、将box.c改成box.cpp文件,   把结构体放到一个命名空间


//#include <cstdio>//#include <stdio.h>
#include<iostream>//#include<iostream.h>
using namespace std;//引进命名空间


//自定义命名空间
namespace myspace{	
	typedef struct _box
	{
		int height;
		int width;
		int length;
	}Box;
	
}

//1. 引进整个命名空间   
using namespace myspace;

const  int a = 5;
int main( )
{
	Box box1;
	box1.height = 2;
	box1.width = 3;
	box1.length = 4 ;
	//printf("%d,%d,%d\n",box1.height,box1.width,box1.length);
	cout<<"height:"<<box1.height<<" width:"<<box1.width<<" length:"<<box1.length<<endl;
	//printf("volume = %d", box1.height*box1.width*box1.length);
	cout<<"volume = "<<box1.height*box1.width*box1.length<<endl;
	return 0;
}
