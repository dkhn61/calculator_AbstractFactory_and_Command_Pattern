////
//// Created by Doha Ara on 28/10/22.
////
//#ifndef ARRAY_PTR_CPP
//#define ARRAY_PTR_CPP
//
//#include <iostream>
//
//template <typename T>
//class array_auto_ptr {
//public:
//    // constructors
//    array_auto_ptr(void)
//            : ptr_(0) {}
//
//    array_auto_ptr(T *ptr)
//            : ptr_(nullptr) {
//        this->ptr_ = new T;
//    }
//
//    // destructor
//    ~array_auto_ptr(void) {
//        if (0 != this->ptr_) {
//            delete [] this->ptr_;
//        }
//    }
//
//    T *operator -> (void) { return this->ptr_; }
//
//    T &operator * (void) { return *this->ptr_; }
//
//    operator T * (void) { return this->ptr_; }
//
//    T & operator [] (int i) { return this->ptr_[i]; }
//
//private:
//    // pointer to the memory
//    T * ptr_;
//};
//
//#endif