#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Task.h"

class Transaction : public Task {
private:
    std::string receiver;
    std::string payer;
    int amount;
public:
    Transaction(const std::string& name, const std::string& description, int priority, std::string& receiver, std::string payer, int amount);

    void setReceiver(const std::string& receiver);
    std::string getReceiver() const;

    void setPayer(const std::string& payer);
    std::string getPayer() const;

    void setAmount(const int amount);
    int getAmount() const;

    void display() const override;

};


#endif // TRANSACTION_H
