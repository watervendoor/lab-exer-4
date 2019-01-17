#include <iostream>
using namespace std;


int main()
{
	int x[5];
	int* ptr =x;
	
	cout << "Enter 5 numbers: " << endl;
	
	cin >> x[0]>>x[1]>>x[2]>>x[3]>>x[4];
	cout << "The inputs: " << endl;
	
	for(int x=1; x<=5; x++)
	{
		cout << *ptr << endl;
		ptr++;
		
	}
	return 0;
}
