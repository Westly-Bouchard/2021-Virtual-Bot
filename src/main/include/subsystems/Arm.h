/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>
#include <ctre/Phoenix.h>

#include "../robotMap/IDs.h"

class Arm : public frc2::SubsystemBase {
 public:
  Arm();
  
  void SetSpeeds(double wristSpeed, double shoulderSpeed);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();

 private:
  rev::CANSparkMax m_shoulder{kShoulderMotor1, rev::CANSparkMax::MotorType::kBrushless};
  rev::CANSparkMax m_shoulder2{kShoulderMotor2, rev::CANSparkMax::MotorType::kBrushless};

  rev::CANEncoder m_shoulderEncoder = m_shoulder.GetEncoder();
  frc2::PIDController m_PID;

  WPI_TalonFX m_wrist{kWristMotor};
};
