/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MainDB.cpp
 * Author: yuci
 * 
 * Created on November 6, 2017, 9:00 PM
 */

#include "MainDB.h"
#include <iostream>

using namespace std;
MainDB::MainDB() {
}

MainDB::MainDB(Visitor *visitor):m_visitor(visitor) {
    cout << m_visitor->getFirstName()<<endl;
}

MainDB::~MainDB() {
}

bool MainDB::connect() 
{
    cout << "connect()" << endl;

    mysql_init(&mysql);
    connection = mysql_real_connect(&mysql,"localhost","root","972238","test",0,0,0); 
    cout << "Result of connect:\t" << query_state << endl;

    // Report error if failed to connect to database
    if (connection == NULL) {
        cout << mysql_error(&mysql) << endl;
        return false;
    }
    return true;
}
bool MainDB::addRecord()
{
}
void MainDB::readRecord(Visitor& visitor)
{
    cout << "First Name: " << m_visitor->getFirstName() << endl;
}
void MainDB::removeRecord()
{
}

bool MainDB::query(string sql)
{
    if (result != NULL) mysql_free_result(result);
    
    //Send query to database
    query_state = mysql_query(connection, sql.c_str());
    cout << "Result of Query:\t" << query_state << endl;
    // store result
    result = mysql_store_result(connection);
       while ( ( row = mysql_fetch_row(result)) != NULL ) {
        // Print result, it prints row[column_number])
        cout << row[0] << "\t" << row[1] << "\t" << row[2] <<  "\t" << row[3] << endl;
        }
}

	int MainDB::getRowCount() {
		return mysql_num_rows(result);
	}
	int MainDB::getFieldCount() {
		int count = mysql_num_fields(result);
		return count;
	}