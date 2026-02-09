//                  --Declarations-
class Stack
{

public:
    // Declaring member variables
    float _val;
    float *_arr;
    float *_top;
    int _maxSize;
    int _size;
    bool _resizable;

    // for initialization
    Stack();
    Stack(int max_size, bool resizable);
    // Stack(int max_size, int fixed);

    //                           -- Declaring member functions --

    //Modifiers
    void _Push(float val);
    float _Pop();

    // void _ResizeStack(int new_max_size); //doesn't work as intended yet.


    //Non-modifiers
    float _Top();
    float _Bottom();
    int _Search(float value);

    void _PrintStack();
    int _GetCurrentSize();
    int _GetSpaceAvailable();


    // Helper functions
    bool _IsEmpty();
    bool _IsFull();
};