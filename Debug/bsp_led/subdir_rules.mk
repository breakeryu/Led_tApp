################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
bsp_led/%.obj: ../bsp_led/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"E:/ProgramFiles(x86)/ti/ccs1250/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 --include_path="E:/ProgramFiles(x86)/ti/workspace_v12/Led_tApp/bsp_led" --include_path="E:/ProgramFiles(x86)/ti/ccs1250/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --include_path="C:/ti/c2000/C2000Ware_5_00_00_00/device_support/f2833x/headers/include" --include_path="C:/ti/c2000/C2000Ware_5_00_00_00/device_support/f2833x/common/include" --include_path="C:/ti/c2000/C2000Ware_5_00_00_00/libraries/math/IQmath/c28/include" --include_path="C:/ti/c2000/C2000Ware_5_00_00_00/libraries/math/FPUfastRTS/c28/include" --define=_DEBUG --define=LARGE_MODEL -g --diag_suppress=10063 --diag_warning=225 --issue_remarks --verbose_diagnostics --quiet --preproc_with_compile --preproc_dependency="bsp_led/$(basename $(<F)).d_raw" --obj_directory="bsp_led" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


