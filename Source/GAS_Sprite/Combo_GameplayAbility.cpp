// Fill out your copyright notice in the Description page of Project Settings.

#include "Combo_GameplayAbility.h"
#include "AbilitySystemComponent.h"

void UCombo_GameplayAbility::AddGameplayTags(const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* Comp = GetAbilitySystemComponentFromActorInfo();

	Comp->AddLooseGameplayTags(GameplayTags);
}

void UCombo_GameplayAbility::RemoveGameplayTags(const FGameplayTagContainer GameplayTags)
{
	UAbilitySystemComponent* Comp = GetAbilitySystemComponentFromActorInfo();

	Comp->RemoveLooseGameplayTags(GameplayTags);
}
