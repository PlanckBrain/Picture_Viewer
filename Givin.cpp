#include <iostream>
#include "Givin.h"
#include "MyForm.h"

PictureList::PictureList()
{
	start = NULL;
	current = NULL;
	end = NULL;
}

PictureList::~PictureList()
{

	//Loop through images and delete each pointer
	PictureNode *node = start;
	while (node != 0)
	{
		delete node;
	}
}

void PictureList::add(std::string value)
{
}

void PictureList::insert(int pos, std::string value)
{

}
