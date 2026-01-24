#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "HbkHologramCharaPostStateTester.generated.h"

UCLASS(Blueprintable)
class UHbkHologramCharaPostStateTester : public UObject {
    GENERATED_BODY()
public:
    UHbkHologramCharaPostStateTester();

    UFUNCTION(BlueprintCallable)
    void EndTest();
    
    UFUNCTION(BlueprintCallable)
    void BeginTest3(const FName& RowName, const EHbkHologramCharaPostActivateGroup HologramCharaPostActivateGroup, const bool bHologramAppear);
    
    UFUNCTION(BlueprintCallable)
    void BeginTest(const FName& RowName, const EHbkHologramCharaPostActivateGroup HologramCharaPostActivateGroup, const bool bHologramAppear);
    
};

