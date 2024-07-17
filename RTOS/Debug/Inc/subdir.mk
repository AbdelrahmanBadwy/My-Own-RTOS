################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/CortexMxOS_Porting.c \
../Inc/My_RTOS_FIFO.c \
../Inc/Schedular.c 

OBJS += \
./Inc/CortexMxOS_Porting.o \
./Inc/My_RTOS_FIFO.o \
./Inc/Schedular.o 

C_DEPS += \
./Inc/CortexMxOS_Porting.d \
./Inc/My_RTOS_FIFO.d \
./Inc/Schedular.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/CortexMxOS_Porting.o: ../Inc/CortexMxOS_Porting.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Inc/CortexMxOS_Porting.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Inc/My_RTOS_FIFO.o: ../Inc/My_RTOS_FIFO.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Inc/My_RTOS_FIFO.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Inc/Schedular.o: ../Inc/Schedular.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Inc/Schedular.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

