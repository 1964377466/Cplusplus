//C++ hello world

#include <iostream>
using namespace std;//引进命名空间

int fun(int *p)
{
	
	*p = 15;
	
}

int fun2(int & y)
{
	
	y = 18;
	
}


//入口函数
int main(int argc,char * argv[])
{
	
     //打印字符串 helloworld
     //cout<<"hello world \n";
	 
	 
	 int x = 10;
	 
	 
	 float fy = 11.2;
	 
	 //cout<<x;
	//cout<<fy;
	 //相当于上面两句话
	 cout<<"x="<<x<<endl<<"fy="<<fy<<"\n";	 
	 cout<<x<<fy<<endl;
	 
	 //cin 从终端获取数据
	 cin>>x;//表示从终端获取数据并赋值给x
	 cout<<"x="<<x<<endl;
	 
	 cin>>x>>fy;
	 cout<<"x="<<x<<endl<<"fy="<<fy<<"\n";	
	 
	 //引用：
	 int k = 11;
	 fun(&k);//int *p = &k;
	 fun2(k);//int & y = k;
	 cout<<"k="<<k<<endl;
	 /*
	 练习：
通过动态内存分配10个int的数组元素内存
1. 初始化数组的值，和下标的值一样
2. 遍历数组
	*/
	
	
	int * p = new int[10];
	//1. 初始化数组的值，和下标的值一样
	for(int i=0;i<10;i++){
		p[i] = i;
	}
	//2. 遍历数组
	for(int i=0;i<10;i++){
		cout<<"p["<<i<<"]="<<p[i]<<endl;
	}
	
	//释放内存
	delete [] p;
	
	p = NULL;//防止 野指针	

     return 0;

}