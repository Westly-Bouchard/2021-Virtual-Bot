/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/DoubleSolenoid.h>
#include <rev/ColorSensorV3.h>
#include <ctre/Phoenix.h>

#include "../robotMap/IDs.h"

class Hand : public frc2::SubsystemBase {
 public:
  Hand();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonSRX m_hand1{kHandMotor1};
  WPI_TalonSRX m_hand2{kHandMotor2};
  // frc::DoubleSolenoid s_piston{kHandSolenoid};
  rev::ColorSensorV3 m_color_sensor{frc::I2C::Port::kOnboard};

};
