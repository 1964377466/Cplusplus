//C++ hello world

#include <iostream>
using namespace std;//引进命名空间

//时钟的类的声明
class  mytime{
public://公共权限          类的外部 类内部   类的派生类  友元
	 // 特征/属性：时 分 秒
	  int h;//时 
	  int m;//分 
	  int s;//秒
	 //功能/方法：显示时间   设置时间
	 //显示时间   
	 //书写成员函数的方式1：函数的声明和函数的定义都写在类内部
	 void show()
	 {
		 //把时间的值打印到终端
		 cout<<h<<":"<<m<<":"<<s<<endl;		 
	 }
	 //设置时间
	 //书写成员函数的方式2：函数的声明放在类的内部 而函数的定义放在类外部
	 void setTime(int hi,int mi,int si);
	 //{
	//	 h = hi;
	//	 m = mi;
	//	 s = si;		 
	// }
	 
protected://保护权限     类内部   类的派生类  友元

private://私有权限	     类内部    友元

};


	 //书写成员函数的方式2：函数的声明放在类的内部 而函数的定义放在类外部
	 void mytime::setTime(int hi,int mi,int si)
	 {
		 h = hi;
		 m = mi;
		 s = si;		 
	 }



//入口函数
int main(int argc,char * argv[])
{
	//定义一个时钟对象
	mytime mt;//
	
	mt.setTime(16,9,30);
	mt.show();
	
	
	mt.h = 10;

     return 0;

}