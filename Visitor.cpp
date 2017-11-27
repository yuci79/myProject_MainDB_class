/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Visitor.cpp
 * Author: yuci
 * 
 * Created on November 6, 2017, 9:16 PM
 */

#include "Visitor.h"

Visitor::Visitor() {
}

Visitor::Visitor( Visitor& orig) {
}

Visitor::~Visitor() {
}

void Visitor::setFirstName(string name)
{
    first_name = name;
}

string Visitor::getFirstName()
{
    return first_name;
}
void Visitor::setLastName(string name)
{
}
void Visitor::setAge(int age)
{
}
