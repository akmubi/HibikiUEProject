#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "UHbkGameplayTask_EVSpectraRoomSoundType.h"
#include "HbkGameplayTask_EVSpectraRoomAudio.generated.h"

class UHbkGameplayTask_EVSpectraRoomAudio;
class UHbkSpectraRoomSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomAudio : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_EVSpectraRoomAudio(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomAudio* EventSpectraRoomAudio(UObject* WorldContextObject, UHbkGameplayTask_EVSpectraRoomSoundType Type, bool bStopMusic);
    
};

