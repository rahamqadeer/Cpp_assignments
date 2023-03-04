#include<iostream>
#include<string>
using namespace std;
char* replace(const char* array1, const char* oldWord, const char* newWord)
{
	bool flag;
	int len = strlen(array1);
	int len1 = strlen(oldWord);
	int len2 = strlen(newWord);
	for (int i = 0; i < len; i++)
	{
		while (array1[i] != '\0')
		{
			flag = true;
			for(int j=0 ; j<len1; j++)
			{
				if (array1[j] != oldword[j])
				{
					flag = false;
				}
			}
		}
	}
	if (flag == true)
	{
		for (i = 0; i < len2; i++)
		{
			array1[i] = newWord[k];
		}
	}

}
void reverseChar(char* str)
{
	int len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	for (int i = 0; i < len; i++)
	{
		cout << str[i] << endl;
	}
}
int main()
{
	char* arr = new char[50];
	char* old = new char[20];
	char* newword = new char[20];
	cout << "enter a string" << endl;
	cin.getline(arr, 50);
	cout << "enter old word to get replaced" << endl;
	cin.getline(old, 20);
	cout << "enter a new word to replace " << endl;
	cin.getline(newword, 20);
	cout << "new string is" << endl;
	char* arr1;
	arr1 = replace(arr, old, newword);
	for (int i = 0; i < strlen(arr1); i++)
	{
		cout << arr1[i] << endl;
	}
	cout << "reversed array is " << endl;
	reverse(arr1);
	return 0;

}