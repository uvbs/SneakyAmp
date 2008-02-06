/************************************************
 *
 * Written by Joe Bott - Copyright 2000-2006
 *
 * Released under the LGPL on Sep 23, 2006
 * http://www.gnu.org/copyleft/lesser.html
 *
 * In a nutshell, do what you want with the source,
 * but any modifications must be open source under 
 * the LGPL as well.
 *
 *************************************************/

#pragma once

#ifndef INPUTPARSE_H
#define INPUTPARSE_H
#include "sneakyamp.h"
#include "filescan.h"

using namespace std;

// String for holding everything that has been input
//extern CString input;

void inputParse(char input_char);

extern winampGeneralPurposePlugin plugin;

extern stropt StringOptions[NUM_OF_STRS];
extern intopt IntOptions[NUM_OF_INTS];

#endif