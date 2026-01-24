#pragma once
#include "CoreMinimal.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkOnAsyncSaveGameCompleteDelegate.h"
#include "HbkSaveGameBlueprintAsyncLoadGame.generated.h"

class UHbkSaveGameBlueprintAsyncLoadGame;
class UObject;

UCLASS(Blueprintable)
class UHbkSaveGameBlueprintAsyncLoadGame : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkOnAsyncSaveGameComplete OnCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    UHbkSaveGameBlueprintAsyncLoadGame();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncLoadGame* RequestLoadMostRecentGame(UObject* NewWorldContextObject, bool bDisconnectIfError);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncLoadGame* RequestLoadGameWithJumpGameSeq(UObject* NewWorldContextObject, const FString& SlotName, const FName& JumpGameSeqName, bool bDisconnectIfError);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameBlueprintAsyncLoadGame* RequestLoadGame(UObject* NewWorldContextObject, const FString& SlotName, bool bDisconnectIfError);
    
};

