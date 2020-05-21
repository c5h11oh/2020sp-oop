#include "File.h"

File::File(): Document(), pathname(""){}
File::File(std::string text, std::string pathname) : Document(text), pathname(pathname) {}
const File& File::operator=(const File& extfile) {
	Document::operator=(extfile);
	this->pathname = extfile.pathname;
	return *this;
}

const std::string & File::getPathname() const
{
	return this->pathname;
}

void File::setPathname(const std::string & input)
{
	this->pathname = input;
}
