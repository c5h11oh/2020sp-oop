#include "Email.h"

Email::Email(): Document(), sender(""), recipient(""), title("") {}
Email::Email(std::string text, std::string sender, std::string recipient, std::string title) : Document(text), sender(sender), recipient(recipient), title(title) {}
const Email& Email::operator=(const Email& extemail) {
	Document::operator=(extemail);
	this->recipient = extemail.recipient;
	this->sender = extemail.sender;
	this->title = extemail.title;
	return *this;
}

const std::string & Email::getSender() const
{
	return this->sender;
}

const std::string & Email::getRecipient() const
{
	return this->recipient;
}

const std::string & Email::getTitle() const
{
	return this->title;
}

void Email::setSender(const std::string inputSender)
{
	this->sender = inputSender;
}

void Email::setRecipient(const std::string inputRecipient)
{
	this->recipient = inputRecipient;
}

void Email::setTitle(const std::string inputTitle)
{
	this->title = inputTitle;
}
