#include <string>
using namespace std;

class Invoice
{
    public:

    Invoice(string num, string des ,int quan ,float price);

    void setInfo(string num, string des ,int quan ,float price);

    string getNumber();

     string getDescription();

      int getQuantity();

      float getPrice();

    float getInvoiceAmount();

    private:
        string number ,description;
        int quantity;
        float Price;
};
