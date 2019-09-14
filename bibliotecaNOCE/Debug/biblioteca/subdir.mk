################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../biblioteca/conexiones.c \
../biblioteca/paquetes.c \
../biblioteca/serializaciones.c 

OBJS += \
./biblioteca/conexiones.o \
./biblioteca/paquetes.o \
./biblioteca/serializaciones.o 

C_DEPS += \
./biblioteca/conexiones.d \
./biblioteca/paquetes.d \
./biblioteca/serializaciones.d 


# Each subdirectory must supply rules for building sources it contributes
biblioteca/%.o: ../biblioteca/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


