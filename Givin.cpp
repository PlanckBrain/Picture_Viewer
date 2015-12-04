#include <iostream>
#include "Givin.h"

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

void PictureList::remove(int pos)
{
	//throw gcnew System::NotImplementedException();
}

std::string PictureList::get(int pos)
{
	return std::string();
}

void PictureList::set(int pos, double value)
{
	//throw gcnew System::NotImplementedException();
}

int PictureList::size()
{
	return 0;
}
