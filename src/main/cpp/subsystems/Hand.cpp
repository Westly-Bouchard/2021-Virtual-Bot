/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Hand.h"
#include "robotMap/Constants.h"

Hand::Hand() {}

void Hand::spinWheels(double left, double right) {
  m_hand1.Set(left);
  m_hand1.Set(right);
}

void Hand::extendSolenoid() {
  s_piston.Set(frc::DoubleSolenoid::kForward);
  extended = true;
}

void Hand::retractSolenoid() {
  s_piston.Set(frc::DoubleSolenoid::kReverse);
  extended = false;
}

bool Hand::getState() {
  return extended;
}

// This method will be called once per scheduler run
void Hand::Periodic() {}
