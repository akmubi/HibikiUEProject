#pragma once
#include "CoreMinimal.h"
#include "HbkGameModeBase.h"
#include "HibikiGameMode.generated.h"

class UAkAudioEvent;
class UDataTable;
class ULevelSequence;
class UObject;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AHibikiGameMode : public AHbkGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AudioLoadCheckParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStageDataSaveEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> LevelLoadAudioCheckBankList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, ULevelSequence*> VideoSequencerAssets;
    
public:
    AHibikiGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestFadeInUnLock(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestFadeInLock(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBeginPlayStartWaiting(UObject* WorldContextObject);
    
};

