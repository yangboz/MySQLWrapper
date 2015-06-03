/*
 * MySqlCpp.h
 *
 *  Created on: Jun 3, 2015
 *      Author: yangboz
 */

#ifndef MYSQLCPP_H_
#define MYSQLCPP_H_

//
#define IF_MYSQL_SERVER "tcp://192.168.2.2:3306"
#define IF_MYSQL_USER "root"
#define IF_MYSQL_PWD "ytlf123456"
#define IF_MYSQL_DB "test"

/*
  Include directly the different
  headers from cppconn/ and mysql_driver.h + mysql_util.h
  (and mysql_connection.h). This will reduce your build time!
*/
#include <mysql/mysql.h>
#include "mysql_connection.h"
/* MySQL Connector/C++ specific headers */
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include <stdio.h>
using namespace std;

class MySqlCpp {
private:
	// ...
	sql::Driver *driver;
	sql::Connection *con;
	sql::Statement *stmt;
	sql::ResultSet *res;
public:
	MySqlCpp();
	virtual ~MySqlCpp();
	void connect();
	void disconnect();
	void simpleSqlQuery();
};
 /* namespace MySqlCpp */

#endif /* MYSQLCPP_H_ */
