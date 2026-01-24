#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkTalkContext.h"
#include "HbkGameplayTask_EVSpectraRoomEntering.generated.h"

class UHbkGameplayTask_EVSpectraRoomEntering;
class UHbkSpectraRoomSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomEntering : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartTalkDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSaveDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartTalkDelegate OnStartTalk;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveDelegate OnSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_EVSpectraRoomEntering(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkEnded(const FHbkTalkContext TalkContext);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomEntering* EventSpectraRoomEntering(UObject* WorldContextObject);
    
};

