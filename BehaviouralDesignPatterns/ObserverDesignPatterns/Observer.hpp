#pragma once
#include <string>

// ===== Observer Interface =====
class Observer
{
public:
    virtual void update(int price) = 0;
    virtual ~Observer() {}
};

// ===== Concrete Observers =====

class MobileObserver : public Observer
{
private:
    std::string name;

public:
    MobileObserver(std::string name);
    void update(int price) override;
};

class WebObserver : public Observer
{
private:
    std::string name;

public:
    WebObserver(std::string name);
    void update(int price) override;
};