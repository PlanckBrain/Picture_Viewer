#pragma once
#include <iostream>

struct PictureNode 
{
	std::string picturePath;
	PictureNode *next;
	PictureNode *prev;
};
ref class PictureList
{
public:
	PictureNode *start;
	PictureNode *current;
	PictureNode *end;
public:
	PictureList();
};