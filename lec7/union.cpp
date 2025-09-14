#include <iostream>
#include <cstring> // strcpy
#include <cstdlib> // rand, srand
#include <ctime>   // time
using namespace std;

// POD success struct
struct Success
{
    int statusCode;
    char message[64];
};

// POD error struct
struct Error
{
    int errorCode;
    char errorMessage[64];
};

// union holding either a success or an error
union ApiResponse
{
    Success success;
    Error error;
};

// wrapper: small tag plus the union -> safe to return by value
struct ApiResult
{
    bool ok; // true => success, false => error
    ApiResponse resp;
};

// simulate a fake API call (random)
bool callApi()
{
    return (rand() % 2) == 0; // randomly success or error
}

// function that creates and returns an ApiResult (demonstrates returning a union)
ApiResult makeApiResult(bool simulateSuccess)
{
    ApiResult r;
    if (simulateSuccess)
    {
        r.ok = true;
        r.resp.success.statusCode = 200;
        strcpy(r.resp.success.message, "Data fetched successfully");
    }
    else
    {
        r.ok = false;
        r.resp.error.errorCode = 404;
        strcpy(r.resp.error.errorMessage, "Resource not found");
    }
    return r; // safe: ApiResult is POD-like
}

int main()
{
    srand((unsigned)time(nullptr));
    bool ok = callApi();
    ApiResult result = makeApiResult(ok);

    if (result.ok)
    {
        cout << "✅ Success: " << result.resp.success.statusCode
             << " - " << result.resp.success.message << endl;
    }
    else
    {
        cout << "❌ Error: " << result.resp.error.errorCode
             << " - " << result.resp.error.errorMessage << endl;
    }

    // Note: because we used a tag (result.ok), we know which union member is valid.
    return 0;
}
