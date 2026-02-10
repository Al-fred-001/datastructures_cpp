#include <iostream>
#include "stack.hpp"

// Main definitions

Stack::Stack()
{

    // Simply initializing tha stack;
    _arr = nullptr;
    _top = nullptr;
    _maxSize = 0;
    _size = 0;
    _resizable = true;
};

Stack::Stack(int max_size, bool resizable = false)
{

    // Initializing the stack of fixed size.
    _arr = (float *)calloc(max_size, sizeof(float)); // allocating memory for the array
                                                     //  in chunks using calloc.
    _top = _arr;
    _maxSize = max_size;
    _size = 0;
    _resizable = resizable;                            // Can we resize it later ? (true / false)
};


//                              -- Defining member functions. --

void Stack::_Push(float value) // if Stack:: not used - _IsFull() gets undefined -_-
{
    // if (_IsFull() && _resizable == true)
    // {
    //     _ResizeStack(_maxSize * 2 + 1);
    // } else
    if(_IsFull()){
        // std::cout<<"Stack is full."<<std::endl;
        return;
    }

    float *new_top = _top + 1; // adding 4 bytes
    _top = new_top;
    *_top = value;

    _size++;
    return;
}

float Stack::_Pop()
{
    if (_IsEmpty())
    {
        std::cout << "Stack is empty. Cannot Pop item." << std::endl;
        return -69.67f;
    }

    float temp = *_top;
    *_top = 0;
    _top = _top - 1; // reducing 4 bytes.

    _size--;
    return temp;
}


int Stack::_Search(float value)
{
    if (_IsEmpty())
    {
        std::cout << "Stack is empty." << std::endl;
        return -69;
    }
    int offset = 0; // how far below from top.
    float *temp = _top;

    while (temp != _arr)
    {
        if (*temp == value)
        {
            return offset;
        }
        temp--;   // decrementing pointer.
        offset++; // incrementing offset.
    }

    if (*_arr != value)
        return -6967;

    return offset;
}




//                      -- Defining miscellaneous functions. --
void Stack::_PrintStack()
{
    float *val_pointer = _top;

    for (int i = 0; i < _size; i++)
    {
        std::cout << "Item: " << *val_pointer << std::endl;
        val_pointer--;
    }
}

int Stack::_GetCurrentSize()
{
    return _size;
};

int Stack::_GetSpaceAvailable()
{
    return _maxSize - _size;
};


float Stack::_Bottom()
{
	if (_IsEmpty())
		return -69.67;
	return *_arr;
}

float Stack::_Top()
{
	if (_IsEmpty())
		return -69.67;
	return *_top;
}

/*

    Something's odd about how this (_ResizeStack()) function is working.  
    Top also should've been shifted but it works fine without updating it.
    Needs amendement or more info on that matter.

*/

// void Stack::_ResizeStack(int new_max_size)
// {
//     // int diff = (_top - _arr) / sizeof(float);

//     if(!_resizable){
//         std::cout<<"Problem: Stack is not resizable."<<std::endl;
//         return;
//     }

//     float *temp = (float *)realloc(_arr, new_max_size * sizeof(float));
//     if (!temp)
//     {

//         return;
//     }

//     _arr = temp;
//     // _top = _arr + diff * sizeof(float); 
//     _maxSize = new_max_size;

//     std::cout << "Resized stack to : " << new_max_size << std::endl;
// }


//                      -- Defining helper functions. --
bool Stack::_IsEmpty()
{
    return _size == 0;
};

bool Stack::_IsFull()
{
    return _size == _maxSize;
};