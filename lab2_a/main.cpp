
#include "Header.h"

int main()
{
    Class1 ONE;
    Class2 TWO;
    Class2 THREE;
    
    DB database;

    database.my_copy(ONE);
    database.my_copy(TWO);
    database.my_copy(THREE);

    database.info();

    system("pause");
    return 0;
}
   
