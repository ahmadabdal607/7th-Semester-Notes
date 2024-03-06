#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	char oldname[] ="C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir1\\2.txt";
	char newname[] = "C:\\Users\\Izzyy\\Desktop\\System Programming\\Dir1\\3.txt";


	if (rename(oldname, newname) != 0)
		perror("Error renaming file");
	else
		cout << "File renamed successfully";

	return 0;
}
