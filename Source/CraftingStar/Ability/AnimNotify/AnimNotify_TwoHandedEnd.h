// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_TwoHandedEnd.generated.h"

/**
 * 
 */
UCLASS()
class CRAFTINGSTAR_API UAnimNotify_TwoHandedEnd : public UAnimNotify
{
	GENERATED_BODY()

	virtual void Notify(USkeletalMeshComponent* MeshComp , UAnimSequenceBase* Animation) override;
};