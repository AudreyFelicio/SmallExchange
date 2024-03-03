#include <iostream>

#include "crow.h"

auto main() -> int{
    crow::SimpleApp app;
    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });
    app.port(18080).multithreaded().run();
    return 0;
}
