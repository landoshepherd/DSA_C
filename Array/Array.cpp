//
// Created by Lando Shepherd on 9/2/24.
//

#include "Array.hpp"

#include <iostream>

Array::Array(int val, int size){
    _arr = new int[size*2];
    for(int i = 0; i < size; i++){
        _arr[i] = val;
    }
    _size = size;
    _capacity = size*2;
}

Array::~Array(){
    delete[] _arr;
}

void Array::Display(){
    for(int i = 0; i < _size; i++){
        std::cout << _arr[i] << " ";
    }

    // New line and flush
    std::cout << std::endl;
}

int Array::Size(){
    return _size;
}

int Array::Capacity(){
    return _capacity;
}

void Array::Add(int val){
    if (_size == _capacity){
        // We need to double the size
        int* newArr = new int[_size*2];
        for(int i = 0; i < _size; i++){
            newArr[i] = _arr[i];
        }
        delete[] _arr;
        _arr = newArr;
        _capacity = _size*2;
    }

    _arr[_size] = val;
    _size++;
}