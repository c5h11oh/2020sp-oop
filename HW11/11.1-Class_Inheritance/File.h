#pragma once
#include "Document.h"
class File :
	public Document
{
public:
	File();
	File(std::string text, std::string pathname);
	const File& operator =(const File& extfile);
	const std::string& getPathname() const;
	void setPathname(const std::string& input);
private:
	std::string pathname;
};

