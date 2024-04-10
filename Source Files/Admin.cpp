#include "../Header Files/Admin.h"

void Admin::ChangePrice(Product* ex, double newPrice) {
    ex->SetPrice(newPrice);
}

void Admin::SetDirector(Bookshop* sh, string name) {
    sh->director = name;
}

void Admin::SetAddress(Bookshop* ch, std::string address) {
    ch->address = address;
}

void Admin::AddProduct(Bookshop* bs, Product* pr) {
    int art = pr->GetArticle();

    // Проверяем, есть ли товар с таким же артикулом в текущем книжном магазине
    for(int i = 0; i < bs->products.size(); i++){
        if (bs->products[i]->GetArticle() == art) {
            // Если товар уже есть, увеличиваем его количество на 1
            int n = bs->products[i]->GetQuantity();
            n++;
            bs->products[i]->SetQuantity(n);
            return;
        }
    }

    // Если товара с таким артикулом нет в магазине, добавляем его в массив products
    bs->products.push_back(pr);
}




//int main(){
//    Admin a;
//    Product hleb("Tolstoy", 2, "War and Peace", 123, 333, 25);
//    cout << hleb.GetPrice() << endl;
//    a.ChangePrice(&hleb, 50.24);
//    cout << hleb.GetPrice();
//    return 0;
//}



//int main(){
//    Product book("Bible", 200, "No", 12444, 12343, 25.2);
//    Admin Sergey ("Oleg", "Semchenko", "smchnk", "12345678");
//    return 0;
//}