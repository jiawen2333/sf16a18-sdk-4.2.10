#
# SPDX-License-Identifier:	GPL-2.0+
#

dtb-$(CONFIG_TARGET_AP121) += ap121.dtb
dtb-$(CONFIG_TARGET_AP143) += ap143.dtb
dtb-$(CONFIG_TARGET_MALTA) += mti,malta.dtb
dtb-$(CONFIG_TARGET_PIC32MZDASK) += pic32mzda_sk.dtb
dtb-$(CONFIG_BOARD_TPLINK_WDR4300) += tplink_wdr4300.dtb
dtb-$(CONFIG_SOC_SFA18_MPW0) += sfa18_mpw0.dtb
dtb-$(CONFIG_SOC_SFA18_MPW1) += sfa18_mpw1.dtb
dtb-$(CONFIG_TARGET_SF19A28_FPGA) += sf19a28_fullmask_fpga.dtb
ifeq ($(CONFIG_SPI_NAND), y)
dtb-$(CONFIG_SOC_SFA18_FULLMASK) += sfa18_fullmask_nand.dtb
else
dtb-$(CONFIG_SOC_SFA18_FULLMASK) += sfa18_fullmask.dtb
endif

targets += $(dtb-y)

# Add any required device tree compiler flags here
DTC_FLAGS +=

PHONY += dtbs
dtbs: $(addprefix $(obj)/, $(dtb-y))
	@:

clean-files := *.dtb
