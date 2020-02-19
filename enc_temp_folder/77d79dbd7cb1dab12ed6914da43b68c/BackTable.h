#pragma once
#ifndef __BACK_TABLE__
#define __BACK_TABLE__
#include "DisplayObject.h"

class BackTable : public DisplayObject
{
public:
	BackTable();
	~BackTable();

	void draw() override;
	void update() override;
	void clean() override;
};

#endif /* defined (__BACK_TABLE__) */