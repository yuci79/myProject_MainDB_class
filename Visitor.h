/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.h
 * Author: yuci
 *
 * Created on November 6, 2017, 9:16 PM
 */

#ifndef VISITOR_H
#define VISITOR_H
#include <string>
using namespace std;

class Visitor {
public:
    Visitor(); // Default constructor
    Visitor(Visitor& orig); // Copy constructor
    virtual ~Visitor();
    void setFirstName(string name);
    void setLastName(string name);
    void setAge(int age);
    string getFirstName();
private:
    string first_name;
    string last_name;
    int age;
    string address;
    string country;
};

#endif /* VISITOR_H */

