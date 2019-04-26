#include <iostream>
#include "Invoice.h"

using namespace std;

    Invoice::Invoice(string num, string des ,int quan ,float price)
    {
       setInfo(num,des,quan,price);
    }
    void Invoice::setInfo(string num, string des ,int quan ,float price)
    {
        number=num;
        description=des;
        quantity=quan;
        Price=price;
    }
    string Invoice::getNumber()
    {
      return number;
    }
    string Invoice::getDescription()
    {
      return description;
    }
    int Invoice::getQuantity()
    {
        return quantity;
    }

    float Invoice::getPrice()
    {
      return Price;
    }
    float Invoice::getInvoiceAmount()
    {
        float invoice=0;
      if(quantity<0)
            quantity=0;
      if(Price<0)
        Price=0;
      else
      {
          invoice=quantity*Price;
      }
        return invoice;
    }
