#include <drogon/HttpController.h>
#include <drogon/HttpTypes.h>
#include <drogon/utils/FunctionTraits.h>

using namespace drogon;

class DocController : public HttpController<DocController, false> {

public:
  DocController();
    METHOD_LIST_BEGIN
  METHOD_ADD(DocController::Test, "/testConnect", Get);

  METHOD_LIST_END
  protected:
  void Test(const HttpRequestPtr &,
                   std::function<void(const HttpResponsePtr &)> &&callback);
};
