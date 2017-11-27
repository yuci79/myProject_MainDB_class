/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yuci
 *
 * Created on November 6, 2017, 8:39 PM
 */
#include <cstdlib>
#include "MainDB.h"

#include <iostream>

using namespace std;
//#include "Visitor.h"

using namespace std;

int main(int argc, char** argv) {
    Visitor *v = new Visitor();

    //MainDB md(v);
    MainDB *md = new MainDB(v);
    v->setFirstName("Yucel");
    v->setLastName("Umit");
    v->setAge(38);
    
    //md->readRecord();
    md->connect();
    md->query("select * from user_details");
    cout << "Total Rows:" << md->getRowCount() << endl;

    delete md;
    return 0;
}

