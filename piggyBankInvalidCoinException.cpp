#include <stdexcept>
#include <string>

using namespace std;

class PiggyBankInvalidCoinException: invalid_argument
{
    public:
        PiggyBankInvalidCoinException(const string& message=" "):
            invalid_argument(message.c_str()){}
};            