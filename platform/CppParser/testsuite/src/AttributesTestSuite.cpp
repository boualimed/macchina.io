//
// AttributesTestSuite.cpp
//
// $Id: //poco/1.3/CppParser/testsuite/src/AttributesTestSuite.cpp#1 $
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#include "AttributesTestSuite.h"
#include "AttributesParserTest.h"


CppUnit::Test* AttributesTestSuite::suite()
{
	CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("CppParserTestSuite");

	pSuite->addTest(AttributesParserTest::suite());

	return pSuite;
}
