#include "Headers/Transaction.h"

Transaction::Transaction(const std::string& name, const std::string& description, int priority, std::string& receiver, std::string payer, int amount)
    : Task(name, description, priority, TaskTag::Transaction) {
    setReceiver(receiver);
    setPayer(payer);
    setAmount(amount);
}

void Transaction::setReceiver(const std::string& receiver){
    this->receiver = receiver;
}

std::string Transaction::getReceiver() const{
    return this->receiver;
}


void Transaction::setPayer(const std::string& payer){
    this->payer = payer;
}

std::string Transaction::getPayer() const{
    return this->payer;
}

void Transaction::setAmount(const int amount){
    this->amount = amount;
}

int Transaction::getAmount() const{
    return this->amount;
}

void Transaction::display() const{

    //DISPLAY IN UI
}

