CPPFLAGS += -DDEBUG=1 -I $(TA_DEV_KIT_DIR)/host_include -include conf.h 
global-incdirs-y += include
global-incdirs-y += src
subdirs-y += src
