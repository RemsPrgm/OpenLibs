#ifndef SCONF_H
#define SCONF_H

#include <vector>
#include "BasicConf.h"

class SConf : public BasicConf
{
public:
    SConf();

    ConfErr Load();
    ConfErr Save();

    ConfErr SetArg(std::string Arg, std::string  value);
    ConfErr GetArg(std::string Arg, std::string& value);

    ConfErr SetFile(std::string file);

    ~SConf();

private:
    bool IsExist(std::string Arg);
    int GetIndex(std::string Arg);

    std::vector<ConfDesc> config;
};

#endif // SCONF_H

