#include<string>
#include<vector>
#include<fstream>
#include<iostream>
using namespace std;
class Form
{
private:
	string inputWord, fileName, toBeTested;
	int count[26] = { 0 };
	vector<string> output;
public:
	void SetInputWord(string inputWord);//設定Input
	void ProcessInputWord();//處理 Input 的資訊
	void SetFileName(string fileName);//設定檔案名稱
	void Load_CompareWord();//讀檔並且比較
	void PrintFoundWords();//印出符合的字
};

