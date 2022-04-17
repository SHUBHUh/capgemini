#include <iostream>
using namespace std;

class Shape
{
public:
	int height,width;

	Shape(int ht,int wd)
	{
		height =ht;
		width = wd;
	}
	void display() { 
		cout<<"Shape: "<< height << width <<endl; 
	}/*
		Shape operator ++(Shape &obj)
		{
			value = value + obj.value;
			return value;
		}*/

		void operator ++(void)
		{

			this->height++;
			this->width++;
		}
	
};

ostream &operator << (ostream &output, Shape &objshape)
{
			output << " Value : " << objshape.height <<objshape.width;
			return output;
}
int main(int argc, char const *argv[])
{
	/* code */
	Shape sp(10,20);

	++sp;
	cout<<sp;
	cout<<endl;
	return 0;
}