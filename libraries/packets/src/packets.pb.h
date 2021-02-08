/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_PACKETS_PB_H_INCLUDED
#define PB_PACKETS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _TelemetryPacket_GPSStatus {
    TelemetryPacket_GPSStatus_OPERATIONAL = 0,
    TelemetryPacket_GPSStatus_SIGNAL_ERROR = 1,
    TelemetryPacket_GPSStatus_FIX_ERROR = 2,
    TelemetryPacket_GPSStatus_INTERNAL_ERROR = 3
} TelemetryPacket_GPSStatus;

/* Struct definitions */
typedef struct _TelemetryPacket_IMU {
    float acceleration_x;
    float acceleration_y;
    float acceleration_z;
    float gyroscope_x;
    float gyroscope_y;
    float gyroscope_z;
    float magnetometer_x;
    float magnetometer_y;
    float magnetometer_z;
    float secondary_temperature;
} TelemetryPacket_IMU;

typedef struct _TelemetryPacket {
    bool ignition;
    bool parachute_open;
    bool payload_separated;
    TelemetryPacket_GPSStatus gps_reporting_status;
    bool has_latitude;
    double latitude;
    bool has_longitude;
    double longitude;
    bool mobileStatus;
    bool has_signal_strength;
    float signal_strength;
    bool imu_Status;
    bool barometer_status;
    bool thermometer_status;
    bool has_imu_data;
    TelemetryPacket_IMU imu_data;
    bool has_air_pressure;
    float air_pressure;
    bool has_computed_height;
    float computed_height;
} TelemetryPacket;


/* Helper constants for enums */
#define _TelemetryPacket_GPSStatus_MIN TelemetryPacket_GPSStatus_OPERATIONAL
#define _TelemetryPacket_GPSStatus_MAX TelemetryPacket_GPSStatus_INTERNAL_ERROR
#define _TelemetryPacket_GPSStatus_ARRAYSIZE ((TelemetryPacket_GPSStatus)(TelemetryPacket_GPSStatus_INTERNAL_ERROR+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define TelemetryPacket_init_default             {0, 0, 0, _TelemetryPacket_GPSStatus_MIN, false, 0, false, 0, 0, false, 0, 0, 0, 0, false, TelemetryPacket_IMU_init_default, false, 0, false, 0}
#define TelemetryPacket_IMU_init_default         {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define TelemetryPacket_init_zero                {0, 0, 0, _TelemetryPacket_GPSStatus_MIN, false, 0, false, 0, 0, false, 0, 0, 0, 0, false, TelemetryPacket_IMU_init_zero, false, 0, false, 0}
#define TelemetryPacket_IMU_init_zero            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define TelemetryPacket_IMU_acceleration_x_tag   1
#define TelemetryPacket_IMU_acceleration_y_tag   2
#define TelemetryPacket_IMU_acceleration_z_tag   3
#define TelemetryPacket_IMU_gyroscope_x_tag      4
#define TelemetryPacket_IMU_gyroscope_y_tag      5
#define TelemetryPacket_IMU_gyroscope_z_tag      6
#define TelemetryPacket_IMU_magnetometer_x_tag   7
#define TelemetryPacket_IMU_magnetometer_y_tag   8
#define TelemetryPacket_IMU_magnetometer_z_tag   9
#define TelemetryPacket_IMU_secondary_temperature_tag 10
#define TelemetryPacket_ignition_tag             1
#define TelemetryPacket_parachute_open_tag       2
#define TelemetryPacket_payload_separated_tag    3
#define TelemetryPacket_gps_reporting_status_tag 4
#define TelemetryPacket_latitude_tag             5
#define TelemetryPacket_longitude_tag            6
#define TelemetryPacket_mobileStatus_tag         7
#define TelemetryPacket_signal_strength_tag      8
#define TelemetryPacket_imu_Status_tag           9
#define TelemetryPacket_barometer_status_tag     10
#define TelemetryPacket_thermometer_status_tag   11
#define TelemetryPacket_imu_data_tag             12
#define TelemetryPacket_air_pressure_tag         13
#define TelemetryPacket_computed_height_tag      14

/* Struct field encoding specification for nanopb */
#define TelemetryPacket_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, BOOL,     ignition,          1) \
X(a, STATIC,   SINGULAR, BOOL,     parachute_open,    2) \
X(a, STATIC,   SINGULAR, BOOL,     payload_separated,   3) \
X(a, STATIC,   SINGULAR, UENUM,    gps_reporting_status,   4) \
X(a, STATIC,   OPTIONAL, DOUBLE,   latitude,          5) \
X(a, STATIC,   OPTIONAL, DOUBLE,   longitude,         6) \
X(a, STATIC,   SINGULAR, BOOL,     mobileStatus,      7) \
X(a, STATIC,   OPTIONAL, FLOAT,    signal_strength,   8) \
X(a, STATIC,   SINGULAR, BOOL,     imu_Status,        9) \
X(a, STATIC,   SINGULAR, BOOL,     barometer_status,  10) \
X(a, STATIC,   SINGULAR, BOOL,     thermometer_status,  11) \
X(a, STATIC,   OPTIONAL, MESSAGE,  imu_data,         12) \
X(a, STATIC,   OPTIONAL, FLOAT,    air_pressure,     13) \
X(a, STATIC,   OPTIONAL, FLOAT,    computed_height,  14)
#define TelemetryPacket_CALLBACK NULL
#define TelemetryPacket_DEFAULT NULL
#define TelemetryPacket_imu_data_MSGTYPE TelemetryPacket_IMU

#define TelemetryPacket_IMU_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    acceleration_x,    1) \
X(a, STATIC,   SINGULAR, FLOAT,    acceleration_y,    2) \
X(a, STATIC,   SINGULAR, FLOAT,    acceleration_z,    3) \
X(a, STATIC,   SINGULAR, FLOAT,    gyroscope_x,       4) \
X(a, STATIC,   SINGULAR, FLOAT,    gyroscope_y,       5) \
X(a, STATIC,   SINGULAR, FLOAT,    gyroscope_z,       6) \
X(a, STATIC,   SINGULAR, FLOAT,    magnetometer_x,    7) \
X(a, STATIC,   SINGULAR, FLOAT,    magnetometer_y,    8) \
X(a, STATIC,   SINGULAR, FLOAT,    magnetometer_z,    9) \
X(a, STATIC,   SINGULAR, FLOAT,    secondary_temperature,  10)
#define TelemetryPacket_IMU_CALLBACK NULL
#define TelemetryPacket_IMU_DEFAULT NULL

extern const pb_msgdesc_t TelemetryPacket_msg;
extern const pb_msgdesc_t TelemetryPacket_IMU_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define TelemetryPacket_fields &TelemetryPacket_msg
#define TelemetryPacket_IMU_fields &TelemetryPacket_IMU_msg

/* Maximum encoded size of messages (where known) */
#define TelemetryPacket_size                     101
#define TelemetryPacket_IMU_size                 50

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
