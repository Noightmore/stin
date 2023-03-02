#ifndef CV1_CHAT_H
#define CV1_CHAT_H

#include <string>
#include <vector>

#include "Message.h"

class Chat {
    public:
        Chat();
        int addMessage(std::string* message);
        std::string* getMessage(int index);
        int getNumberOfMessages();
    private:
        std::vector<Message*> messages;
    };

#endif //CV1_CHAT_H
