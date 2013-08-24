#include<iostream>

using namespace std;
class test{
public:
	int x ;
	test(){
		x=1;
	}
};


test & ftest(){
	test* arr;
	arr=new test();
	return  *arr;
}

int main()
{
	test * arr;
	test *arr1;
	test *arr2;
	arr=&(ftest());
	arr1=arr;
	arr2=arr;

	cout<<arr->x<<endl;
	arr->x=4;
	if(arr1==arr2)
		cout<<arr->x<<endl;
	return 0;

}