#pragma once

#include"Detail.h"
#include"Assembly.h"
#include<vector>

template <class T>
Detail* createClass() {
    return new T();
}
