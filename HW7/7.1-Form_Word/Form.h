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
	void SetInputWord(string inputWord);//�]�wInput
	void ProcessInputWord();//�B�z Input ����T
	void SetFileName(string fileName);//�]�w�ɮצW��
	void Load_CompareWord();//Ū�ɨåB���
	void PrintFoundWords();//�L�X�ŦX���r
};

