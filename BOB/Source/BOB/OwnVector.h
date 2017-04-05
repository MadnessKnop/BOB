// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UnrealMathUtility.h"

/**
 * 
 */
class BOB_API OwnVector
{
	float x;
	float y;
	float z;
public:
	// z vector (0,0,1)
	const OwnVector UpVector(float xi, float yi, float zi);
	// x vector (1,0,0)
	const OwnVector ForwardVector(float xi, float yi, float zi);
	// y vectot (0,1,0)
	const OwnVector RightVector(float xi, float yi, float zi);

public:
	OwnVector(void);
	//~OwnVector();
	OwnVector(float xi, float yi, float zi);
};
