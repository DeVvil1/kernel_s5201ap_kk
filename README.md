Kernel Sources for Micromax A102
------

Chipset: *MT6572*

                LCD Driver used by Wiko Lenny: ili9806e_fwvga_dsi_vdo_txd

                LCD Driver used by Micromax A102: ili9806e_dsi_vdo_fwvga_txd_zaw1800

                LCM Driver which is taken as base: Wiko Lenny's


Build command:
------

                ./mk -o=TARGET_BUILD_VARIANT=user s5201ap n k

Status:
-------
* Kernel works (Boots) 
* Buggy LCM (Still too much work needed)
* Other drivers aren't added yet (i.e. touchscreen,alsps,etc.)
