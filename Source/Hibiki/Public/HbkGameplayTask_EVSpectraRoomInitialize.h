#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVSpectraRoomInitialize.generated.h"

class UHbkGameplayTask_EVSpectraRoomInitialize;
class UHbkSpectraBattleController;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomInitialize : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraBattleController* SpectraBattleController;
    
public:
    UHbkGameplayTask_EVSpectraRoomInitialize(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomInitialize* EventSpectraRoomInitialize(UObject* WorldContextObject, UHbkSpectraBattleController* NewSpectraBattleController);
    
};

