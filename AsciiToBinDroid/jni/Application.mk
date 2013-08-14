APP_PROJECT_PATH := /Users/CresCoJeff/eclipse_workspace/AsciiToBinDroid
APP_STL := stlport_static
# define the list-all-files function to list all files under $1
# usage $(call list-all-files,<path>)
#
list-all-files = \
$(info "Files under $1:")\
$(foreach _file,$(wildcard $1/*),\
  $(info "> $(_file))\
)

$(call list-all-files,$(APP_PROJECT_PATH))
$(call list-all-files,$(APP_PROJECT_PATH)/jni)