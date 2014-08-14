#include <stdexcept>
#include <string>

using namespace std;

class PiggyBankException: public out_of_range
{
    public:
        PiggyBankException(const string& message=" "):
            out_of_range(message.c_str())
        {}
};            