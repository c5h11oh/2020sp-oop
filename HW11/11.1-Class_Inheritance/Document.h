#pragma once
#include <string>
class Document
{
public:
	Document();
	Document(const std::string& text);
	const Document& operator =(const Document& rightdocument);
	const std::string& getText() const;
	void setText(const std::string& input);
private:
	std::string text;
};

