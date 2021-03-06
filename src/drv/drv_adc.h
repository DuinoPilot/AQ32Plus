/*
  March 2013

  aq32Plus Rev -

  Copyright (c) 2012 John Ihlein.  All rights reserved.

  Open Source STM32 Based Multicopter Controller Software

  Includes code and/or ideas from:

  1)AeroQuad
  2)BaseFlight
  3)CH Robotics
  4)MultiWii
  5)S.O.H. Madgwick
  6)UAVX

  Designed to run on the AQ32 Flight Control Board

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

///////////////////////////////////////////////////////////////////////////////

#pragma once

///////////////////////////////////////////////////////////////////////////////

extern float accelSum100HzMXR[3];

extern float accelSum500HzMXR[3];

extern float accelSummedSamples100HzMXR[3];

extern float accelSummedSamples500HzMXR[3];

///////////////////////////////////////////////////////////////////////////////
//  ADC Initialization
///////////////////////////////////////////////////////////////////////////////

void adcInit(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return ADC pin 4
///////////////////////////////////////////////////////////////////////////////

float adcPin4(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return ADC pin 5
///////////////////////////////////////////////////////////////////////////////

float adcPin5(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return ADC pin 6
///////////////////////////////////////////////////////////////////////////////

float adcPin6(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return battery voltage
///////////////////////////////////////////////////////////////////////////////

float batteryVoltage(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return MXR9150 X axis value
///////////////////////////////////////////////////////////////////////////////

float mxr9150Xaxis(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return MXR9150 Y axis value
///////////////////////////////////////////////////////////////////////////////

float mxr9150Yaxis(void);

///////////////////////////////////////////////////////////////////////////////
//  Compute and return MXR9150 Z axis value
///////////////////////////////////////////////////////////////////////////////

float mxr9150Zaxis(void);

///////////////////////////////////////////////////////////////////////////////

// test code begin

uint16_t mxr9150X(void);

uint16_t mxr9150Y(void);

uint16_t mxr9150Z(void);

// test code end
uint16_t vbatt(void);
