#include "Document.h"

Document::Document(): text("") {}

Document::Document(const std::string& input) {
	this->text = input;
}

const Document& Document::operator =(const Document& rightdocument) {
	this->text = rightdocument.text;
	return *this;
}

const std::string& Document::getText() const {
	return this->text;
}

void Document::setText(const std::string& input) {
	this->text = input;
}