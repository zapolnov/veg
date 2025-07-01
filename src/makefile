include prorab.mk
include prorab-license.mk
include prorab-clang-format.mk
include prorab-install-dbgsrc.mk

$(eval $(call prorab-config, ../config))

this_src_dir := veg
this_name := $(this_src_dir)$(this_dbg)

this_soname := $(shell cat $(d)soname.txt)

this_srcs := $(call prorab-src-dir, $(this_src_dir))

ifeq ($(this__veg_backend),agg)
    # NOTE: there is no pkg-config in conan environment, so do not use pkg-config here
    # but specify the linked library directly
    this_ldlibs += -l antigrain
else ifeq ($(this__veg_backend),cairo)
    ifeq ($(os),windows)
        this_cxxflags += `pkg-config --cflags cairo`
    endif
    this_ldlibs += `pkg-config --libs cairo`
endif

this_ldlibs += -l utki$(this_dbg)

$(eval $(prorab-build-lib))

this_license_file := ../LICENSE
$(eval $(prorab-license))

$(eval $(prorab-clang-format))

$(eval $(prorab-install-dbgsrc))
