void imu_init(struct gyro_data *gyro);
void imu_init_zero(void);
void imu_update_from_gyro(struct gyro_data *gyro);
void imu_update_from_accel(struct gyro_data *accel);
