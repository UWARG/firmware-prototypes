/*
 * vectorNav.hpp
 *
 *  Created on: Jun 23, 2022
 *      Author: Christopher Chung
 */

#ifndef INC_VECTORNAV_HPP_
#define INC_VECTORNAV_HPP_

#include "stm32f0xx_hal.h"
#include <stdint.h>

#define GPS_HEADER "$VNGPS"
#define IMU_HEADER "$VNIMU"

#define 

// struct based on section 8.8.1 here: https://geo-matching.com/uploads/default/m/i/migrationca8kud.pdf
typedef struct{
    double time;        // GPS time of week in seconds
    uint16_t week;      // GPS week
    uint8_t gpsFix;     // GPS fix type
    uint8_t numSats;    // Number of GPS satellites used in solution
    double latitude;    // Latitude in degrees
    double longitude;   // Longitude in degrees
    double altitude;    // Altitude above ellipsoid
    float nedVelX;      // Velocity measurement in north direction in m/s
    float nedVelY;      // Velocity measurement in east direction in m/s
    float nedVelZ;      // Velocity measurement in down direction in m/s
    float northAcc;     // North position accuracy estimate in m
    float eastAcc;      // East position accuracy estimate in m
    float vertAcc;      // Vertical position accuracy estimate in m
    float speedAcc;     // Speed accuracy estimate in m/s
    float timeAcc;      // Time accuracy estimate in seconds
}GPS_data_t; 

// struct based on section 1.7.7 here: https://geo-matching.com/uploads/default/m/i/migrationca8kud.pdf
typedef struct{
    float magX;         // Uncompensated Magnetic X-axis in Gauss
    float magY;         // Uncompensated Magnetic Y-axis in Gauss
    float magZ;         // Uncompensated Magnetic Z-axis in Gauss
    float AccelX;       // Uncompensated Acceleration X-axis in m/s^2
    float AccelY;       // Uncompensated Acceleration Y-axis in m/s^2
    float AccelZ;       // Uncompensated Acceleration Z-axis in m/s^2
    float GyroX;        // Uncompensated Angular rate X-axis in rad/s
    float GyroY;        // Uncompensated Angular rate Y-axis in rad/s
    float GyroZ;        // Uncompensated Angular rate Z-axis in rad/s
    float temp;         // IMU Temperature in degrees C
    float pressure;     // Barometric pressure in kPa
}IMU_data_t;

#endif /* INC_VECTORNAV_HPP_ */
