/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainDB.h
 * Author: yuci
 *
 * Created on November 6, 2017, 9:00 PM
 */

#ifndef MAINDB_H
#define MAINDB_H
#include <mysql/mysql.h>
#include "Visitor.h"

class Visitor;

class MainDB {
public:
    MainDB();
    MainDB(Visitor *visitor);
    virtual ~MainDB();
    bool connect() ;
    bool addRecord();
    void readRecord(Visitor& visitor);
    void removeRecord();
    bool query(string sql);
    virtual int getRowCount();
    virtual int getFieldCount();
private:
    MYSQL *connection, mysql;
    MYSQL_RES *result;
    MYSQL_ROW row;
    int query_state;
    
    Visitor *m_visitor;
};

#endif /* MAINDB_H */

