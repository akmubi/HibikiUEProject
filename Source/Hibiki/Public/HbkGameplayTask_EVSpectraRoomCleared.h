#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkTalkContext.h"
#include "HbkGameplayTask_EVSpectraRoomCleared.generated.h"

class AHbkSpectraRoomController;
class UHbkGameplayTask_EVSpectraRoomCleared;
class UHbkSpectraRoomSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomCleared : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTakeItemDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTakeItemDelegate OnTakeItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkSpectraRoomController* SpectraRoomController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_EVSpectraRoomCleared(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkEnded(const FHbkTalkContext TalkContext);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomCleared* EventSpectraRoomCleared(UObject* WorldContextObject);
    
};

