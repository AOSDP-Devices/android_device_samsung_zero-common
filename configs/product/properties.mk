#
# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017 TeamNexus
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

###############################
# - by TeamNexus and former maintainers
# - copied from https://androidforums.com/threads/build-prop-tweaks-edited.582603/
# - copied from https://killertricks.com/build-prop-tweaks-for-android-devices/

###############################
# Common
PRODUCT_PROPERTY_OVERRIDES += \
    ro.chipname=exynos7420 \
    ro.nfc.sec_hal=true \
    ro.sf.lcd_density=640 \
	ro.sys.sdcardfs=1 \
    af.fast_track_multiplier=1 \
    audio_hal.force_voice_config=wide \
    wifi.interface=wlan0

###############################
# Dalvik
PRODUCT_PROPERTY_OVERRIDES += \
    dalvik.vm.heapstartsize=8m \
    dalvik.vm.heapgrowthlimit=288m \
    dalvik.vm.heapsize=768m \
    dalvik.vm.heaptargetutilization=0.75 \
    dalvik.vm.heapminfree=2m \
    dalvik.vm.heapmaxfree=8m

###############################
# GPU
PRODUCT_PROPERTY_OVERRIDES += \
	debug.composition.type=dyn \
	ro.opengles.version=196610 \
	video.accelerate.hw=1 \
	debug.egl.profiler=1
	
ifneq ($(NEXUS_VERSION),)

###############################
# NexusOS
PRODUCT_PROPERTY_OVERRIDES += \
	debug.hwc.max_hw_overlays=1 \
	debug.sf.hw=0 \
	persist.sys.ui.hw=0 \
	debug.egl.hw=0

else

###############################
# ResurrectionRemix/AOKP
PRODUCT_PROPERTY_OVERRIDES += \
	debug.hwc.max_hw_overlays=0 \
	debug.sf.hw=1 \
	persist.sys.ui.hw=1 \
	debug.egl.hw=1

endif

###############################
# hwui
PRODUCT_PROPERTY_OVERRIDES += \
	ro.hwui.use_gpu_pixel_buffers=true \
	ro.hwui.texture_cache_size=176 \
	ro.hwui.layer_cache_size=106 \
	ro.hwui.path_cache_size=64 \
	ro.hwui.shape_cache_size=16 \
	ro.hwui.gradient_cache_size=8 \
	ro.hwui.drop_shadow_cache_size=24 \
	ro.hwui.r_buffer_cache_size=24 \
	ro.hwui.text_small_cache_width=4096 \
	ro.hwui.text_small_cache_height=4096 \
	ro.hwui.text_large_cache_width=8192 \
	ro.hwui.text_large_cache_height=8192

###############################
# Networking
PRODUCT_PROPERTY_OVERRIDES += \
	net.tcp.buffersize.default=4096,87380,256960, 4096, 16384,256960 \
	net.tcp.buffersize.wifi=4096,87380,256960,409 6,163 84,256960 \
	net.tcp.buffersize.umts=4096,8 7380,256960,4096,163 84,256960 \
	net.tcp.buffersize.gprs=4096,8 7380,256960,4096,163 84,256960 \
	net.tcp.buffersize.edge=4096,8 7380,256960,4096,163 84,256960

###############################
# OTA
PRODUCT_PROPERTY_OVERRIDES += \
	ro.nexus.otaname=zero

###############################
# Performance += \
PRODUCT_PROPERTY_OVERRIDES += \
	debug.performance.tuning=1

###############################
# Power-Management
PRODUCT_PROPERTY_OVERRIDES += \
	pm.sleep_mode=1

###############################
# RIL
PRODUCT_PROPERTY_OVERRIDES += \
	ro.ril.disable.power.collapse=1 \

###############################
# Stagefright
PRODUCT_PROPERTY_OVERRIDES += \
	media.stagefright.enable-player=true \
	media.stagefright.enable-meta=true \
	media.stagefright.enable-scan=true \
	media.stagefright.enable-http=true \
	media.stagefright.enable-rtsp=true \
	media.stagefright.enable-record=false

###############################
# Surface
PRODUCT_PROPERTY_OVERRIDES += \
	persist.sys.scrollingcache=4 \
	persist.sys.purgeable_assets=1 \
	ro.compcache.default=18 \
	ro.max.fling_velocity=12000 \
	ro.min.fling_velocity=8000

###############################
# Telephony
PRODUCT_PROPERTY_OVERRIDES += \
	ro.telephony.call_ring.delay=0 \
	ring.delay=0

###############################
# Window-Manager
PRODUCT_PROPERTY_OVERRIDES += \
	windowsmgr.max_events_per_sec=90
