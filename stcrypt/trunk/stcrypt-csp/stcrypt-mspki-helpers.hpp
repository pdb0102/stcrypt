//================================================================================================================================================
// FILE: stcrypt-mspki-helpers.h
// (c) GIE 2010-04-22  17:54
//
//================================================================================================================================================
#ifndef H_GUARD_STCRYPT_MSPKI_HELPERS_2010_04_22_17_54
#define H_GUARD_STCRYPT_MSPKI_HELPERS_2010_04_22_17_54
//================================================================================================================================================
#pragma once
//================================================================================================================================================
#include "stcrypt-exceptions.hpp"

#include "boost/noncopyable.hpp"

#include <vector>
//================================================================================================================================================
namespace stcrypt { namespace mspki {

	namespace exception {
		struct conversion_failed : virtual stcrypt::exception::root {};
		struct str_to_name_failed : virtual conversion_failed {};
	}

	struct cert_name_blob_t : boost::noncopyable
	{
		CERT_NAME_BLOB		m_blob;
		std::vector<BYTE>	m_storage;
	};

	void cert_str_to_name(std::wstring const& cert_str, cert_name_blob_t& cert_name);

} }
//================================================================================================================================================
#endif
//================================================================================================================================================
