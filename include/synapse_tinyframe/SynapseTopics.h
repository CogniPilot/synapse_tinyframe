#ifndef SynapseTopicsH
#define SynapseTopicsH

#ifdef __cplusplus
extern "C" {
#endif

#define SYNAPSE_CMD_VEL_TOPIC 0
#define SYNAPSE_CMD_VEL_TYPE Twist

#define SYNAPSE_ODOMETRY_TOPIC 1
#define SYNAPSE_ODOMETRY_TYPE Odometry

#define SYNAPSE_INPUT_TOPIC 2
#define SYNAPSE_INPUT_TYPE Input

#define SYNAPSE_BEZIER_TRAJECTORY_TOPIC 3
#define SYNAPSE_BEZIER_TRAJECTORY_TYPE BezierTrajectory

#define SYNAPSE_IMU_TOPIC 4
#define SYNAPSE_IMU_TYPE IMU

#define SYNAPSE_MAGNETIC_FIELD_TOPIC 5
#define SYNAPSE_MAGNETIC_FIELD_TYPE MagneticField

#define SYNAPSE_NAV_SAT_FIX_TOPIC 6
#define SYNAPSE_NAV_SAT_FIX_TYPE NavSatFix

#define SYNAPSE_ALTIMETER_TOPIC 7
#define SYNAPSE_ALTIMETER_TYPE Altimeter

#define SYNAPSE_ACTUATORS_TOPIC 8
#define SYNAPSE_ACTUATORS_TYPE Actuators

#define SYNAPSE_CLOCK_OFFSET_TOPIC 9
#define SYNAPSE_CLOCK_OFFSET_TYPE Timestamp

#define SYNAPSE_BATTERY_STATE_TOPIC 10
#define SYNAPSE_BATTERY_STATE Timestamp

#define SYNAPSE_WHEEL_ODOMETRY_TOPIC 11
#define SYNAPSE_WHEEL_ODOMETRY_TYPE WheelOdometry

#define SYNAPSE_LED_ARRAY_TOPIC 12
#define SYNAPSE_LED_ARRAY_TYPE LEDArray

#define SYNAPSE_STATUS_TOPIC 13
#define SYNAPSE_STATUS_TYPE Status

#define SYNAPSE_SAFETY_TOPIC 14
#define SYNAPSE_SAFETY_TYPE Safety

#define SYNAPSE_UPTIME_TOPIC 15
#define SYNAPSE_UPTIME_TYPE Time

#define SYNAPSE_SIM_CLOCK_TOPIC 63
#define SYNAPSE_SIM_CLOCK_TYPE SimClock

// Reserved (128-255)

#ifdef __cplusplus
}
#endif

#endif //SynapseTopicsH
