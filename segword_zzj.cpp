#include <iostream>
#include <stdlib.h>
#include <svector>
#include <fstream>
#include <map>
#include <string>
#include <stdio.h>

using namespace std;
const char *target = "test.txt";
const char *out_put = "2015110773.txt";
const char *dic_text = "dic.txt";

typedef struct word
{
	int num;
	double p_begin;
	double p_end;
	string this_word;
} word;

vector<word> word_pool;
vector<word>::iterator ;

string segword(string sentance)
{
}

int main()
{
	FILE *fin;
	fin = fopen(target,"r");
	ofstream fout(out_put);
	string sentance;
	char alpha;
	alpha = fgetc(fin);
	string complete;

	vector<string> complete_p;
	vector<string> ::iterator;
	
	if(alpha == EOF)
	{
		cout << "this file is empty!" <<endl;
	}
	sentance.clear();
	while(alpha != EOF)
	{
		if(alpha !=  "。" )
			sentance.append(alpha);
		else
		{
			complete = segword(sentance);
			sentance.clear();
		}
	}
}