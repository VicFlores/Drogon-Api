#include "demo_v1_User.h"

using namespace demo::v1;

// Add definition of your processing function here

void User::getInfo(const HttpRequestPtr &req,
                   std::function<void (const HttpResponsePtr &)> &&callback) const
{
    LOG_DEBUG<<"User "<<69<<" get his information";

    //Verify the validity of the token, etc.
    //Read the database or cache to get user information
    Json::Value ret;
    ret["result"]="ok";
    ret["user_name"]="Vic";
    ret["user_id"]=69;
    ret["gender"]=1;
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}