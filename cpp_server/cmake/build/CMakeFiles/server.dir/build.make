# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/admin1/work/cpp_server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/admin1/work/cpp_server/cmake/build

# Include any dependencies generated for this target.
include CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server.dir/flags.make

CMakeFiles/server.dir/work.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/work.cpp.o: ../../work.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/admin1/work/cpp_server/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server.dir/work.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/work.cpp.o -c /home/admin1/work/cpp_server/work.cpp

CMakeFiles/server.dir/work.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/work.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/admin1/work/cpp_server/work.cpp > CMakeFiles/server.dir/work.cpp.i

CMakeFiles/server.dir/work.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/work.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/admin1/work/cpp_server/work.cpp -o CMakeFiles/server.dir/work.cpp.s

# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/work.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

server: CMakeFiles/server.dir/work.cpp.o
server: CMakeFiles/server.dir/build.make
server: libhw_grpc_proto.a
server: /home/admin1/.local/lib/libabsl_flags_parse.a
server: /home/admin1/.local/lib/libgrpc++_reflection.a
server: /home/admin1/.local/lib/libgrpc++.a
server: /home/admin1/.local/lib/libprotobuf.a
server: /home/admin1/.local/lib/libgrpc.a
server: /home/admin1/.local/lib/libupb_json_lib.a
server: /home/admin1/.local/lib/libupb_textformat_lib.a
server: /home/admin1/.local/lib/libupb_message_lib.a
server: /home/admin1/.local/lib/libupb_base_lib.a
server: /home/admin1/.local/lib/libupb_mem_lib.a
server: /home/admin1/.local/lib/libutf8_range_lib.a
server: /home/admin1/.local/lib/libre2.a
server: /home/admin1/.local/lib/libz.a
server: /home/admin1/.local/lib/libcares.a
server: /home/admin1/.local/lib/libgpr.a
server: /home/admin1/.local/lib/libabsl_random_distributions.a
server: /home/admin1/.local/lib/libabsl_random_seed_sequences.a
server: /home/admin1/.local/lib/libabsl_random_internal_pool_urbg.a
server: /home/admin1/.local/lib/libabsl_random_internal_randen.a
server: /home/admin1/.local/lib/libabsl_random_internal_randen_hwaes.a
server: /home/admin1/.local/lib/libabsl_random_internal_randen_hwaes_impl.a
server: /home/admin1/.local/lib/libabsl_random_internal_randen_slow.a
server: /home/admin1/.local/lib/libabsl_random_internal_platform.a
server: /home/admin1/.local/lib/libabsl_random_internal_seed_material.a
server: /home/admin1/.local/lib/libabsl_random_seed_gen_exception.a
server: /home/admin1/.local/lib/libssl.a
server: /home/admin1/.local/lib/libcrypto.a
server: /home/admin1/.local/lib/libaddress_sorting.a
server: /home/admin1/.local/lib/libabsl_log_internal_check_op.a
server: /home/admin1/.local/lib/libabsl_leak_check.a
server: /home/admin1/.local/lib/libabsl_die_if_null.a
server: /home/admin1/.local/lib/libabsl_log_internal_conditions.a
server: /home/admin1/.local/lib/libabsl_log_internal_message.a
server: /home/admin1/.local/lib/libabsl_log_internal_nullguard.a
server: /home/admin1/.local/lib/libabsl_examine_stack.a
server: /home/admin1/.local/lib/libabsl_log_internal_format.a
server: /home/admin1/.local/lib/libabsl_log_internal_proto.a
server: /home/admin1/.local/lib/libabsl_log_internal_log_sink_set.a
server: /home/admin1/.local/lib/libabsl_log_sink.a
server: /home/admin1/.local/lib/libabsl_log_entry.a
server: /home/admin1/.local/lib/libabsl_log_initialize.a
server: /home/admin1/.local/lib/libabsl_log_globals.a
server: /home/admin1/.local/lib/libabsl_vlog_config_internal.a
server: /home/admin1/.local/lib/libabsl_log_internal_fnmatch.a
server: /home/admin1/.local/lib/libabsl_log_internal_globals.a
server: /home/admin1/.local/lib/libabsl_statusor.a
server: /home/admin1/.local/lib/libabsl_status.a
server: /home/admin1/.local/lib/libabsl_strerror.a
server: /home/admin1/.local/lib/libutf8_validity.a
server: /home/admin1/.local/lib/libabsl_flags_usage.a
server: /home/admin1/.local/lib/libabsl_flags_usage_internal.a
server: /home/admin1/.local/lib/libabsl_flags_internal.a
server: /home/admin1/.local/lib/libabsl_flags_marshalling.a
server: /home/admin1/.local/lib/libabsl_flags_reflection.a
server: /home/admin1/.local/lib/libabsl_flags_config.a
server: /home/admin1/.local/lib/libabsl_cord.a
server: /home/admin1/.local/lib/libabsl_cordz_info.a
server: /home/admin1/.local/lib/libabsl_cord_internal.a
server: /home/admin1/.local/lib/libabsl_cordz_functions.a
server: /home/admin1/.local/lib/libabsl_cordz_handle.a
server: /home/admin1/.local/lib/libabsl_crc_cord_state.a
server: /home/admin1/.local/lib/libabsl_crc32c.a
server: /home/admin1/.local/lib/libabsl_str_format_internal.a
server: /home/admin1/.local/lib/libabsl_crc_internal.a
server: /home/admin1/.local/lib/libabsl_crc_cpu_detect.a
server: /home/admin1/.local/lib/libabsl_raw_hash_set.a
server: /home/admin1/.local/lib/libabsl_hash.a
server: /home/admin1/.local/lib/libabsl_bad_variant_access.a
server: /home/admin1/.local/lib/libabsl_city.a
server: /home/admin1/.local/lib/libabsl_low_level_hash.a
server: /home/admin1/.local/lib/libabsl_hashtablez_sampler.a
server: /home/admin1/.local/lib/libabsl_exponential_biased.a
server: /home/admin1/.local/lib/libabsl_flags_private_handle_accessor.a
server: /home/admin1/.local/lib/libabsl_flags_commandlineflag.a
server: /home/admin1/.local/lib/libabsl_bad_optional_access.a
server: /home/admin1/.local/lib/libabsl_flags_commandlineflag_internal.a
server: /home/admin1/.local/lib/libabsl_flags_program_name.a
server: /home/admin1/.local/lib/libabsl_synchronization.a
server: /home/admin1/.local/lib/libabsl_graphcycles_internal.a
server: /home/admin1/.local/lib/libabsl_kernel_timeout_internal.a
server: /home/admin1/.local/lib/libabsl_time.a
server: /home/admin1/.local/lib/libabsl_civil_time.a
server: /home/admin1/.local/lib/libabsl_time_zone.a
server: /home/admin1/.local/lib/libabsl_stacktrace.a
server: /home/admin1/.local/lib/libabsl_symbolize.a
server: /home/admin1/.local/lib/libabsl_strings.a
server: /home/admin1/.local/lib/libabsl_strings_internal.a
server: /home/admin1/.local/lib/libabsl_string_view.a
server: /home/admin1/.local/lib/libabsl_int128.a
server: /home/admin1/.local/lib/libabsl_throw_delegate.a
server: /home/admin1/.local/lib/libabsl_malloc_internal.a
server: /home/admin1/.local/lib/libabsl_debugging_internal.a
server: /home/admin1/.local/lib/libabsl_demangle_internal.a
server: /home/admin1/.local/lib/libabsl_base.a
server: /home/admin1/.local/lib/libabsl_raw_logging_internal.a
server: /home/admin1/.local/lib/libabsl_log_severity.a
server: /home/admin1/.local/lib/libabsl_spinlock_wait.a
server: CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/admin1/work/cpp_server/cmake/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server.dir/build: server

.PHONY : CMakeFiles/server.dir/build

CMakeFiles/server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server.dir/clean

CMakeFiles/server.dir/depend:
	cd /home/admin1/work/cpp_server/cmake/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/admin1/work/cpp_server /home/admin1/work/cpp_server /home/admin1/work/cpp_server/cmake/build /home/admin1/work/cpp_server/cmake/build /home/admin1/work/cpp_server/cmake/build/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/server.dir/depend

