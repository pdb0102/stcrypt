//================================================================================================================================================
// FILE: ca_cert_db_if.h
// (c) GIE 2011-02-09  20:00
//
//================================================================================================================================================
#ifndef H_GUARD_CA_CERT_DB_IF_2011_02_09_20_00
#define H_GUARD_CA_CERT_DB_IF_2011_02_09_20_00
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include <boost/shared_ptr.hpp>
#include <boost/filesystem/path.hpp>
//================================================================================================================================================
namespace toy_ca {


	struct ca_cert_db 	{

		virtual ~ca_cert_db(){};

	};

	boost::shared_ptr<ca_cert_db> initialize_ca_cert_db(boost::filesystem::wpath const& db_root);

}
//================================================================================================================================================
#endif
//================================================================================================================================================