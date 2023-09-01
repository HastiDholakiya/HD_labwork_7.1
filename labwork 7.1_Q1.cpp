#include<iostream>
using namespace std;

int main()
{
	int h,p,ans;
	
	cout << "Enter First value : ";
	cin >> h;
	cout << "Enter Second value : ";
	cin >> p;
	
	try
	{
		if(p==0)
		{
			throw p;
		}
		ans = h/p;
		cout << "Answer : " << ans;
    }
		catch(...)
		{
			cout << "Can't divide by zero...";
		}
		
		return 0;
	
}
