#ifndef INDICEEXCEPTION_H_INCLUDED
#define INDICEEXCEPTION_H_INCLUDED

#include <exception>

class IndiceException : public std::exception {
    private:
    const char* mensaje;
    
    public:
    IndiceException(const char* mensaje) : mensaje(mensaje) {}

    const char* what() const noexcept override {
        return mensaje;
    }
};

#endif