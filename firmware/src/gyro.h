#include <stdint.h>

#define GYRO_REG_CTRL1_XL 0x10
#define GYRO_REG_CTRL2_G 0x11
#define GYRO_REG_INT1_CTRL 0x0D
#define GYRO_REG_OUTX_L_G 0x22
#define GYRO_REG_OUTX_L_A 0x28

struct gyro_data {
    int16_t x;
    int16_t y;
    int16_t z;
};

void gyro_init(void);
uint8_t gyro_ready(void);
void gyro_read(struct gyro_data *);
void accel_read(struct gyro_data * d);
