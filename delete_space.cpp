#include <iostream>
#include <fstream>
#include <map>
#include <string>
/*
	Name: 删除空格
	Description: 删除空格
*/
using namespace std;

int main()
{
	FILE *f_in, *f_out;//输入输出文件
	char ch;

	f_in = fopen("corpus_for_test.txt", "r");
	f_out = fopen("target.txt", "w");

	ch = getc(f_in);
	while(EOF != ch)
	{
		if(' ' != ch && '\n' != ch)
			putc(ch, f_out);
		ch = getc(f_in);
	}
	return 0;
}