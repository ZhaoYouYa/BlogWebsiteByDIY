#include <iostream>
#include <memory>
#include "controller/doc_controller.h"
using namespace drogon;
int main(int, char**) {


    
    auto c_doc = std::make_shared<DocController>();

     app()
        .setLogPath("./")
        .setLogLevel(trantor::Logger::kWarn)
        .addListener("0.0.0.0", 2332)
        .setDocumentRoot("./wwwroot")
        .setThreadNum(1)
        .registerController(c_doc)
        .run();
}
