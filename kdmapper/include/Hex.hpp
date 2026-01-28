#pragma once

#include <cstdint>
#include <vector>

namespace embedded_driver
{

	static constexpr uint8_t g_embedded_driver_data[] = {
		0x0 // put your driver here
	};

	static constexpr size_t g_embedded_driver_size = sizeof(g_embedded_driver_data);

	inline std::vector<uint8_t> GetEmbeddedDriver()
	{
		return std::vector<uint8_t>(
			g_embedded_driver_data,
			g_embedded_driver_data + g_embedded_driver_size
		);
	}
}
