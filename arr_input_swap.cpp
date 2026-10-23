#include <iostream>

using namespace	std;

int	arr[50];

int	main(void)
{

		//数组输入
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " " ;
	}
    cout << endl;
	//交换
	int temp = arr[1];
    arr[1] = arr[2];
    arr[2] = temp;
	for (int i = 0; i < n; ++i){ 
		cout << arr[i] << " ";}
	return 0;
}