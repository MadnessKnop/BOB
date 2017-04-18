// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UnrealMathUtility.h"

/**
 * 
 */
class BOB_API OwnVector
{
public:
	float x;
	float y;
	float z;

	OwnVector& ConvertToOwnVector(FVector);
	// z vector (0,0,1)
	const OwnVector UpVector(float xi, float yi, float zi);
	// x vector (1,0,0)
	const OwnVector ForwardVector(float xi, float yi, float zi);
	// y vectot (0,1,0)
	const OwnVector RightVector(float xi, float yi, float zi);
	// 0 vector (0,0,0)
	const OwnVector ZeroVector(float xi, float yi, float zi);
	bool IsZero() const;

	OwnVector GetSafeNormal(float Tolerance = SMALL_NUMBER) const;
	DEPRECATED(4.7, "Deprecated due to unclear name, use GetSafeNormal instead.")
	OwnVector SafeNormal(float Tolerance = SMALL_NUMBER) const;

	OwnVector(void);
	//~OwnVector();
	OwnVector(float xi, float yi, float zi);
};
