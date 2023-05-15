#include"del.h"
void del(std::vector<A*>& v) {
    for (int i = 0; i < v.size(); ++i)
        delete v[i];
}