#pragma once

#include <chrono>

using nazhigai = std::chrono::duration<long, std::ratio<24 * 60, 1>>;
using vinazhigai = std::chrono::duration<long, std::ratio_divide<nazhigai::period, std::ratio<60>>>;
