#include "Givin.h"
#include "MyForm.h"

PictureList::PictureList()
{
	head = 0;
	tail = 0;
}

PictureList::~PictureList()
{

	//Loop through images and delete each pointer
	PictureNode *node = head;
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
