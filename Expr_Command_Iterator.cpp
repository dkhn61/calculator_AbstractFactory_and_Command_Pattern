//////
////// Created by Doha Ara on 28/10/22.
//////
#include "Base_Array.h"

template <typename T>
class Expr_Command_Iterator {
public:
    Expr_Command_Iterator (Base_Array <T> & a)
            : a_ (a), curr_ (0) { }
    ~Expr_Command_Iterator (void);

    bool is_done (void) { return this->curr_ >= this->a_.cur_size_; }
    void advance (void) { ++ this->curr_; }
    T & operator * (void) { return this->a.data_[this->curr_]; }
    T * operator -> (void) { return &this->a_.data_[this->curr_]; }
private:
    Base_Array <T> & a_;
    size_t curr_;
};