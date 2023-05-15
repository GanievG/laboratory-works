#include"Header.h"


int main() {
    setlocale(LC_ALL, "ru");
    list<A*> List;
    List.push_back(new A("first"));
    List.push_back(new B("second"));

    vector<A*> Vector;
    copy(List.begin(), List.end(), back_inserter(Vector));

    del(Vector);
    return 0;
}