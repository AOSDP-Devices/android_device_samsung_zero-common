/*
 * Copyright (C) 2018 Lukas Berger <mail@lukasberger.at>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <string>

#ifndef EXYNOS5_POWER_HAL_PROFILES_INCLUDED
#define EXYNOS5_POWER_HAL_PROFILES_INCLUDED

using namespace std;

struct power_profile_cpucluster {

	unsigned int freq_min;
	unsigned int freq_max;

};

struct power_profile {

	struct {

		struct {

			unsigned int freq_min;
			unsigned int freq_max;

		} apollo;

		struct {

			unsigned int freq_min;
			unsigned int freq_max;

		} atlas;

		struct {

			struct {

				unsigned int lpr_ratio;

				unsigned int lpr_down_elev;
				unsigned int lpr_up_elev;

			} nexus;

		} cpugov;

	} cpu;

	struct {

		bool boost;
		bool semiboost;

	} hmp;

	struct {

		struct {

			unsigned int freq_min;
			unsigned int freq_max;

		} dvfs;

		struct {

			unsigned int freq;
			unsigned int load;

		} highspeed;

	} gpu;

	struct {

		bool pewq;

	} kernel;

} power_profiles_data[PROFILE_MAX_USABLE + 1] = {

	/***********
	 * PROFILE_SCREEN_OFF
	 */
	{
		.cpu = {
			.apollo = {
				.freq_min = 200000,
				.freq_max = 400000,
			},
			.atlas = {
				.freq_min = 200000,
				.freq_max = 400000,
			},
			.cpugov = {
				.nexus = {
					.lpr_ratio = 150,
					.lpr_down_elev = 1,
					.lpr_up_elev = 1,
				},
			},
		},
		.gpu = {
			.dvfs = {
				.freq_min = 100,
				.freq_max = 100,
			},
			.highspeed = {
				.freq = 100,
				.load = 100,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = false,
		},
		.kernel = {
			.pewq = true,
		},
	},

	/***********
	 * PROFILE_POWER_SAVE
	 */
	{
		.cpu = {
			.apollo = {
				.freq_min = 200000,
				.freq_max = 1500000,
			},
			.atlas = {
				.freq_min = 400000,
				.freq_max = 2100000,
			},
			.cpugov = {
				.nexus = {
					.lpr_ratio = 150,
					.lpr_down_elev = 1,
					.lpr_up_elev = 1,
				},
			},
		},
		.gpu = {
			.dvfs = {
				.freq_min = 160,
				.freq_max = 772,
			},
			.highspeed = {
				.freq = 772,
				.load = 95,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = false,
		},
		.kernel = {
			.pewq = true,
		},
	},

	/***********
	 * PROFILE_BALANCED
	 */
	{
		.cpu = {
			.apollo = {
				.freq_min = 400000,
				.freq_max = 1500000,
			},
			.atlas = {
				.freq_min = 800000,
				.freq_max = 2100000,
			},
			.cpugov = {
				.nexus = {
					.lpr_ratio = 125,
					.lpr_down_elev = 1,
					.lpr_up_elev = 2,
				},
			},
		},
		.gpu = {
			.dvfs = {
				.freq_min = 350,
				.freq_max = 772,
			},
			.highspeed = {
				.freq = 772,
				.load = 85,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = true,
		},
		.kernel = {
			.pewq = true,
		},
	},

	/***********
	 * PROFILE_HIGH_PERFORMANCE
	 */
	{
		.cpu = {
			.apollo = {
				.freq_min = 800000,
				.freq_max = 1500000,
			},
			.atlas = {
				.freq_min = 1000000,
				.freq_max = 2100000,
			},
			.cpugov = {
				.nexus = {
					.lpr_ratio = 100,
					.lpr_down_elev = 1,
					.lpr_up_elev = 3,
				},
			},
		},
		.gpu = {
			.dvfs = {
				.freq_min = 544,
				.freq_max = 772,
			},
			.highspeed = {
				.freq = 772,
				.load = 75,
			},
		},
		.hmp = {
			.boost = true,
			.semiboost = false,
		},
		.kernel = {
			.pewq = false,
		},
	},

	/***********
	 * PROFILE_BIAS_POWER_SAVE
	 */
	{
		.cpu = {
			.apollo = {
				.freq_min = 300000,
				.freq_max = 1500000,
			},
			.atlas = {
				.freq_min = 600000,
				.freq_max = 2100000,
			},
			.cpugov = {
				.nexus = {
					.lpr_ratio = 125,
					.lpr_down_elev = 1,
					.lpr_up_elev = 1,
				},
			},
		},
		.gpu = {
			.dvfs = {
				.freq_min = 266,
				.freq_max = 772,
			},
			.highspeed = {
				.freq = 772,
				.load = 80,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = true,
		},
		.kernel = {
			.pewq = true,
		},
	},

	/***********
	 * PROFILE_BIAS_PERFORMANCE
	 */
	{
		.cpu = {
			.apollo = {
				.freq_min = 600000,
				.freq_max = 1500000,
			},
			.atlas = {
				.freq_min = 1000000,
				.freq_max = 2100000,
			},
			.cpugov = {
				.nexus = {
					.lpr_ratio = 100,
					.lpr_down_elev = 1,
					.lpr_up_elev = 2,
				},
			},
		},
		.gpu = {
			.dvfs = {
				.freq_min = 450,
				.freq_max = 772,
			},
			.highspeed = {
				.freq = 772,
				.load = 90,
			},
		},
		.hmp = {
			.boost = true,
			.semiboost = false,
		},
		.kernel = {
			.pewq = false,
		},
	},

};

#endif // EXYNOS5_POWER_HAL_PROFILES_INCLUDED
