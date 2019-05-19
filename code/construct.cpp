//

#include <iostream>
using namespace std;//引进命名空间


class	A
{
public:
	//A的默认的构造函数
	A()
	{
		cout<<"A::A()"<<endl;
		
	}
	
	
	A(int x)
	{
		cout<<"A::A(int x)"<<endl;
		
	}
	
	//带缺省值的构造函数
	A(float x, int y=15)
	{
		cout<<"A::A(float x, int y=15)"<<endl;
		
	}
	
	
	//带初始化列表的构造函数
	A(float xi,float yi):x(xi),y(10.7)//x(xi)相当于x = xi；
	{
		x = xi;
		y = 10.9;
		
		cout<<"A(float xi,float yi):x(xi),y(10.5)"<<endl;
		
	}
	
	float  x;
	float y;
	
protected:

private:
	
};



//入口函数
int main(int argc,char * argv[])
{
	A mya;//编译器执行 1. 给mya对象分配内存   2. 自动调用对应的构造函数	
	//A myb(10);//匹配的构造函数就是：A(int x)
	
	
	A myc((float)10.5,(float)10.6);
	cout<<"x="<<myc.x<<" y="<<myc.y<<endl;
	
     return 0;

}