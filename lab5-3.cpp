//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double shipping_fee = 0.0;
    double purchase_amount = 0.0;
    double discount_rate = 0.0;
    char club_member = ' ';
    double total_price = 0.0;
    double total_discount = 0.0;
    double new_total = 0.0;
    cout << "Enter purchase amount: " << endl;
    cin >> purchase_amount;
    cout << "Are you a Premier Club member? (Y/N)" << endl;
    cin >> club_member;

    if (toupper(club_member) == 'Y'){
        discount_rate = 0.1;
    }else
        if (toupper(club_member) == 'N'){
        discount_rate = 0.05;

    }else {
    cout << "Invalid number entered. Please restart";
    }
    total_discount = (purchase_amount * discount_rate);
    total_price = (purchase_amount - total_discount);
        if (total_price >= 100) {
        shipping_fee = 0.99;
    } else {
        shipping_fee = 4.99;
    }
    new_total = total_price + shipping_fee;


    cout << "Total price: $" << new_total << endl;
}
