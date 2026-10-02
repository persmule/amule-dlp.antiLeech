/**
 * Author:	persmule <persmule@hardenedlinux.org>
 * License:	GNU GPL
 */

#ifndef FAKE_ATLSTR_H
#define FAKE_ATLSTR_H

/*
 * A fake atlstr.h introduced to tolerate M$WIN quirks
 * in antiLeech.cpp (from M$WIN projects like xtreme mod
 * or specialdlp) and handle conditional compiling, in
 * order to reduce direct modifications to it as much as
 * possible.
 */

#define SPECIAL_DLP_VERSION
#define SPECIAL_DLP_ADVANCED
#include <regex>
#define SDC_ALL_VERYCD
#define DLPVERSION	DLPVersion
#define __declspec(var)	CantiLeech::

#endif
