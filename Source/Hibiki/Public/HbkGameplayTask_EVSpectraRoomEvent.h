#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVSpectraRoomEvent.generated.h"

class UHbkGameplayTask_EVSpectraRoomEvent;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomEvent : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEventDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventDelegate OnTrue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventDelegate OnFalse;
    
    UHbkGameplayTask_EVSpectraRoomEvent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomEvent* IsSpectraCentralRoomUnlockFirstTime(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomEvent* IsSpectraCentralRoomUnlockAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomEvent* IsEnterSpectraHubRoomFirstTime(UObject* WorldContextObject);
    
};

