#include <iostream>
#include "Item.h"

using namespace std;
// DO NOT CHANGE THIS CODE
int main() {
    Item myItem; //Static Objects (Item myitem; myitem.display())

    myItem.display();
    Item myItem2(100, 1000);
    myItem2.setDiscount(20);
    myItem2.display();
    return 0;
}
// DO NOT CHANGE ABOVE CODE

/*Item myItem; //Dynamic Objects (Item * item; item = new Item(), Item *item= new Item(), item->display());
*/