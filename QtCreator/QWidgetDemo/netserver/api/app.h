﻿#ifndef APP_H
#define APP_H

#include "head.h"

class App
{
public:
    static QString ConfigFile;          //配置文件路径

    static int ListenPort1;             //监听端口1
    static int CmdStart1;               //标识符1开始
    static int CmdLen1;                 //标识符1长度
    static bool HexData1;               //16进制显示

    static int ListenPort2;             //监听端口2
    static int CmdStart2;               //标识符2开始
    static int CmdLen2;                 //标识符2长度
    static bool HexData2;               //16进制显示

    //读写配置参数及其他操作
    static void readConfig();           //读取配置参数
    static void writeConfig();          //写入配置参数
    static void newConfig();            //以初始值新建配置文件
    static bool checkConfig();          //校验配置文件

};

#endif // APP_H
