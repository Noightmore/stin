#ifndef CV1_USER_H
#define CV1_USER_H

#include <string>
#include "chat.h"

class User {
    public:
        User(std::string* name);
        std::string getName() const;
        int sendMessage(std::string* message, Chat* chat);
    private:
        std::string* name;
    };


#endif //CV1_USER_H
