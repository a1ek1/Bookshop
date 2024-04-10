cmake_minimum_required(VERSION 3.26)
project(Bookshop)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bookshop main.cpp
        "Source Files/User.cpp"
        "Header Files/User.h"
        "Source Files/Worker.cpp"
        "Header Files/Worker.h"
        "Source Files/Admin.cpp"
        "Header Files/Admin.h"
        "Source Files/Bookshop.cpp"
        "Header Files/Bookshop.h"
        "Source Files/Product.cpp"
        "Header Files/Product.h"
        "Source Files/Order.cpp"
        "Header Files/Order.h"
        "Header Files/CreateUser.h"
        "Header Files/Cashier.h"
        "Source Files/FiscalReceipt.cpp"
        "Header Files/FiscalReceipt.h"
        "Source Files/Coupon.cpp"
        "Header Files/Coupon.h"
        "Source Files/AbstractFactory.cpp"
        "Header Files/AbstractFactory.h"
        "Header Files/AdminProxy.h"
        "Header Files/PricingStrategy.h"
)