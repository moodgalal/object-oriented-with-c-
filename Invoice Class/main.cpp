#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{


    Invoice myInvoice("2","Flash Memory",3,40);

   cout<<"The initial data is:- \n"<<
        "Item number: "<<myInvoice.getNumber()<<endl<<
        "Item Description: "<<myInvoice.getDescription()<<endl<<
        "Item Quantity: "<<myInvoice.getQuantity()<<endl<<
        "Item price: "<<myInvoice.getPrice()<<endl<<
        "---------------------------------------------------------- \n"<<endl
        ;

        string number , description;
        int quantity;
        float Price;
cout<<"Enter the item number please \n";
        cin>>number;
cout<<"Enter the item description please \n"; //The getline() function doesn't work !!!
        getline(cin,description);
cout<<"Enter the item quantity please \n";
        cin>>quantity;
cout<<"Enter the item price please \n";
        cin>>Price;
    myInvoice.setInfo(number ,description,quantity,Price);

   cout<<"The invoice is : \n"<<
        "Item number: "<<myInvoice.getNumber()<<endl<<
        "Item Description: "<<myInvoice.getDescription()<<endl<<
        "Item Quantity: "<<myInvoice.getQuantity()<<endl<<
        "Item price: "<<myInvoice.getPrice()<<endl<<
        "---------------------------------------------------------- \n"
        ;

    cout<<"Your invoice amount is: "<<myInvoice.getInvoiceAmount()<<"$"<<endl;
    return 0;
}
