#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EGrapplingResult.h"
#include "HbkGrapplingInfo.h"
#include "HbkGrapplingInputInfo.h"
#include "HbkGrapplingInterface.generated.h"

class UAnimMontage;

UINTERFACE(Blueprintable, MinimalAPI)
class UHbkGrapplingInterface : public UInterface {
    GENERATED_BODY()
};

class IHbkGrapplingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* PerformGrappling(const FHbkGrapplingInfo& Info, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyGrapplingInput(const FHbkGrapplingInputInfo& InputInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyGrappling(const FHbkGrapplingInfo& Info, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsGrapplingAccepted(const FHbkGrapplingInfo& Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGrapplingResult GetResultDuringGrappling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndGrappling(const FHbkGrapplingInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginGrappling(const FHbkGrapplingInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AcceptedGrappling(const FHbkGrapplingInfo& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AbortGrappling(const FHbkGrapplingInfo& Info);
    
};

