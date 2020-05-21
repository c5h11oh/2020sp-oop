#pragma once
#include <string>
#include <iostream>
void resetUnUsed(bool** unUsed);
inline void Print(const std::string& s);
void JudgeAndPrint(const std::string& s, const std::string& arr, bool** unUsed);
bool FindWord(const std::string& s, const std::string& arr, bool** unUsed);
bool FindChar(const std::string& s, const std::string& arr, bool** unUsed, int l, int m, int n);