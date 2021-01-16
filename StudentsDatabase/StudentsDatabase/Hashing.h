#ifndef HASHING_H
#define HASHING_H

#include <iostream>
#include <string>

std::string encrypt(std::string msg)
{
    std::string key = "TotallySafeHash";

    std::string tmp(key);
    while (key.size() < msg.size())
        key += tmp;

    for (std::string::size_type i = 0; i < msg.size(); ++i)
        msg[i] ^= key[i];
    return msg;
}
std::string decrypt(std::string hashedString)
{
    std::string key = "TotallySafeHash";

    return encrypt(hashedString);
}

#endif // HASHING_H
