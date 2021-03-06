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

	/** AbilitySystemComponentのGameplayTagCountContainerに新しいGameplayTagを追加する */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	virtual void AddGameplayTags(const FGameplayTagContainer GameplayTags);

	/** AbilitySystemComponentのGameplayTagCountContainerのGameplayTagを削除する */
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	virtual void RemoveGameplayTags(const FGameplayTagContainer GameplayTags);

};
