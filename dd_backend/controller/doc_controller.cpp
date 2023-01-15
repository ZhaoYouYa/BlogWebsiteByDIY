#include "doc_controller.h"

DocController::DocController() {}

void DocController::Test(
    const HttpRequestPtr &,
    std::function<void(const HttpResponsePtr &)> &&callback) {
  Json::Value t;
  t["😀"] = "😀";
  auto resp = HttpResponse::newHttpJsonResponse(t);
  resp->addHeader("Access-Control-Allow-Origin", "*");
  resp->addHeader("Access-Control-Allow-Methods", "GET, POST");
  resp->addHeader("Access-Control-Allow-Private-Network", "true");
  resp->addHeader("Access-Control-Allow-Credentials", "true");

  callback(resp);
}