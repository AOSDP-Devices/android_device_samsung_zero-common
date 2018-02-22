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

#ifndef EXYNOS5_POWER_HAL_LOG_H_INCLUDED
#define EXYNOS5_POWER_HAL_LOG_H_INCLUDED

#define LOG_TAG "power.exynos5"

#define LOG_NDEBUG 0

#include <utils/Log.h>

#if LOG_NDEBUG
  #define ALOGDD  ALOGD
#else
  #define ALOGDD(...)
#endif

#define ALOGI_HINT(hint)	ALOGI("%s: hint(" hint ", %d, %llu)", __func__, value, (unsigned long long)data);
#define ALOGDD_HINT(hint)	ALOGDD("%s: hint(" hint ", %d, %llu)", __func__, value, (unsigned long long)data);

#endif // EXYNOS5_POWER_HAL_LOG_H_INCLUDED
