#include "Item.h"
#include <iostream>
using namespace std;

Item::Item()
{
 itemcode - 0;
  unitprice = 0; 
  discount = 0; 
}
  
  Item::Item(int code, float price)
  {
   itemCode - code; 
   unitprice - price;
   }
   
    Item::~Item()
    {
     cout<<"Destructor called"<<endl;
    }


// 4. Implement Default Constructor Implementation
// 5. Implement Overloaded Constructor Implementation
// 6. Implement Destructor (display "Destructor Called")

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
