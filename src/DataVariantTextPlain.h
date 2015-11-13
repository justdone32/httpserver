﻿#pragma once

#include "DataVariantAbstract.h"

namespace HttpServer
{
	class DataVariantTextPlain: public DataVariantAbstract
	{
	public:
		DataVariantTextPlain();

	public:
		virtual bool parse
		(
			const Socket &,
			std::string &,
			const size_t,
			std::unordered_map<std::string, std::string> &contentParams,
			struct request_parameters &rp
		) override;
	};
};