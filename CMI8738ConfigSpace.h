/*
 * CM8738 PCI Configuration spaces (audio) definition
 */
#ifndef __CMI8738_CONFIG_SPACE__
#define __CMI8738_CONFIG_SPACE__

#define CM_CS_VENDOR_ID             0x00
#define CM_CS_DEVICE_ID             0x02
#define CM_CS_COMMAND               0x04
#define CM_CS_STATUS                0x06
#define CM_CS_REVISION_ID           0x08
#define CM_CS_AUDIO_DEVICE          0x09
#define CM_CS_CACHE_LINE_SIZE       0x0C
#define CM_CS_LATENCY_TIMER         0x0D
#define CM_CS_HEADER_TYPE           0x0E
#define CM_CS_BIST                  0x0F
#define CM_CS_BAR_FIRST             0x10
#define CM_CS_BAR_SECOND            0x14
#define CM_CS_BAR_THIRD             0x18
#define CM_CS_BAR_FOURTH            0x1C
#define CM_CS_BAR_FIFTH             0x20
#define CM_CS_BAR_SIXTH             0x24
#define CM_CS_CARDBUS_CIS           0x28
#define CM_CS_SUBSYSTEM_VENDOR_ID   0x2C
#define CM_CS_SUBSYSTEM_VENDOR_ID   0x2E
#define CM_CS_EXPANSION_ROM_ADDR    0x30
#define CM_CS_CAPABILITY            0x34
// 38 is reserved
#define CM_CS_INT_LINE              0x3C
#define CM_CS_INT_PIN               0x3D
#define CM_CS_MIN_GRANT             0x3E
#define CM_CS_MAX_LATENCY           0x3F
#define CM_CS_POWER_MANAGEMENT      0x40

#endif  // __CMI8738_CONFIG_SPACE__