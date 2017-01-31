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
	static CORE_API const OwnVector UpVector;
	// x vector (1,0,0)
	static CORE_API const OwnVector ForwardVector;
	// y vectot (0,1,0)
	static CORE_API const OwnVector RightVector;

public:
	OwnVector();
	~OwnVector();
	OwnVector(float xi, float yi, float zi);
};
