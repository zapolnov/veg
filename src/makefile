include prorab.mk
include prorab-license.mk
include prorab-clang-format.mk
include prorab-install-dbgsrc.mk

this_name := veg

this_soname := $(shell cat $(d)soname.txt)

this_srcs := $(call prorab-src-dir,.)

$(eval $(call prorab-config, ../config))

ifeq ($(this_veg_backend),agg)
    # NOTE: there is no pkg-config in conan environment, so do not use pkg-config here
    # but specify the linked library directly
    this_ldlibs += -lantigrain
else ifeq ($(this_veg_backend),cairo)
    ifeq ($(os),windows)
        this_cxxflags += `pkg-config --cflags cairo`
    endif
    this_ldlibs += `pkg-config --libs cairo`
endif

this_ldlibs += -lutki -lstdc++

$(eval $(prorab-build-lib))

this_src_dir := $(this_name)
this_license_file := ../LICENSE
$(eval $(prorab-license))

$(eval $(prorab-clang-format))

$(eval $(prorab-install-dbgsrc))
