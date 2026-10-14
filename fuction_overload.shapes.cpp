#include<iostream>
#include<cmath>
using namespace std;
class shape
{
	public:
		void AREA(float r)
		{
			cout<<"AREA OF CIRCLE = "<<3.14*r*r<<endl;
		}
		void AREA(float l, float b)
		{
			cout<<"AREA OF RECTANGLE = "<<l*b<<endl;
		}
		void AREA(float a, float c, float b)
		{
			float s=(a+b+c)/2;
			float area=sqrt(s*(s-a)*(s-b)*(s-c));
			cout<<"AREA OF TRIANGLE = "<<area<<endl;
		}
};
int main()
{
	shape s;
	float r,l,b,a,c;
	cout<<"ENTER RADIUS OF CIRCLE : ";
	cin>>r;
	s.AREA(r);
	
	cout<<"ENTER LENGTH AND BREADTH OF RECTANGLE : ";
	cin>>l>>b;
	s.AREA(l,b);
	
	cout<<"ENTER THREE SIDES OF TRIANGLE : ";
	cin>>a>>b>>c;
	s.AREA(a,b,c);
	return 0;
}
