#include <bits/stdc++.h>
using namespace std;

int getIntInput() {
  int input;
  cin >> input;
  return input;
}

void getStringInput(string *input) {
  cin.ignore();
  getline(cin, *input);
}

int findIndex(int arr[], int size, int value) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      return i;
    }
  }
  return -1;
}

struct OrderedItem {
  int item_code;
  int quantity;
  int index;
};


class Restaurant {
  private:
    int food_item_codes[12];
    string food_item_name[12];
    int food_item_prices[12];
    double total_tax;

    public:
      void setFoodItems(int n);
      void getFoodItems(int n);
      void shopFoodItems();
};

int main() {
  int n = getIntInput();
  Restaurant restaurant;
  restaurant.setFoodItems(n);
  restaurant.getFoodItems(n);
  restaurant.shopFoodItems();
  system("pause");
  return 0;
}

void Restaurant :: setFoodItems(int n) {
  for(int i = 0; i < n; i++) {
    food_item_codes[i] = getIntInput();
    getStringInput(&food_item_name[i]);
    food_item_prices[i] = getIntInput();
  }
  total_tax = 0;
}

void Restaurant :: getFoodItems(int n) {
  cout << endl;
  cout << "\t\t\t   MAKE BILL" << endl;
  cout << "________________________________________________________________" << endl;
  // cout << endl;
  cout << "Sl\tItem Code\tItem Name\t\t\tItem Price\n";
  for(int i = 0; i < n; i++) {
    cout << i+1 << "\t" << food_item_codes[i] << "\t\t" << food_item_name[i] << "\t\t" << food_item_prices[i] << endl;
  }
}

void Restaurant :: shopFoodItems() {
  int tableNo, noOfItems, totalWithoutTax = 0;
  double tax = 0.0, totalBill = 0.0;
  cout << endl;
  cout << "Enter table number: ";
  tableNo = getIntInput();
  cout << "Enter number of items: ";
  noOfItems = getIntInput();
  OrderedItem orderedItems[noOfItems];
  for (int i = 0; i < noOfItems; i++) {
    int itemCode, qty, index = -1;
    invalidFlag:
    cout << "Enter item code: ";
    cin >> itemCode;
    index = findIndex(food_item_codes, 12, itemCode);
    if (index == -1) {
      cout << "Item code you entered is invalid" << endl;
      goto invalidFlag;
    }
    cout << "Enter quantity: ";
    cin >> qty;
    orderedItems[i] = OrderedItem({ itemCode, qty, index });
  }
  cout << endl;
  cout << "\t\t\t\t  BILL SUMMARY" << endl;
  cout << "_________________________________________________________________________________" << endl;
  // cout << endl;
  cout << "Item Code\tItem Name\t\tItem Price\tItem Quantity\tTotal Price" << endl;
  for (int i = 0; i < noOfItems; i++) {
    int index = orderedItems[i].index;
    string name = food_item_name[index];
    int code = orderedItems[i].item_code;
    int price = food_item_prices[index];
    int quantity = orderedItems[i].quantity;
    int total = price * quantity;
    totalWithoutTax += total;
    cout << code << "\t\t" << name << "\t" << price << "\t\t" << quantity << "\t\t" << total << endl;
  }
  tax = double(totalWithoutTax) * 0.05;
  totalBill = double(totalWithoutTax) + tax;
  // cout << setprecision(2) << fixed;
  cout << "Tax:\t\t\t\t\t\t\t\t\t" << tax << endl;
  cout << "_________________________________________________________________________________" << endl;
  cout << "NET TOTAL:\t\t\t\t\t\t\t\t" << totalBill << endl;
}
