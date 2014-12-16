LOCAL_PATH := $(call my-dir)
MOAI_LIB_DIR := $(LOCAL_PATH)/../../../libmoai
MOAI_LIB_ROOT := $(MOAI_LIB_DIR)/$(TARGET_ARCH_ABI)
MOAI_MODULES := $(LOCAL_PATH)/MoaiModules.mk


include $(MOAI_MODULES)


MOAI_ANDROID_MODULES := $(MOAI_LIB_DIR)/modules/jni/moaiandroid.mk
MOAI_JNI_MODULES :=

include $(MOAI_ANDROID_MODULES)

MOAI_STATIC_LIBRARIES := moai-android-twitter


include $(CLEAR_VARS)


LOCAL_MODULE := moai
LOCAL_CFLAGS :=  -DDISABLE_IMPORTGL
LOCAL_LDLIBS := -llog -lGLESv1_CM -lGLESv2
LOCAL_STATIC_LIBRARIES := $(MOAI_STATIC_LIBRARIES) moai-android moai-chipmunk moai-http-client moai-luaext moai-box2d moai-untz moai-crypto moai-sim moai-util moai-core zlcore luaext luasql luacrypto luacurl luasocket luafilesystem liblua-static zlvfs contrib expat freetype png box2d zlib jpg  jansson untz vorbis ogg sqlite3 mongoose tinyxml tlsf curl ssl crypto cares chipmunk sfmt tess

# sfmt chipmunk curl ssl crypto tlsf tinyxml mongoose sqlite3 ogg vorbis untz jansson cares jpg zlib box2d png freetype expat contrib zlvfs liblua-static luafilesystem luasocket luacurl luacrypto luasql luaext zlcore  moai-core moai-util moai-sim moai-untz moai-box2d moai-luaext moai-http-client moai-chipmunk moai-android

LOCAL_SRC_PATH := $(LOCAL_PATH)
LOCAL_SRC_FILES := $(MOAI_JNI_MODULES)
LOCAL_SRC_FILES += jni.cpp
LOCAL_SRC_FILES += moai.cpp 
LOCAL_SRC_FILES += host-modules/aku_modules.cpp
LOCAL_SRC_FILES += host-modules/aku_modules_util.cpp
LOCAL_SRC_FILES += host-modules/aku_plugins.cpp	


LOCAL_C_INCLUDES := $(LOCAL_PATH) 
LOCAL_C_INCLUDES += $(MOAI_LIB_ROOT)/include  
LOCAL_C_INCLUDES += $(MOAI_LIB_ROOT)/include/config
LOCAL_C_INCLUDES += $(MOAI_LIB_ROOT)/include/lua
LOCAL_C_INCLUDES += $(MOAI_LIB_ROOT)/include/expat
LOCAL_C_INCLUDES += $(MOAI_LIB_ROOT)/include/tinyxml
LOCAL_C_INCLUDES += $(MOAI_LIB_ROOT)/include/freetype


include $(BUILD_SHARED_LIBRARY)


