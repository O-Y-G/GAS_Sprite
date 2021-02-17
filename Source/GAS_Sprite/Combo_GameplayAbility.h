// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Combo_GameplayAbility.generated.h"

/**
*
*/
UCLASS()
class GAS_SPRITE_API UCombo_GameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

	/** AbilitySystemComponent��GameplayTagCountContainer�ɐV����GameplayTag��ǉ����� */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	virtual void AddGameplayTags(const FGameplayTagContainer GameplayTags);

	/** AbilitySystemComponent��GameplayTagCountContainer��GameplayTag���폜���� */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

};
