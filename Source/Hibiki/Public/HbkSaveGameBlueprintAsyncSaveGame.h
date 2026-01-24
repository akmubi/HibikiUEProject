#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkOnAsyncSaveGameCompleteDelegate.h"
#include "HbkSaveGameBlueprintAsyncSaveGame.generated.h"

class APlayerStart;
class UHbkSaveGameBlueprintAsyncSaveGame;
class UObject;

UCLASS(Blueprintable)
class UHbkSaveGameBlueprintAsyncSaveGame : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkOnAsyncSaveGameComplete OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UHbkSaveGameBlueprintAsyncSaveGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncSaveGame* RequestSaveGame(UObject* NewWorldContextObject, const FString& SlotName, APlayerStart* OverrideSpawnSpot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncSaveGame* RequestAutoSaveGameOnTransferStageDatas(UObject* NewWorldContextObject, const FString& LevelName, const FString& SpawnSpotName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncSaveGame* RequestAutoSaveGameOnStageClear(UObject* NewWorldContextObject, const FString& NextLevelName, const FString& NextSpawnSpotName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncSaveGame* RequestAutoSaveGameOnHideOut(UObject* NewWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncSaveGame* RequestAutoSaveGameOnDeath(UObject* NewWorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncSaveGame* RequestAutoSaveGame(UObject* NewWorldContextObject, APlayerStart* OverrideSpawnSpot);
    
};

