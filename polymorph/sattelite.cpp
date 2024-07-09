#include <iostream>
#include <vector>
using namespace std;

class Sattelite {
public:
    virtual void link() const = 0;
    virtual void unlink() const = 0;
};
class CommunicationSattelite : public Sattelite {
public:
    CommunicationSattelite(int id) : m_id(id) {}
    virtual void link() const override {
        cout << "Communication Satellite " << m_id << " linked." << endl;
    }
    virtual void unlink() const override {
        cout << "Communication Satellite " << m_id << " unlinked." << endl;
    }
private:
    int m_id;
};

class WeatherSattelite : public Sattelite {
public:
    WeatherSatellite(int id) : m_id(id) {}
    virtual void link() const override {
        cout << "Weather Satellite " << m_id << " linked." << endl;
    }
    virtual void unlink() const override {
        cout << "Weather Satellite " << m_id << " unlinked." << endl;
    }
private:
    int m_id;
};

int main()
{
    vector<Sattelite*> sattelites;

    return 0;
}