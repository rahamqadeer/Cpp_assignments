#include<iostream>
#include<string>
using namespace std;
char** StringTokens(char* a)
{
	int len = strlen(a);
	int j = 0;
	char** arr = new char* [len];
		for (int i = 0; a[i] != '\0'; i++)
		{
			if (a[i] == ' ')
			{
				arr[i] = new char[i + 1];
			}
			for (int j = 0; j < i; j++)
			{
				arr[i][j] = a[j];
			}
		}
		arr = new char*[len + 1];
		for (int i = 0; i < len; i++)
		{
			arr[j - 1][i] = a[i];
		}
		return arr;

}
int main()
{
	char str[50];
	char** arr;
	cout << "enter a string" << endl;
	cin.getline(str, 50);
	arr = StringTokens(str);
	for (int i = 0; arr[i]!=nullptr; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
