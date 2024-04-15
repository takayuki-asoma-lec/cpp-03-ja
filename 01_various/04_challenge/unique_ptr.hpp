// コードを入力してください
#pragma once
#include <iostream>

class unique_int_ptr{
public:
    unique_int_ptr(const int in){
        ptr_ = new int{in};
    };
    ~unique_int_ptr(){
        delete ptr_;
    };
    int *get(){
        return ptr_;
    };
    int* release(){
        auto temp = ptr_;
        ptr_ = nullptr;
        return temp;
    };
    int &operator*()
    {
        return *ptr_;
    };

private:
    int *ptr_;
};


template <typename T>
class unique_ptr{
public:
    unique_ptr(const T in){
        ptr_ = new T{in};
    };
    ~unique_ptr(){
        delete ptr_;
    };
    T *get(){
        return ptr_;
    };
    T* release(){
        auto temp = ptr_;
        ptr_ = nullptr;
        return temp;
    };
    T &operator*()
    {
        return *ptr_;
    };

private:
    T *ptr_;
};