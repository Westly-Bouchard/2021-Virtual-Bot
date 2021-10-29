/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Arm.h"
#include "robotMap/Constants.h"

Arm::Arm() {
  m_shoulder2.Follow(m_shoulder, false);
  m_shoulder.SetIdleMode(rev::CANSparkMax::IdleMode::kBrake);
}

// This method will be called once per scheduler run
void Arm::Periodic() {}

void Arm::SetSpeeds(double wristSpeed, double shoulderSpeed) {

}