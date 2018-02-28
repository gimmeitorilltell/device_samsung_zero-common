#
# Copyright (C) 2018 TeamNexus
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

LOCAL_PATH := $(call my-dir)

#
# power-HAL
#
include $(CLEAR_VARS)

LOCAL_MODULE               := android.hardware.power@1.0-service.zero
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_MODULE_TAGS          := optional
LOCAL_PROPRIETARY_MODULE   := true

LOCAL_INIT_RC := android.hardware.power@1.0-service.zero.rc

LOCAL_SRC_FILES := \
	Service.cpp \
	Power.cpp \
	Profiles.cpp \
	Utils.cpp

LOCAL_SHARED_LIBRARIES := \
	libcutils \
	libhardware \
	liblog \
	libpower-config

LOCAL_MODULE               := power.$(TARGET_BOARD_PLATFORM)
LOCAL_MODULE_RELATIVE_PATH := hw
LOCAL_MODULE_TAGS          := optional
LOCAL_CFLAGS               := -Wall -Werror -Wno-unused-parameter -Wno-unused-function
LOCAL_PROPRIETARY_MODULE   := true

include $(BUILD_SHARED_LIBRARY)

#
# power-configuration library
#
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	config.cpp \
	utils.cpp

LOCAL_C_INCLUDES += system/core/base/include/

LOCAL_SHARED_LIBRARIES := \
	libbase \
	libcutils \
	liblog

LOCAL_MODULE             := libpower-config
LOCAL_MODULE_TAGS        := optional
LOCAL_CFLAGS             := -Wall -Werror -Wno-unused-parameter -Wno-unused-function
LOCAL_PROPRIETARY_MODULE := true

include $(BUILD_SHARED_LIBRARY)
