#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>
using namespace std;

const char *Train_text = "TrainData.txt";
const char *dic_text = "dic.txt";

map <string, double> dic_word;
map <string, double> :: iterator dic_it;

bool tag = true; 
int main()
{
	ifstream fileI(Train_text);
	string word_temp;
	double word_count = 0;
	double count = 0;
	while(tag)
	{
		fileI >> word_temp;
		if(dic_word.find(word_temp) == dic_word.end()) //判断是不是新词
		{
			word_count = 1;
			dic_word.insert(pair<string, double>(word_temp, word_count));
			cout<<"if-1\n";
		}
		else //不是新词
		{
			
			dic_word.find(word_temp) -> second += 1;
			cout<<"else-1\n";
		}
		if(fileI.eof()) //文件，循环跳出
		{
			tag = false;
			cout<<"-----------------\n";
		}
		count ++;
		cout<<count<<"\n";
	}
	fileI.close();
	ofstream fileO(dic_text);
	fileO << count<<"\n";
	for(dic_it = dic_word.begin(); dic_it != dic_word.end(); dic_it++)
	{
		fileO << dic_it -> first << " " << dic_it -> second<<"\n";
	}
	fileO.close();
	cout<<"66666";
	return 0;
}
