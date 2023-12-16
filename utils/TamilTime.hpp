#pragma once

#include <chrono>

using Nazhigai = std::chrono::duration<long, std::ratio<24 * 60, 1>>;
using Vinazhigai = std::chrono::duration<long, std::ratio_divide<Nazhigai::period, std::ratio<60>>>;
