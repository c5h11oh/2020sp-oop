#pragma once
#include "Document.h"
class Email :
	public Document
{
public:
	Email();
	Email(std::string text, std::string sender, std::string recipient, std::string title);
	const Email& operator =(const Email& extemail);
	const std::string& getSender() const;
	const std::string& getRecipient() const;
	const std::string& getTitle() const;
	void setSender(const std::string inputSender);
	void setRecipient(const std::string inputRecipient);
	void setTitle(const std::string inputTitle);
private:
	std::string sender, recipient, title;
};

