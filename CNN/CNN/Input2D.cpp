#include "Input2D.h"
using namespace std;

Input2D::Input2D(vector<int>input_shape) {
	this->input_shape = input_shape;
	this->layer_output_size = input_shape;
}