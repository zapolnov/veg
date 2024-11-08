include prorab.mk
include prorab-test.mk

this_name := tests

this_srcs += $(call prorab-src-dir, src)

$(eval $(call prorab-config, ../../config))

this_ldlibs += ../../src/out/$(c)/libveg$(dot_so) -lutki -ltst -lrasterimage

this_no_install := true

$(eval $(prorab-build-app))

this_test_cmd := $(prorab_this_name) --junit-out=out/$(c)/junit.xml
this_test_deps := $(prorab_this_name)
this_test_ld_path := ../../src/out/$(c)
$(eval $(prorab-test))

$(eval $(call prorab-include, ../../src/makefile))
