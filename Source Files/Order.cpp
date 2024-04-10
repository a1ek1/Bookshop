#include <sstream>
#include <ctime>
#include "../Header Files/Order.h"


int Order::Count = 1;

double Order::FinalSum() {
    double sum = 0;
    for (int i = 0; i < this->current_products.size(); i++){
        sum += this->current_products[i]->GetPrice();
    }
    return sum;
}

void Order::AddtoCart(Bookshop* bs, int art) {
    for(int i = 0; i < bs->products.size(); i++){
        if (bs->products[i]->GetArticle() == art) {
            this->current_products.push_back(bs->products[i]);
            this->total_count++;
            break;
        }
    }
}

void Order::ShowOrder() {
    int schet = 1;
    cout << "Order " << this->number << " - " << this->GetDate() << endl;
    for (Product* pr : this->current_products) {
        cout << schet << ". Title: " << pr->GetName() << ", Price: " << pr->GetPrice() << "$" << endl;
        schet++;
    }
    cout << "Total price: " << this->FinalSum() << "$" << endl;
}

Order::Order() {
    this->total_count = 0;
    this->number = Count;
    this->Count++;
    time_t current_time = std::time(nullptr);
    tm local_time = *localtime(&current_time);
    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &local_time);
    std::string current_date_time(buffer);
    this->time = current_date_time;
    this->current_products.clear();
    this->state = true;
}

string Order::GetDate(){
    return this->time;
}

void Order::OrderShortInfo(){
    cout << "Order " << this->number << " - " << this->GetDate() << endl;
    cout << "Count items:" << this->GetTotalCount() << " Total price:" << this->FinalSum() << "$" << endl;
    cout << "-------------------------------------------------" << endl;
}

void Order::EndOrder(Bookshop* b) {
    this->state = false;
    b->AddOrder(this);

}

int Order::GetTotalCount(){
    return this->total_count;
}

void Order::ShowStatus() {
    if (this->state == 1){
        cout << "Existed" << endl;
    } else cout << "Ended" << endl;
}
//    int main(){
//        Bookshop* b = Bookshop::getInstance();
//        Admin a;
//        Product hleb("Tolstoy", 2, "War and Peace", 123, 333, 25);
//        Product hleb2("Tolsto2y", 2, "War and Peace", 123, 456, 25.463543);
//        Product hleb3("Tolstoy3", 2, "War and Peace", 123, 789, 25.224312);
//        a.AddProduct(b, &hleb);
//        a.AddProduct(b, &hleb2);
//        a.AddProduct(b, &hleb3);
//        cout << endl;
//        Order o;
//        o.AddtoCart(b, 456);
//        o.ShowOrder();
//        return 0;
//    }

//int main(){
//        Bookshop p;
//    Order first;
//    Product hleb("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    Product hleb2("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    Product hleb3("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    Product hleb4("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    first.AddtoCart(&hleb);
//    first.AddtoCart(&hleb2);
//    first.AddtoCart(&hleb3);
//    first.AddtoCart(&hleb4);
//    first.EndOrder(&p);
//
//    Order second;
//    Product hleb5("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    Product hleb6("Tolstoy", 2, "War and Peace", 123, 333, 0);
//    Product hleb7("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    second.AddtoCart(&hleb5);
//    second.AddtoCart(&hleb6);
//    second.AddtoCart(&hleb7);
//    second.EndOrder(&p);
//
//    second.ShowOrder();
//    //p.ShowOrders();
//    return 0;
//    }

