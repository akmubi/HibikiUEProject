#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHbkPartnerType.h"
#include "HbkAutoActionInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkAutoActionInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkAutoActionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNeedCheckInCameraView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCompareToAdditionalTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetUsingCloseDashOnNoChoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHbkPartnerType GetPriorityPartnerType() const;
    
};

