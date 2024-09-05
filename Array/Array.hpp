//
// Created by Lando Shepherd on 9/2/24.
//

#ifndef DSA_CPP_ARRAY_HPP
#define DSA_CPP_ARRAY_HPP

class Array {
public:
    Array();
    Array(int val, int size);
    ~Array();
    void Display();
    void Add(int obj);
    void Insert(int index, int obj);
    void Delete(int index);
    int Search(int obj);
    int Get(int index);
    void Set(int index, int obj);
    int Max();
    int Min();
    int Size();
    int Capacity();
    //Reverse()?
    //Shift/Rotate?
private:
    int _size;
    int _capacity;
    int* _arr;
};


#endif //DSA_CPP_ARRAY_HPP
