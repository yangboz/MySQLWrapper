/*
 * MySqlCpp.cpp
 *
 *  Created on: Jun 3, 2015
 *      Author: yangboz
 */

#include "MySqlCpp.h"

MySqlCpp::MySqlCpp() {
	// TODO Auto-generated constructor stub

}

MySqlCpp::~MySqlCpp() {
	// TODO Auto-generated destructor stub
}

void MySqlCpp::connect() {
	/* Create a connection */
	driver = get_driver_instance();
	con = driver->connect(IF_MYSQL_SERVER, IF_MYSQL_USER, IF_MYSQL_PWD);
	/* Connect to the MySQL test database */
	con->setSchema(IF_MYSQL_DB);
	stmt = con->createStatement();
}
void MySqlCpp::disconnect() {
	//MySql related.
	con->close();
	delete res;
	delete stmt;
	delete con;
}
void MySqlCpp::simpleSqlQuery() {
	char *sqlQuery = "SELECT * FROM users";
	printf("[MySqlCpp]->simple query:%s\n", sqlQuery);
	this->connect();
	//
	res = stmt->executeQuery(sqlQuery);
	while (res->next()) {
		// You can use either numeric offsets...
		 printf("[MySqlCpp]->getFetchSize():%d",res->getFetchSize());
	}
	this->disconnect();
}

/* namespace MySqlCpp */
