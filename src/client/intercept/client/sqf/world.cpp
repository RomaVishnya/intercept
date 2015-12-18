#include "client\pointers.hpp"
#include "common_helpers.hpp"
#include "world.hpp"

namespace intercept {
	namespace sqf {
		namespace world {
			float world_size() {
				return sqf::__helpers::__retrieve_nular_number(client::__sqf::nular__worldsize__ret__scalar);
			}

			std::string world_name()
			{
				return game_value(host::functions.invoke_raw_nular(client::__sqf::nular__worldname__ret__string));
			}

			float wind_str() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__windstr__ret__scalar);
			}

			float wind_dir() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__winddir__ret__scalar);
			}

			vector3 wind() {
				return __helpers::__retrieve_nular_vector3(client::__sqf::nular__wind__ret__array);
			}

			float waves() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__waves__ret__scalar);
			}

			float time() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__time__ret__scalar);
			}

			float time_multiplier() {
				return __helpers::__retrieve_nular_number(client::__sqf::nular__timemultiplier__ret__scalar);
			}

			float date_to_number(game_date date_)
			{
				//game_value date_array({
				//	(date_.year),
				//	(date_.month),
				//	(date_.day),
				//	(date_.hour),
				//	(date_.minute)
				//});

				//return game_value(host::functions.invoke_raw_unary(client::__sqf::unary__datetonumber__array__ret__scalar, date_array));

				throw 713; // TODO reimplement day_to_number
			}
		}
	}
}