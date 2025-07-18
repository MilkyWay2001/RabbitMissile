#ifndef BMI088REG_H
#define BMI088REG_H

#define BMI088_ACCEL_CHIP_ID                    0x00
#define BMI088_ACCEL_CHIP_ID_VALUE              0x1E

#define BMI088_ACCEL_ERR_REG                    0x02
#define BMI088_ACCEL_CONFIG_ERROR_SHIFTS        0x02
#define BMI088_ACCEL_CONFIG_ERROR               (0x01 << BMI088_ACCEL_CONFIG_ERROR_SHIFTS)
#define BMI088_FATAL_ERROR_SHIFTS               0x00
#define BMI088_FATAL_ERROR                      (0x01 << BMI088_FATAL_ERROR_SHIFTS)

#define BMI088_ACCEL_STATUS                     0x03
#define BMI088_ACCEL_DRDY_SHIFTS                0x07
#define BMI088_ACCEL_DRDY                       (0x01 << BMI088_ACCEL_DRDY_SHIFTS)

#define BMI088_ACCEL_XOUT_L                     0x12
#define BMI088_ACCEL_XOUT_M                     0x13
#define BMI088_ACCEL_YOUT_L                     0x14
#define BMI088_ACCEL_YOUT_M                     0x15
#define BMI088_ACCEL_ZOUT_L                     0x16
#define BMI088_ACCEL_ZOUT_M                     0x17

#define BMI088_SENSORTIME_DATA_L                0x18
#define BMI088_SENSORTIME_DATA_M                0x19
#define BMI088_SENSORTIME_DATA_H                0x1A

#define BMI088_ACCEL_INT_STAT_1                 0x1D
#define BMI088_ACCEL_DRDY_INTERRUPT_SHIFTS      0x07
#define BMI088_ACCEL_DRDY_INTERRUPT             (0x01 << BMI088_ACCEL_DRDY_INTERRUPT_SHIFTS)

#define BMI088_TEMP_M                           0x22
#define BMI088_TEMP_L                           0x23

#define BMI088_ACCEL_CONFIG                     0x40
#define BMI088_ACCEL_CONFIG_MUST_SET            0x80
#define BMI088_ACCEL_BWP_SHIFTS                 0x04
#define BMI088_ACCEL_OSR4                       (0x00 << BMI088_ACCEL_BWP_SHIFTS)
#define BMI088_ACCEL_OSR2                       (0x01 << BMI088_ACCEL_BWP_SHIFTS)
#define BMI088_ACCEL_NORMAL                     (0x02 << BMI088_ACCEL_BWP_SHIFTS)

#define BMI088_ACCEL_ODR_SHIFTS                 0x00
#define BMI088_ACCEL_12_5_HZ                    (0x05 << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_25_HZ                      (0x06 << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_50_HZ                      (0x07 << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_100_HZ                     (0x08 << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_200_HZ                     (0x09 << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_400_HZ                     (0x0A << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_800_HZ                     (0x0B << BMI088_ACCEL_ODR_SHIFTS)
#define BMI088_ACCEL_1600_HZ                    (0x0C << BMI088_ACCEL_ODR_SHIFTS)

#define BMI088_ACCEL_RANGE                      0x41

#define BMI088_ACCEL_RANGE_SHIFTS               0x00
#define BMI088_ACCEL_RANGE_3G                   (0x00 << BMI088_ACCEL_RANGE_SHIFTS)
#define BMI088_ACCEL_RANGE_6G                   (0x01 << BMI088_ACCEL_RANGE_SHIFTS)
#define BMI088_ACCEL_RANGE_12G                  (0x02 << BMI088_ACCEL_RANGE_SHIFTS)
#define BMI088_ACCEL_RANGE_24G                  (0x03 << BMI088_ACCEL_RANGE_SHIFTS)

#define BMI088_INT1_IO_CTRL                     0x53
#define BMI088_ACCEL_INT1_IO_ENABLE_SHIFTS      0x03
#define BMI088_ACCEL_INT1_IO_ENABLE             (0x01 << BMI088_ACCEL_INT1_IO_ENABLE_SHIFTS)
#define BMI088_ACCEL_INT1_GPIO_MODE_SHIFTS      0x02
#define BMI088_ACCEL_INT1_GPIO_PP               (0x00 << BMI088_ACCEL_INT1_GPIO_MODE_SHIFTS)
#define BMI088_ACCEL_INT1_GPIO_OD               (0x01 << BMI088_ACCEL_INT1_GPIO_MODE_SHIFTS)
#define BMI088_ACCEL_INT1_GPIO_LVL_SHIFTS       0x01
#define BMI088_ACCEL_INT1_GPIO_LOW              (0x00 << BMI088_ACCEL_INT1_GPIO_LVL_SHIFTS)
#define BMI088_ACCEL_INT1_GPIO_HIGH             (0x01 << BMI088_ACCEL_INT1_GPIO_LVL_SHIFTS)

#define BMI088_INT2_IO_CTRL                     0x54
#define BMI088_ACCEL_INT2_IO_ENABLE_SHIFTS      0x03
#define BMI088_ACCEL_INT2_IO_ENABLE             (0x01 << BMI088_ACCEL_INT2_IO_ENABLE_SHIFTS)
#define BMI088_ACCEL_INT2_GPIO_MODE_SHIFTS      0x02
#define BMI088_ACCEL_INT2_GPIO_PP               (0x00 << BMI088_ACCEL_INT2_GPIO_MODE_SHIFTS)
#define BMI088_ACCEL_INT2_GPIO_OD               (0x01 << BMI088_ACCEL_INT2_GPIO_MODE_SHIFTS)
#define BMI088_ACCEL_INT2_GPIO_LVL_SHIFTS       0x01
#define BMI088_ACCEL_INT2_GPIO_LOW              (0x00 << BMI088_ACCEL_INT2_GPIO_LVL_SHIFTS)
#define BMI088_ACCEL_INT2_GPIO_HIGH             (0x01 << BMI088_ACCEL_INT2_GPIO_LVL_SHIFTS)

#define BMI088_INT_MAP_DATA                     0x58
#define BMI088_ACCEL_INT2_DRDY_INTERRUPT_SHIFTS 0x06
#define BMI088_ACCEL_INT2_DRDY_INTERRUPT        (0x01 << BMI088_ACCEL_INT2_DRDY_INTERRUPT_SHIFTS)
#define BMI088_ACCEL_INT1_DRDY_INTERRUPT_SHIFTS 0x02
#define BMI088_ACCEL_INT1_DRDY_INTERRUPT        (0x01 << BMI088_ACCEL_INT1_DRDY_INTERRUPT_SHIFTS)

#define BMI088_ACCEL_SELF_TEST                  0x6D
#define BMI088_ACCEL_SELF_TEST_OFF              0x00
#define BMI088_ACCEL_SELF_TEST_POSITIVE_SIGNAL  0x0D
#define BMI088_ACCEL_SELF_TEST_NEGATIVE_SIGNAL  0x09

#define BMI088_ACCEL_PWR_CONFIG                 0x7C
#define BMI088_ACCEL_PWR_SUSPEND_MODE           0x03
#define BMI088_ACCEL_PWR_ACTIVE_MODE            0x00

#define BMI088_ACCEL_PWR_CTRL                   0x7D
#define BMI088_ACCEL_ENABLE_ACCEL_OFF           0x00
#define BMI088_ACCEL_ENABLE_ACCEL_ON            0x04

#define BMI088_ACCEL_SOFTRESET                  0x7E
#define BMI088_ACCEL_SOFTRESET_VALUE            0xB6

#define BMI088_GYRO_CHIP_ID                     0x00
#define BMI088_GYRO_CHIP_ID_VALUE               0x0F

#define BMI088_GYRO_X_L                         0x02
#define BMI088_GYRO_X_H                         0x03
#define BMI088_GYRO_Y_L                         0x04
#define BMI088_GYRO_Y_H                         0x05
#define BMI088_GYRO_Z_L                         0x06
#define BMI088_GYRO_Z_H                         0x07

#define BMI088_GYRO_INT_STAT_1                  0x0A
#define BMI088_GYRO_DRDY_SHIFTS                 0x07
#define BMI088_GYRO_DRDY                        (0x01 << BMI088_GYRO_DRDY_SHIFTS)

#define BMI088_GYRO_RANGE                       0x0F
#define BMI088_GYRO_RANGE_SHIFTS                0x00
#define BMI088_GYRO_2000                        (0x0 << BMI088_GYRO_RANGE_SHIFTS)
#define BMI088_GYRO_1000                        (0x1 << BMI088_GYRO_RANGE_SHIFTS)
#define BMI088_GYRO_500                         (0x2 << BMI088_GYRO_RANGE_SHIFTS)
#define BMI088_GYRO_250                         (0x3 << BMI088_GYRO_RANGE_SHIFTS)
#define BMI088_GYRO_125                         (0x4 << BMI088_GYRO_RANGE_SHIFTS)

#define BMI088_GYRO_BANDWIDTH                   0x10
#define BMI088_GYRO_BANDWIDTH_MUST_SET          0x80
#define BMI088_GYRO_2000_532_HZ                 0x00
#define BMI088_GYRO_2000_230_HZ                 0x01
#define BMI088_GYRO_1000_116_HZ                 0x02
#define BMI088_GYRO_400_47_HZ                   0x03
#define BMI088_GYRO_200_23_HZ                   0x04
#define BMI088_GYRO_100_12_HZ                   0x05
#define BMI088_GYRO_200_64_HZ                   0x06
#define BMI088_GYRO_100_32_HZ                   0x07

#define BMI088_GYRO_LPM1                        0x11
#define BMI088_GYRO_NORMAL_MODE                 0x00
#define BMI088_GYRO_SUSPEND_MODE                0x80
#define BMI088_GYRO_DEEP_SUSPEND_MODE           0x20

#define BMI088_GYRO_SOFTRESET                   0x14
#define BMI088_GYRO_SOFTRESET_VALUE             0xB6

#define BMI088_GYRO_CTRL                        0x15
#define BMI088_DRDY_OFF                         0x00
#define BMI088_DRDY_ON                          0x80

#define BMI088_GYRO_INT3_INT4_IO_CONFIG         0x16
#define BMI088_GYRO_INT4_GPIO_MODE_SHIFTS       0x03
#define BMI088_GYRO_INT4_GPIO_PP                (0x00 << BMI088_GYRO_INT4_GPIO_MODE_SHIFTS)
#define BMI088_GYRO_INT4_GPIO_OD                (0x01 << BMI088_GYRO_INT4_GPIO_MODE_SHIFTS)
#define BMI088_GYRO_INT4_GPIO_LVL_SHIFTS        0x02
#define BMI088_GYRO_INT4_GPIO_LOW               (0x00 << BMI088_GYRO_INT4_GPIO_LVL_SHIFTS)
#define BMI088_GYRO_INT4_GPIO_HIGH              (0x01 << BMI088_GYRO_INT4_GPIO_LVL_SHIFTS)
#define BMI088_GYRO_INT3_GPIO_MODE_SHIFTS       0x01
#define BMI088_GYRO_INT3_GPIO_PP                (0x00 << BMI088_GYRO_INT3_GPIO_MODE_SHIFTS)
#define BMI088_GYRO_INT3_GPIO_OD                (0x01 << BMI088_GYRO_INT3_GPIO_MODE_SHIFTS)
#define BMI088_GYRO_INT3_GPIO_LVL_SHIFTS        0x00
#define BMI088_GYRO_INT3_GPIO_LOW               (0x00 << BMI088_GYRO_INT3_GPIO_LVL_SHIFTS)
#define BMI088_GYRO_INT3_GPIO_HIGH              (0x01 << BMI088_GYRO_INT3_GPIO_LVL_SHIFTS)

#define BMI088_GYRO_INT3_INT4_IO_MAP            0x18

#define BMI088_GYRO_DRDY_IO_OFF                 0x00
#define BMI088_GYRO_DRDY_IO_INT3                0x01
#define BMI088_GYRO_DRDY_IO_INT4                0x80
#define BMI088_GYRO_DRDY_IO_BOTH                (BMI088_GYRO_DRDY_IO_INT3 | BMI088_GYRO_DRDY_IO_INT4)

#define BMI088_GYRO_SELF_TEST                   0x3C
#define BMI088_GYRO_RATE_OK_SHIFTS              0x04
#define BMI088_GYRO_RATE_OK                     (0x01 << BMI088_GYRO_RATE_OK_SHIFTS)
#define BMI088_GYRO_BIST_FAIL_SHIFTS            0x02
#define BMI088_GYRO_BIST_FAIL                   (0x01 << BMI088_GYRO_BIST_FAIL_SHIFTS)
#define BMI088_GYRO_BIST_RDY_SHIFTS             0x01
#define BMI088_GYRO_BIST_RDY                    (0x01 << BMI088_GYRO_BIST_RDY_SHIFTS)
#define BMI088_GYRO_TRIG_BIST_SHIFTS            0x00
#define BMI088_GYRO_TRIG_BIST                   (0x01 << BMI088_GYRO_TRIG_BIST_SHIFTS)

#endif
