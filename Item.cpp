#include "Item.h"
#include <iostream>
using namespace std;

// 4. Default Constructor Implementation
Item::Item(void){
  itemCode = 0;
  unitPrice =0;
}
// 5. Overloaded Constructor Implementation
Item::Item(int pitemCode, float punitPrice){
  itemCode = pitemCode;
  unitPrice = punitPrice;
}
// 6. Implement Destructor (display "Destructor Called")
Item::~Item(){
  cout << "Destructor Called" << endl;
}
// DO NOT CHANGE THE CODE GIVEN BELOW
void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
  return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
// END DO NOT CHANGE ABOVE CODE