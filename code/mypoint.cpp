/*
定义一个点类，包含x、y坐标，包含一下功能：
	1）设置x坐标
	2）设置y坐标
	3）得到x坐标
	4）得到y坐标
定义该类的对象，并设置坐标，获取坐标并显示出来
*/

//

#include <iostream>
using namespace std;//引进命名空间

//点的 类的声明
class	  mypoint
{
public:
	//包含x、y坐标
	float x;
	float y;
	//功能：
	//1）设置x坐标
	void setX(float xi)
	{
		x = xi;
	}
	//2）设置y坐标
	void setY(float yi)
	{
		y = yi;
	}
	//3）得到x坐标
	float getX()
	{
		return x;
	}
	//4）得到y坐标
	float getY(){
		return y;
		
	}
protected:

private:
	
};


//入口函数
int main(int argc,char * argv[])
{
	
    //定义该类的对象，并设置坐标，
	mypoint mp;
	mp.setX(1.1);
	mp.setY(2.2);
	//获取坐标并显示出来
	cout<<"x="<<mp.getX()<<"\ny="<<mp.getY()<<endl;

     return 0;

}