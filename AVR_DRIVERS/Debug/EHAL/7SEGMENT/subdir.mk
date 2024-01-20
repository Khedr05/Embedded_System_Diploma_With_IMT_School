################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../EHAL/7SEGMENT/7SEGMENT_Prog.c 

OBJS += \
./EHAL/7SEGMENT/7SEGMENT_Prog.o 

C_DEPS += \
./EHAL/7SEGMENT/7SEGMENT_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
EHAL/7SEGMENT/%.o: ../EHAL/7SEGMENT/%.c EHAL/7SEGMENT/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


