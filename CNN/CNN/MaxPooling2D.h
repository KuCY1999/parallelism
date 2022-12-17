#pragma once
#include "ReLU.h"
#include "Input2D.h"

class MaxPooling2D
{
public:
	MaxPooling2D(int pool_size,ReLU previous_layer,int stride);
	void max_pooling(Input2D input2D);
private:
	int pool_size;
	ReLU previous_layer;
	int stride;
};

