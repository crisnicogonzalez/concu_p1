# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /home/cristiangonzalez/Documents/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/cristiangonzalez/Documents/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cristiangonzalez/Documents/Facu/concurrentes/news-service

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cristiangonzalez/Documents/Facu/concurrentes/news-service

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/cristiangonzalez/Documents/clion-2019.1/bin/cmake/linux/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/home/cristiangonzalez/Documents/clion-2019.1/bin/cmake/linux/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cristiangonzalez/Documents/Facu/concurrentes/news-service/CMakeFiles /home/cristiangonzalez/Documents/Facu/concurrentes/news-service/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/cristiangonzalez/Documents/Facu/concurrentes/news-service/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named news_service

# Build rule for target.
news_service: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 news_service
.PHONY : news_service

# fast build rule for target.
news_service/fast:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/build
.PHONY : news_service/fast

Administrator.o: Administrator.cpp.o

.PHONY : Administrator.o

# target to build an object file
Administrator.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/Administrator.cpp.o
.PHONY : Administrator.cpp.o

Administrator.i: Administrator.cpp.i

.PHONY : Administrator.i

# target to preprocess a source file
Administrator.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/Administrator.cpp.i
.PHONY : Administrator.cpp.i

Administrator.s: Administrator.cpp.s

.PHONY : Administrator.s

# target to generate assembly for a file
Administrator.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/Administrator.cpp.s
.PHONY : Administrator.cpp.s

PortalInterface.o: PortalInterface.cpp.o

.PHONY : PortalInterface.o

# target to build an object file
PortalInterface.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/PortalInterface.cpp.o
.PHONY : PortalInterface.cpp.o

PortalInterface.i: PortalInterface.cpp.i

.PHONY : PortalInterface.i

# target to preprocess a source file
PortalInterface.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/PortalInterface.cpp.i
.PHONY : PortalInterface.cpp.i

PortalInterface.s: PortalInterface.cpp.s

.PHONY : PortalInterface.s

# target to generate assembly for a file
PortalInterface.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/PortalInterface.cpp.s
.PHONY : PortalInterface.cpp.s

client/Client.o: client/Client.cpp.o

.PHONY : client/Client.o

# target to build an object file
client/Client.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/Client.cpp.o
.PHONY : client/Client.cpp.o

client/Client.i: client/Client.cpp.i

.PHONY : client/Client.i

# target to preprocess a source file
client/Client.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/Client.cpp.i
.PHONY : client/Client.cpp.i

client/Client.s: client/Client.cpp.s

.PHONY : client/Client.s

# target to generate assembly for a file
client/Client.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/Client.cpp.s
.PHONY : client/Client.cpp.s

client/FinancialQuotationClient.o: client/FinancialQuotationClient.cpp.o

.PHONY : client/FinancialQuotationClient.o

# target to build an object file
client/FinancialQuotationClient.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/FinancialQuotationClient.cpp.o
.PHONY : client/FinancialQuotationClient.cpp.o

client/FinancialQuotationClient.i: client/FinancialQuotationClient.cpp.i

.PHONY : client/FinancialQuotationClient.i

# target to preprocess a source file
client/FinancialQuotationClient.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/FinancialQuotationClient.cpp.i
.PHONY : client/FinancialQuotationClient.cpp.i

client/FinancialQuotationClient.s: client/FinancialQuotationClient.cpp.s

.PHONY : client/FinancialQuotationClient.s

# target to generate assembly for a file
client/FinancialQuotationClient.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/FinancialQuotationClient.cpp.s
.PHONY : client/FinancialQuotationClient.cpp.s

client/PortalClient.o: client/PortalClient.cpp.o

.PHONY : client/PortalClient.o

# target to build an object file
client/PortalClient.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/PortalClient.cpp.o
.PHONY : client/PortalClient.cpp.o

client/PortalClient.i: client/PortalClient.cpp.i

.PHONY : client/PortalClient.i

# target to preprocess a source file
client/PortalClient.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/PortalClient.cpp.i
.PHONY : client/PortalClient.cpp.i

client/PortalClient.s: client/PortalClient.cpp.s

.PHONY : client/PortalClient.s

# target to generate assembly for a file
client/PortalClient.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/PortalClient.cpp.s
.PHONY : client/PortalClient.cpp.s

client/WeatherClient.o: client/WeatherClient.cpp.o

.PHONY : client/WeatherClient.o

# target to build an object file
client/WeatherClient.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/WeatherClient.cpp.o
.PHONY : client/WeatherClient.cpp.o

client/WeatherClient.i: client/WeatherClient.cpp.i

.PHONY : client/WeatherClient.i

# target to preprocess a source file
client/WeatherClient.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/WeatherClient.cpp.i
.PHONY : client/WeatherClient.cpp.i

client/WeatherClient.s: client/WeatherClient.cpp.s

.PHONY : client/WeatherClient.s

# target to generate assembly for a file
client/WeatherClient.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/client/WeatherClient.cpp.s
.PHONY : client/WeatherClient.cpp.s

dto/FinancialQuotationDTO.o: dto/FinancialQuotationDTO.cpp.o

.PHONY : dto/FinancialQuotationDTO.o

# target to build an object file
dto/FinancialQuotationDTO.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/FinancialQuotationDTO.cpp.o
.PHONY : dto/FinancialQuotationDTO.cpp.o

dto/FinancialQuotationDTO.i: dto/FinancialQuotationDTO.cpp.i

.PHONY : dto/FinancialQuotationDTO.i

# target to preprocess a source file
dto/FinancialQuotationDTO.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/FinancialQuotationDTO.cpp.i
.PHONY : dto/FinancialQuotationDTO.cpp.i

dto/FinancialQuotationDTO.s: dto/FinancialQuotationDTO.cpp.s

.PHONY : dto/FinancialQuotationDTO.s

# target to generate assembly for a file
dto/FinancialQuotationDTO.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/FinancialQuotationDTO.cpp.s
.PHONY : dto/FinancialQuotationDTO.cpp.s

dto/ResponseDTO.o: dto/ResponseDTO.cpp.o

.PHONY : dto/ResponseDTO.o

# target to build an object file
dto/ResponseDTO.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/ResponseDTO.cpp.o
.PHONY : dto/ResponseDTO.cpp.o

dto/ResponseDTO.i: dto/ResponseDTO.cpp.i

.PHONY : dto/ResponseDTO.i

# target to preprocess a source file
dto/ResponseDTO.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/ResponseDTO.cpp.i
.PHONY : dto/ResponseDTO.cpp.i

dto/ResponseDTO.s: dto/ResponseDTO.cpp.s

.PHONY : dto/ResponseDTO.s

# target to generate assembly for a file
dto/ResponseDTO.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/ResponseDTO.cpp.s
.PHONY : dto/ResponseDTO.cpp.s

dto/WeatherDTO.o: dto/WeatherDTO.cpp.o

.PHONY : dto/WeatherDTO.o

# target to build an object file
dto/WeatherDTO.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/WeatherDTO.cpp.o
.PHONY : dto/WeatherDTO.cpp.o

dto/WeatherDTO.i: dto/WeatherDTO.cpp.i

.PHONY : dto/WeatherDTO.i

# target to preprocess a source file
dto/WeatherDTO.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/WeatherDTO.cpp.i
.PHONY : dto/WeatherDTO.cpp.i

dto/WeatherDTO.s: dto/WeatherDTO.cpp.s

.PHONY : dto/WeatherDTO.s

# target to generate assembly for a file
dto/WeatherDTO.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/dto/WeatherDTO.cpp.s
.PHONY : dto/WeatherDTO.cpp.s

ipc/Fifo.o: ipc/Fifo.cpp.o

.PHONY : ipc/Fifo.o

# target to build an object file
ipc/Fifo.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/Fifo.cpp.o
.PHONY : ipc/Fifo.cpp.o

ipc/Fifo.i: ipc/Fifo.cpp.i

.PHONY : ipc/Fifo.i

# target to preprocess a source file
ipc/Fifo.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/Fifo.cpp.i
.PHONY : ipc/Fifo.cpp.i

ipc/Fifo.s: ipc/Fifo.cpp.s

.PHONY : ipc/Fifo.s

# target to generate assembly for a file
ipc/Fifo.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/Fifo.cpp.s
.PHONY : ipc/Fifo.cpp.s

ipc/FifoEscritura.o: ipc/FifoEscritura.cpp.o

.PHONY : ipc/FifoEscritura.o

# target to build an object file
ipc/FifoEscritura.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/FifoEscritura.cpp.o
.PHONY : ipc/FifoEscritura.cpp.o

ipc/FifoEscritura.i: ipc/FifoEscritura.cpp.i

.PHONY : ipc/FifoEscritura.i

# target to preprocess a source file
ipc/FifoEscritura.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/FifoEscritura.cpp.i
.PHONY : ipc/FifoEscritura.cpp.i

ipc/FifoEscritura.s: ipc/FifoEscritura.cpp.s

.PHONY : ipc/FifoEscritura.s

# target to generate assembly for a file
ipc/FifoEscritura.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/FifoEscritura.cpp.s
.PHONY : ipc/FifoEscritura.cpp.s

ipc/FifoLectura.o: ipc/FifoLectura.cpp.o

.PHONY : ipc/FifoLectura.o

# target to build an object file
ipc/FifoLectura.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/FifoLectura.cpp.o
.PHONY : ipc/FifoLectura.cpp.o

ipc/FifoLectura.i: ipc/FifoLectura.cpp.i

.PHONY : ipc/FifoLectura.i

# target to preprocess a source file
ipc/FifoLectura.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/FifoLectura.cpp.i
.PHONY : ipc/FifoLectura.cpp.i

ipc/FifoLectura.s: ipc/FifoLectura.cpp.s

.PHONY : ipc/FifoLectura.s

# target to generate assembly for a file
ipc/FifoLectura.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/ipc/FifoLectura.cpp.s
.PHONY : ipc/FifoLectura.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/main.cpp.s
.PHONY : main.cpp.s

request/HTTPMethod.o: request/HTTPMethod.cpp.o

.PHONY : request/HTTPMethod.o

# target to build an object file
request/HTTPMethod.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/HTTPMethod.cpp.o
.PHONY : request/HTTPMethod.cpp.o

request/HTTPMethod.i: request/HTTPMethod.cpp.i

.PHONY : request/HTTPMethod.i

# target to preprocess a source file
request/HTTPMethod.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/HTTPMethod.cpp.i
.PHONY : request/HTTPMethod.cpp.i

request/HTTPMethod.s: request/HTTPMethod.cpp.s

.PHONY : request/HTTPMethod.s

# target to generate assembly for a file
request/HTTPMethod.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/HTTPMethod.cpp.s
.PHONY : request/HTTPMethod.cpp.s

request/Request.o: request/Request.cpp.o

.PHONY : request/Request.o

# target to build an object file
request/Request.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/Request.cpp.o
.PHONY : request/Request.cpp.o

request/Request.i: request/Request.cpp.i

.PHONY : request/Request.i

# target to preprocess a source file
request/Request.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/Request.cpp.i
.PHONY : request/Request.cpp.i

request/Request.s: request/Request.cpp.s

.PHONY : request/Request.s

# target to generate assembly for a file
request/Request.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/Request.cpp.s
.PHONY : request/Request.cpp.s

request/RequestBuilder.o: request/RequestBuilder.cpp.o

.PHONY : request/RequestBuilder.o

# target to build an object file
request/RequestBuilder.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/RequestBuilder.cpp.o
.PHONY : request/RequestBuilder.cpp.o

request/RequestBuilder.i: request/RequestBuilder.cpp.i

.PHONY : request/RequestBuilder.i

# target to preprocess a source file
request/RequestBuilder.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/RequestBuilder.cpp.i
.PHONY : request/RequestBuilder.cpp.i

request/RequestBuilder.s: request/RequestBuilder.cpp.s

.PHONY : request/RequestBuilder.s

# target to generate assembly for a file
request/RequestBuilder.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/RequestBuilder.cpp.s
.PHONY : request/RequestBuilder.cpp.s

request/RequestSerializer.o: request/RequestSerializer.cpp.o

.PHONY : request/RequestSerializer.o

# target to build an object file
request/RequestSerializer.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/RequestSerializer.cpp.o
.PHONY : request/RequestSerializer.cpp.o

request/RequestSerializer.i: request/RequestSerializer.cpp.i

.PHONY : request/RequestSerializer.i

# target to preprocess a source file
request/RequestSerializer.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/RequestSerializer.cpp.i
.PHONY : request/RequestSerializer.cpp.i

request/RequestSerializer.s: request/RequestSerializer.cpp.s

.PHONY : request/RequestSerializer.s

# target to generate assembly for a file
request/RequestSerializer.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/RequestSerializer.cpp.s
.PHONY : request/RequestSerializer.cpp.s

request/Resource.o: request/Resource.cpp.o

.PHONY : request/Resource.o

# target to build an object file
request/Resource.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/Resource.cpp.o
.PHONY : request/Resource.cpp.o

request/Resource.i: request/Resource.cpp.i

.PHONY : request/Resource.i

# target to preprocess a source file
request/Resource.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/Resource.cpp.i
.PHONY : request/Resource.cpp.i

request/Resource.s: request/Resource.cpp.s

.PHONY : request/Resource.s

# target to generate assembly for a file
request/Resource.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/request/Resource.cpp.s
.PHONY : request/Resource.cpp.s

serializer/WeatherSerializer.o: serializer/WeatherSerializer.cpp.o

.PHONY : serializer/WeatherSerializer.o

# target to build an object file
serializer/WeatherSerializer.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/serializer/WeatherSerializer.cpp.o
.PHONY : serializer/WeatherSerializer.cpp.o

serializer/WeatherSerializer.i: serializer/WeatherSerializer.cpp.i

.PHONY : serializer/WeatherSerializer.i

# target to preprocess a source file
serializer/WeatherSerializer.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/serializer/WeatherSerializer.cpp.i
.PHONY : serializer/WeatherSerializer.cpp.i

serializer/WeatherSerializer.s: serializer/WeatherSerializer.cpp.s

.PHONY : serializer/WeatherSerializer.s

# target to generate assembly for a file
serializer/WeatherSerializer.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/serializer/WeatherSerializer.cpp.s
.PHONY : serializer/WeatherSerializer.cpp.s

service/FinancialQuotationService.o: service/FinancialQuotationService.cpp.o

.PHONY : service/FinancialQuotationService.o

# target to build an object file
service/FinancialQuotationService.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/FinancialQuotationService.cpp.o
.PHONY : service/FinancialQuotationService.cpp.o

service/FinancialQuotationService.i: service/FinancialQuotationService.cpp.i

.PHONY : service/FinancialQuotationService.i

# target to preprocess a source file
service/FinancialQuotationService.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/FinancialQuotationService.cpp.i
.PHONY : service/FinancialQuotationService.cpp.i

service/FinancialQuotationService.s: service/FinancialQuotationService.cpp.s

.PHONY : service/FinancialQuotationService.s

# target to generate assembly for a file
service/FinancialQuotationService.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/FinancialQuotationService.cpp.s
.PHONY : service/FinancialQuotationService.cpp.s

service/PortalService.o: service/PortalService.cpp.o

.PHONY : service/PortalService.o

# target to build an object file
service/PortalService.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/PortalService.cpp.o
.PHONY : service/PortalService.cpp.o

service/PortalService.i: service/PortalService.cpp.i

.PHONY : service/PortalService.i

# target to preprocess a source file
service/PortalService.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/PortalService.cpp.i
.PHONY : service/PortalService.cpp.i

service/PortalService.s: service/PortalService.cpp.s

.PHONY : service/PortalService.s

# target to generate assembly for a file
service/PortalService.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/PortalService.cpp.s
.PHONY : service/PortalService.cpp.s

service/Service.o: service/Service.cpp.o

.PHONY : service/Service.o

# target to build an object file
service/Service.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/Service.cpp.o
.PHONY : service/Service.cpp.o

service/Service.i: service/Service.cpp.i

.PHONY : service/Service.i

# target to preprocess a source file
service/Service.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/Service.cpp.i
.PHONY : service/Service.cpp.i

service/Service.s: service/Service.cpp.s

.PHONY : service/Service.s

# target to generate assembly for a file
service/Service.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/Service.cpp.s
.PHONY : service/Service.cpp.s

service/WeatherService.o: service/WeatherService.cpp.o

.PHONY : service/WeatherService.o

# target to build an object file
service/WeatherService.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/WeatherService.cpp.o
.PHONY : service/WeatherService.cpp.o

service/WeatherService.i: service/WeatherService.cpp.i

.PHONY : service/WeatherService.i

# target to preprocess a source file
service/WeatherService.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/WeatherService.cpp.i
.PHONY : service/WeatherService.cpp.i

service/WeatherService.s: service/WeatherService.cpp.s

.PHONY : service/WeatherService.s

# target to generate assembly for a file
service/WeatherService.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/service/WeatherService.cpp.s
.PHONY : service/WeatherService.cpp.s

utils/Constants.o: utils/Constants.cpp.o

.PHONY : utils/Constants.o

# target to build an object file
utils/Constants.cpp.o:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/utils/Constants.cpp.o
.PHONY : utils/Constants.cpp.o

utils/Constants.i: utils/Constants.cpp.i

.PHONY : utils/Constants.i

# target to preprocess a source file
utils/Constants.cpp.i:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/utils/Constants.cpp.i
.PHONY : utils/Constants.cpp.i

utils/Constants.s: utils/Constants.cpp.s

.PHONY : utils/Constants.s

# target to generate assembly for a file
utils/Constants.cpp.s:
	$(MAKE) -f CMakeFiles/news_service.dir/build.make CMakeFiles/news_service.dir/utils/Constants.cpp.s
.PHONY : utils/Constants.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... news_service"
	@echo "... edit_cache"
	@echo "... Administrator.o"
	@echo "... Administrator.i"
	@echo "... Administrator.s"
	@echo "... PortalInterface.o"
	@echo "... PortalInterface.i"
	@echo "... PortalInterface.s"
	@echo "... client/Client.o"
	@echo "... client/Client.i"
	@echo "... client/Client.s"
	@echo "... client/FinancialQuotationClient.o"
	@echo "... client/FinancialQuotationClient.i"
	@echo "... client/FinancialQuotationClient.s"
	@echo "... client/PortalClient.o"
	@echo "... client/PortalClient.i"
	@echo "... client/PortalClient.s"
	@echo "... client/WeatherClient.o"
	@echo "... client/WeatherClient.i"
	@echo "... client/WeatherClient.s"
	@echo "... dto/FinancialQuotationDTO.o"
	@echo "... dto/FinancialQuotationDTO.i"
	@echo "... dto/FinancialQuotationDTO.s"
	@echo "... dto/ResponseDTO.o"
	@echo "... dto/ResponseDTO.i"
	@echo "... dto/ResponseDTO.s"
	@echo "... dto/WeatherDTO.o"
	@echo "... dto/WeatherDTO.i"
	@echo "... dto/WeatherDTO.s"
	@echo "... ipc/Fifo.o"
	@echo "... ipc/Fifo.i"
	@echo "... ipc/Fifo.s"
	@echo "... ipc/FifoEscritura.o"
	@echo "... ipc/FifoEscritura.i"
	@echo "... ipc/FifoEscritura.s"
	@echo "... ipc/FifoLectura.o"
	@echo "... ipc/FifoLectura.i"
	@echo "... ipc/FifoLectura.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... request/HTTPMethod.o"
	@echo "... request/HTTPMethod.i"
	@echo "... request/HTTPMethod.s"
	@echo "... request/Request.o"
	@echo "... request/Request.i"
	@echo "... request/Request.s"
	@echo "... request/RequestBuilder.o"
	@echo "... request/RequestBuilder.i"
	@echo "... request/RequestBuilder.s"
	@echo "... request/RequestSerializer.o"
	@echo "... request/RequestSerializer.i"
	@echo "... request/RequestSerializer.s"
	@echo "... request/Resource.o"
	@echo "... request/Resource.i"
	@echo "... request/Resource.s"
	@echo "... serializer/WeatherSerializer.o"
	@echo "... serializer/WeatherSerializer.i"
	@echo "... serializer/WeatherSerializer.s"
	@echo "... service/FinancialQuotationService.o"
	@echo "... service/FinancialQuotationService.i"
	@echo "... service/FinancialQuotationService.s"
	@echo "... service/PortalService.o"
	@echo "... service/PortalService.i"
	@echo "... service/PortalService.s"
	@echo "... service/Service.o"
	@echo "... service/Service.i"
	@echo "... service/Service.s"
	@echo "... service/WeatherService.o"
	@echo "... service/WeatherService.i"
	@echo "... service/WeatherService.s"
	@echo "... utils/Constants.o"
	@echo "... utils/Constants.i"
	@echo "... utils/Constants.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
