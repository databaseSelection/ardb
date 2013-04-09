/*
 * leveldb.cpp
 *
 *  Created on: 2013-3-27
 *      Author: wqy
 */

#include "rddb.hpp"
#include "engine/leveldb_engine.hpp"
#include <string>
#include <iostream>
#include <glog/logging.h>
#include "test_case.cpp"

using namespace rddb;

int main(int argc, char** argv)
{
	google::InitGoogleLogging(argv[0]);
	LevelDBEngineFactory factory("/tmp/rddb/test");
	RDDB db(&factory);
	test_all(db);
	return 0;
}
