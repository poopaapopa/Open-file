#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct Item
{
	char title[20];
	unsigned int qty;
	float price;
};

int main()
{
	/*FILE* out;
	if ((out = fopen("D:\\example\\outfile.txt", "w")) == NULL)
		cout << "The file could not be created!";
	else
		cout << "OK!";*/
	/*const int n = 5;;
	int arr[n];
	FILE* out;
	const char* path = "D:\\example\\outfile.txt";
	for (int i = 0; i < n; i++)
		arr[i] = i + 5;
	if ((fopen_s(&out, path, "w")) != NULL)
		cout << "The file could not be created!";
	else
	{
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%ld", arr[i]);
			fprintf(out, "\n");
		}
		if (fclose(out) == EOF)
			cout << "The file is not closed";
		else
			cout << "The file is closed";
	}*/


	/*float a;
	FILE* in;
	const char* path = "D:\\example\\outfile.txt";

	if (fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be opened";
	else
		while (!feof(in))
		{
			fscanf_s(in, "%f", &a);
			cout << a << " ";
		}*/


	int i = 0;
	FILE* in;
	Item myshop[10];
	const char* path = "D:\\example\\data.txt";
	if (fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be opened";
	else
		while (!feof(in))
		{
			fscanf_s(in, "%s", myshop[i].title, sizeof(myshop[i].title));
			fscanf_s(in, "%u", &myshop[i].qty, sizeof(myshop[i].qty));
			fscanf_s(in, "%f", &myshop[i].price, sizeof(myshop[i].price));
			cout << myshop[i].title << " " << myshop[i].qty << " " << myshop[i].price << "\n";
			i++;
		}
	return 0;
}