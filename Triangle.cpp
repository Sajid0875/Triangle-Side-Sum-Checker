#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int SideA,SideB,SideC;
	cout<<"Side A =";
	cin>>SideA;
    cout<<"Side B =";
	cin>>SideB;
	cout<<"Side C =";
	cin>>SideC;
	
	bool sum;
	sum=(SideA+SideB)>=(SideC);
	cout<<"Sum of 2 Sides="<<sum<<endl;
	cout<<"The sum of two sides is greater than the other side"<<endl;

	return 0;
}
