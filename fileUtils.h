#ifndef _FILEUTILS_H_
#define _FILEUTILS_H_

#include <string>

class LotteryData;

class FileUtils
{
public:
    FileUtils(LotteryData* data);
    virtual ~FileUtils() {}

    bool loadFile(std::string path);
    bool saveFile(std::string path);

private:
    LotteryData* m_data;
};

#endif //_FILEUTILS_H_
