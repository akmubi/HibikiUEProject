#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HibikiGameplayStatics.generated.h"

class AHbkPlayerCharacter;
class AHbkPlayerController;
class UHibikiGameInstance;
class ULevelStreaming;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHibikiGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHibikiGameplayStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSuspendScoreRecord(const UObject* WorldContextObject, bool Suspend);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSuspendAutoDecrease(const UObject* WorldContextObject, bool Suspend);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHintSystemDispButtnInhibit(const UObject* WorldContextObject, bool bInhibit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerController* GetHibikiPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerCharacter* GetHibikiPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* GetHibikiLoadedStreamingLevel(const UObject* WorldContextObject, FName InPackageName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHibikiGameInstance* GetHibikiGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnemyAllCleanKill(const UObject* WorldContextObject);
    
};

