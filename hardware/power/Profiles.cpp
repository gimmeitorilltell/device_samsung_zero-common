/*
 * Copyright (C) 2018 TeamNexus
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "zero-power-profiles"
#define LOG_NDEBUG 0

#include <log/log.h>

#include "Power.h"
#include "Profiles.h"

namespace android {
namespace hardware {
namespace power {
namespace V1_0 {
namespace implementation {

const SecPowerProfile* Profiles::getProfileData(SecPowerProfiles profile) {
	switch_uint32_t (profile)
	{
		case_uint32_t (SecPowerProfiles::SCREEN_OFF):
		{
			ALOGV("%s: returning kPowerProfileScreenOff", __func__);
			return &kPowerProfileScreenOff;
		}
		case_uint32_t (SecPowerProfiles::POWER_SAVE):
		{
			ALOGV("%s: returning kPowerProfilePowerSave", __func__);
			return &kPowerProfilePowerSave;
		}
		case_uint32_t (SecPowerProfiles::BIAS_POWER_SAVE):
		{
			ALOGV("%s: returning kPowerProfileBiasPowerSave", __func__);
			return &kPowerProfileBiasPowerSave;
		}
		case_uint32_t (SecPowerProfiles::BALANCED):
		{
			ALOGV("%s: returning kPowerProfileBalanced", __func__);
			return &kPowerProfileBalanced;
		}
		case_uint32_t (SecPowerProfiles::BIAS_PERFORMANCE):
		{
			ALOGV("%s: returning kPowerProfileBiasPerformance", __func__);
			return &kPowerProfileBiasPerformance;
		}
		case_uint32_t (SecPowerProfiles::HIGH_PERFORMANCE):
		{
			ALOGV("%s: returning kPowerProfileHighPerformance", __func__);
			return &kPowerProfileHighPerformance;
		}
	}
	return nullptr;
}

/***********
 * ROFILE_SCREEN_OFF
 */
const SecPowerProfile Profiles::kPowerProfileScreenOff = {
	.cpu = {
		.apollo = {
			.governor = "nexus",
			.freq_min = 200000,
			.freq_max = 400000,
			.freq_hispeed = 200000,
			.nexus = {
				.lpr_ratio = 150,
				.lpr_down_elevation = 1,
				.lpr_up_elevation = 1,
			},
			.nexus = {
				.down_load = 50,
				.down_step = 2,
				.down_lts_ratio = 0,
				.down_lts_elev = 0,

				.up_load = 60,
				.up_step = 1,
				.up_lts_ratio = 0,
				.up_lts_elev = 0,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = false,
			.sb_down_thres = 150,
			.sb_up_thres = 400,
			.active_down_migration = true,
			.aggressive_up_migration = false,
		},
		.gpu = {
			.min_lock = 100,
			.max_lock = 100,
		},
		.input = {
			.booster = false,
			.booster_table = "0 0 0 0 0 0"
		},
		.thermal = {
			.hotplugging = false,
			.ipa_control_temp = 35,
		},
		.kernel = {
			.power_efficient_workqueue = true,
		},
	},

/***********
 * PROFILE_POWER_SAVE
 */
const SecPowerProfile Profiles::kPowerProfilePowerSave = {
	.cpu = {
		.apollo = {
			.governor = "nexus",
			.freq_min = 200000,
			.freq_hispeed = 700000,
			.freq_max = 1500000,
			.nexus = {
				.lpr_ratio = 150,
				.lpr_down_elevation = 1,
				.lpr_up_elevation = 1,
			},
			.nexus = {
				.down_load = 40,
				.down_step = 2,
				.down_lts_ratio = 150,
				.down_lts_elev = 1,

				.up_load = 50,
				.up_step = 1,
				.up_lts_ratio = 150,
				.up_lts_elev = 1,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = false,
			.sb_down_thres = 150,
			.sb_up_thres = 400,
			.active_down_migration = true,
			.aggressive_up_migration = false,
		},
		.gpu = {
			.min_lock = 100,
			.max_lock = 544,
		},
		.input = {
			.booster = true,
			.booster_table = "300 0 400000 0 0 0"
		},
		.thermal = {
			.hotplugging = false,
			.ipa_control_temp = 45,
		},
		.kernel = {
			.power_efficient_workqueue = true,
		},
	},

/***********
 * PROFILE_BIAS_POWER_SAVE
 */
const SecPowerProfile Profiles::kPowerProfileBiasPowerSave = {
	.cpu = {
		.apollo = {
			.governor = "nexus",
			.freq_min = 300000,
			.freq_max = 1500000,
			.freq_hispeed = 800000,
			.nexus = {
				.lpr_ratio = 125,
				.lpr_down_elevation = 1,
				.lpr_up_elevation = 1,
			},
			.nexus = {
				.down_load = 40,
				.down_step = 1,
				.down_lts_ratio = 125,
				.down_lts_elev = 1,

				.up_load = 50,
				.up_step = 1,
				.up_lts_ratio = 125,
				.up_lts_elev = 2,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = true,
			.sb_down_thres = 125,
			.sb_up_thres = 175,
			.active_down_migration = true,
			.aggressive_up_migration = false,
		},
		.gpu = {
			.min_lock = 350,
			.max_lock = 700,
		},
		.input = {
			.booster = true,
			.booster_table = "300 0 800000 0 0 0"
		},
		.thermal = {
			.hotplugging = false,
			.ipa_control_temp = 65,
		},
		.kernel = {
			.power_efficient_workqueue = true,
		},
	},

/***********
 * PROFILE_BALANCED
 */
const SecPowerProfile Profiles::kPowerProfileBalanced = {
	.cpu = {
		.apollo = {
			.governor = "interactive",
			.freq_min = 400000,
			.freq_max = 1500000,
			.freq_hispeed = 900000,
			.interactive = {
				.above_hispeed_delay = "19000",
				.go_hispeed_load = 85,
				.min_sample_time = 40000,
				.target_loads = "75",
				.timer_rate = 20000,
				.timer_slack = 20000,
			},
			.nexus = {
				.down_load = 20,
				.down_step = 1,
				.down_lts_ratio = 100,
				.down_lts_elev = 2,

				.up_load = 30,
				.up_step = 3,
				.up_lts_ratio = 100,
				.up_lts_elev = 4,
			},
		},
		.hmp = {
			.boost = true,
			.semiboost = false,
			.sb_down_thres = 75,
			.sb_up_thres = 125,
			.active_down_migration = false,
			.aggressive_up_migration = true,
		},
		.gpu = {
			.min_lock = 600,
			.max_lock = 772,
		},
		.input = {
			.booster = true,
			.booster_table = "300 0 1200000 0 0 0"
		},
		.thermal = {
			.hotplugging = false,
			.ipa_control_temp = 75,
		},
		.kernel = {
			.power_efficient_workqueue = false,
		},
	},

/***********
 * PROFILE_BIAS_PERFORMANCE
 */
const SecPowerProfile Profiles::kPowerProfileBiasPerformance = {
	.cpu = {
		.apollo = {
			.governor = "interactive",
			.freq_min = 600000,
			.freq_max = 1500000,
			.freq_hispeed = 1200000,
			.interactive = {
				.above_hispeed_delay = "19000",
				.go_hispeed_load = 85,
				.min_sample_time = 40000,
				.target_loads = "75",
				.timer_rate = 20000,
				.timer_slack = 20000,
			},
			.nexus = {
				.down_load = 35,
				.down_step = 1,
				.down_lts_ratio = 135,
				.down_lts_elev = 1,

				.up_load = 45,
				.up_step = 1,
				.up_lts_ratio = 135,
				.up_lts_elev = 1,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = false,
			.sb_down_thres = 150,
			.sb_up_thres = 400,
			.active_down_migration = true,
			.aggressive_up_migration = false,
		},
		.gpu = {
			.min_lock = 266,
			.max_lock = 600,
		},
		.input = {
			.booster = true,
			.booster_table = "300 0 600000 0 0 0"
		},
		.thermal = {
			.hotplugging = false,
			.ipa_control_temp = 55,
		},
		.kernel = {
			.power_efficient_workqueue = true,
		},
	},

/***********
 * PROFILE_HIGH_PERFORMANCE
 */
const SecPowerProfile Profiles::kPowerProfileHighPerformance = {
	.cpu = {
		.apollo = {
			.governor = "interactive",
			.freq_min = 800000,
			.freq_max = 1500000,
			.freq_hispeed = 1500000,
			.interactive = {
				.above_hispeed_delay = "19000",
				.go_hispeed_load = 85,
				.min_sample_time = 40000,
				.target_loads = "75",
				.timer_rate = 20000,
				.timer_slack = 20000,
			},
			.cl1 = {
				.freq_max = 2200000,
				.freq_min = 600000,
			},
			.nexus = {
				.down_load = 30,
				.down_step = 1,
				.down_lts_ratio = 115,
				.down_lts_elev = 1,

				.up_load = 40,
				.up_step = 2,
				.up_lts_ratio = 115,
				.up_lts_elev = 3,
			},
		},
		.hmp = {
			.boost = false,
			.semiboost = true,
			.sb_down_thres = 75,
			.sb_up_thres = 125,
			.active_down_migration = false,
			.aggressive_up_migration = true,
		},
		.gpu = {
			.min_lock = 544,
			.max_lock = 772,
		},
		.input = {
			.booster = true,
			.booster_table = "300 0 1000000 0 0 0"
		},
		.thermal = {
			.hotplugging = false,
			.ipa_control_temp = 70,
		},
		.kernel = {
			.power_efficient_workqueue = false,
		},
	},

};

}  // namespace implementation
}  // namespace V1_0
}  // namespace power
}  // namespace hardware
}  // namespace android
