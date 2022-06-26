/*
 * vectorNav.cpp
 *
 *  Created on: Jun 23, 2022
 *      Author: Christopher Chung
 */

#include "vectorNav.hpp"

/* Public Methods  ---------------------------------------------------------*/

Position& VN300::getInstance(){
    static VN300 singleton;
    return singleton;
}

void VN300::GetResult(PositionData_t* data){

}

/* Private methods  ---------------------------------------------------------*/
VN300::VN300(){
    VN300Init();
}

void VN300::VN300Init(void){

}

void VN300::getGPSData(GPSData_t& gpsData){

}

void VN300::getIMUData(IMUData_t& imuData){

}

